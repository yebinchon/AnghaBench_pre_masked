
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scsi_sense_hdr {scalar_t__ sense_key; int asc; int ascq; } ;
struct scsi_mode_data {int header_length; int length; int block_descriptor_length; int device_specific; } ;
struct scsi_disk {int WCE; int RCD; int DPOFUA; scalar_t__ first_scan; scalar_t__ write_prot; struct scsi_device* device; scalar_t__ cache_override; } ;
struct scsi_device {scalar_t__ type; scalar_t__ wce_default_on; int use_16_for_rw; int use_10_for_rw; scalar_t__ broken_fua; scalar_t__ use_192_bytes_for_3f; scalar_t__ skip_ms_page_3f; scalar_t__ skip_ms_page_8; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (struct scsi_sense_hdr*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct scsi_device*,int,int,unsigned char*,int,struct scsi_mode_data*,struct scsi_sense_hdr*) ;
 int FUNC_3 (int ,struct scsi_disk*,char*,...) ;
 int FUNC_4 (int ,struct scsi_disk*,char*,char*,char*,char*) ;

__attribute__((used)) static void
FUNC_5(struct scsi_disk *VAR_5, unsigned char *VAR_6)
{
 int VAR_7 = 0, VAR_8;
 struct scsi_device *VAR_9 = VAR_5->device;

 int VAR_10;
 int VAR_11;
 int VAR_12;
 struct scsi_mode_data VAR_13;
 struct scsi_sense_hdr VAR_14;
 int VAR_15 = VAR_5->WCE;
 int VAR_16 = VAR_5->RCD;
 int VAR_17 = VAR_5->DPOFUA;


 if (VAR_5->cache_override)
  return;

 VAR_12 = 4;
 if (VAR_9->skip_ms_page_8) {
  if (VAR_9->type == VAR_4)
   goto defaults;
  else {
   if (VAR_9->skip_ms_page_3f)
    goto defaults;
   VAR_11 = 0x3F;
   if (VAR_9->use_192_bytes_for_3f)
    VAR_12 = 192;
   VAR_10 = 0;
  }
 } else if (VAR_9->type == VAR_4) {
  VAR_11 = 6;
  VAR_10 = 8;
 } else {
  VAR_11 = 8;
  VAR_10 = 0;
 }


 VAR_8 = FUNC_2(VAR_9, VAR_10, VAR_11, VAR_6, VAR_12,
   &VAR_13, &VAR_14);

 if (!FUNC_1(VAR_8))
  goto bad_sense;

 if (!VAR_13.header_length) {
  VAR_11 = 6;
  VAR_12 = 0;
  FUNC_3(VAR_1, VAR_5,
    "Missing header in MODE_SENSE response\n");
 }


 VAR_7 = VAR_13.length;





 if (VAR_7 < 3)
  goto bad_sense;
 else if (VAR_7 > VAR_3) {
  FUNC_3(VAR_2, VAR_5, "Truncating mode parameter "
     "data from %d to %d bytes\n", VAR_7, VAR_3);
  VAR_7 = VAR_3;
 }
 if (VAR_11 == 0x3F && VAR_9->use_192_bytes_for_3f)
  VAR_7 = 192;


 if (VAR_7 > VAR_12)
  VAR_8 = FUNC_2(VAR_9, VAR_10, VAR_11, VAR_6, VAR_7,
    &VAR_13, &VAR_14);

 if (FUNC_1(VAR_8)) {
  int VAR_18 = VAR_13.header_length + VAR_13.block_descriptor_length;

  while (VAR_18 < VAR_7) {
   u8 VAR_19 = VAR_6[VAR_18] & 0x3F;
   u8 VAR_20 = VAR_6[VAR_18] & 0x40;

   if (VAR_19 == 8 || VAR_19 == 6) {


    if (VAR_7 - VAR_18 <= 2) {
     FUNC_3(VAR_1, VAR_5,
      "Incomplete mode parameter "
       "data\n");
     goto defaults;
    } else {
     VAR_11 = VAR_19;
     goto Page_found;
    }
   } else {

    if (VAR_20 && VAR_7 - VAR_18 > 3)
     VAR_18 += 4 + (VAR_6[VAR_18+2] << 8) +
      VAR_6[VAR_18+3];
    else if (!VAR_20 && VAR_7 - VAR_18 > 1)
     VAR_18 += 2 + VAR_6[VAR_18+1];
    else {
     FUNC_3(VAR_1, VAR_5,
       "Incomplete mode "
       "parameter data\n");
     goto defaults;
    }
   }
  }

  FUNC_3(VAR_1, VAR_5, "No Caching mode page found\n");
  goto defaults;

 Page_found:
  if (VAR_11 == 8) {
   VAR_5->WCE = ((VAR_6[VAR_18 + 2] & 0x04) != 0);
   VAR_5->RCD = ((VAR_6[VAR_18 + 2] & 0x01) != 0);
  } else {
   VAR_5->WCE = ((VAR_6[VAR_18 + 2] & 0x01) == 0);
   VAR_5->RCD = 0;
  }

  VAR_5->DPOFUA = (VAR_13.device_specific & 0x10) != 0;
  if (VAR_9->broken_fua) {
   FUNC_3(VAR_2, VAR_5, "Disabling FUA\n");
   VAR_5->DPOFUA = 0;
  } else if (VAR_5->DPOFUA && !VAR_5->device->use_10_for_rw &&
      !VAR_5->device->use_16_for_rw) {
   FUNC_3(VAR_2, VAR_5,
      "Uses READ/WRITE(6), disabling FUA\n");
   VAR_5->DPOFUA = 0;
  }


  if (VAR_5->WCE && VAR_5->write_prot)
   VAR_5->WCE = 0;

  if (VAR_5->first_scan || VAR_15 != VAR_5->WCE ||
      VAR_16 != VAR_5->RCD || VAR_17 != VAR_5->DPOFUA)
   FUNC_4(VAR_2, VAR_5,
      "Write cache: %s, read cache: %s, %s\n",
      VAR_5->WCE ? "enabled" : "disabled",
      VAR_5->RCD ? "disabled" : "enabled",
      VAR_5->DPOFUA ? "supports DPO and FUA"
      : "doesn't support DPO or FUA");

  return;
 }

bad_sense:
 if (FUNC_0(&VAR_14) &&
     VAR_14.sense_key == VAR_0 &&
     VAR_14.asc == 0x24 && VAR_14.ascq == 0x0)

  FUNC_3(VAR_2, VAR_5, "Cache data unavailable\n");
 else
  FUNC_3(VAR_1, VAR_5,
    "Asking for cache data failed\n");

defaults:
 if (VAR_9->wce_default_on) {
  FUNC_3(VAR_2, VAR_5,
    "Assuming drive cache: write back\n");
  VAR_5->WCE = 1;
 } else {
  FUNC_3(VAR_1, VAR_5,
    "Assuming drive cache: write through\n");
  VAR_5->WCE = 0;
 }
 VAR_5->RCD = 0;
 VAR_5->DPOFUA = 0;
}
