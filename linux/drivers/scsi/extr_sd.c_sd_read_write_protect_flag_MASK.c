
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_mode_data {int device_specific; } ;
struct scsi_disk {int write_prot; scalar_t__ first_scan; int disk; struct scsi_device* device; } ;
struct scsi_device {scalar_t__ use_192_bytes_for_3f; scalar_t__ skip_ms_page_3f; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct scsi_device*,int ,int,unsigned char*,int,struct scsi_mode_data*,int *) ;
 int FUNC_2 (int ,struct scsi_disk*,char*) ;
 int FUNC_3 (int ,struct scsi_disk*,char*,...) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void
FUNC_5(struct scsi_disk *VAR_3, unsigned char *VAR_4)
{
 int VAR_5;
 struct scsi_device *VAR_6 = VAR_3->device;
 struct scsi_mode_data VAR_7;
 int VAR_8 = VAR_3->write_prot;

 FUNC_4(VAR_3->disk, 0);
 if (VAR_6->skip_ms_page_3f) {
  FUNC_2(VAR_1, VAR_3, "Assuming Write Enabled\n");
  return;
 }

 if (VAR_6->use_192_bytes_for_3f) {
  VAR_5 = FUNC_1(VAR_6, 0, 0x3F, VAR_4, 192, &VAR_7, ((void*)0));
 } else {





  VAR_5 = FUNC_1(VAR_6, 0, 0x3F, VAR_4, 4, &VAR_7, ((void*)0));







  if (!FUNC_0(VAR_5))
   VAR_5 = FUNC_1(VAR_6, 0, 0, VAR_4, 4, &VAR_7, ((void*)0));




  if (!FUNC_0(VAR_5))
   VAR_5 = FUNC_1(VAR_6, 0, 0x3F, VAR_4, 255,
            &VAR_7, ((void*)0));
 }

 if (!FUNC_0(VAR_5)) {
  FUNC_2(VAR_2, VAR_3,
     "Test WP failed, assume Write Enabled\n");
 } else {
  VAR_3->write_prot = ((VAR_7.device_specific & 0x80) != 0);
  FUNC_4(VAR_3->disk, VAR_3->write_prot);
  if (VAR_3->first_scan || VAR_8 != VAR_3->write_prot) {
   FUNC_3(VAR_1, VAR_3, "Write Protect is %s\n",
      VAR_3->write_prot ? "on" : "off");
   FUNC_3(VAR_0, VAR_3, "Mode Sense: %4ph\n", VAR_4);
  }
 }
}
