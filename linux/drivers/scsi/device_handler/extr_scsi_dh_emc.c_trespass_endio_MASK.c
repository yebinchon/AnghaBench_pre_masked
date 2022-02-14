
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_sense_hdr {int sense_key; int asc; int ascq; } ;
struct scsi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,struct scsi_device*,char*,int ,...) ;

__attribute__((used)) static int FUNC_1(struct scsi_device *VAR_6,
     struct scsi_sense_hdr *VAR_7)
{
 int VAR_8 = VAR_5;

 FUNC_0(VAR_1, VAR_6, "%s: Found valid sense data 0x%2x, "
      "0x%2x, 0x%2x while sending CLARiiON trespass "
      "command.\n", VAR_0, VAR_7->sense_key,
      VAR_7->asc, VAR_7->ascq);

 if (VAR_7->sense_key == 0x05 && VAR_7->asc == 0x04 &&
     VAR_7->ascq == 0x00) {




  FUNC_0(VAR_2, VAR_6, "%s: Array Based Copy in "
       "progress while sending CLARiiON trespass "
       "command.\n", VAR_0);
  VAR_8 = VAR_4;
 } else if (VAR_7->sense_key == 0x02 && VAR_7->asc == 0x04 &&
     VAR_7->ascq == 0x03) {




  FUNC_0(VAR_2, VAR_6, "%s: Detected in-progress "
       "ucode upgrade NDU operation while sending "
       "CLARiiON trespass command.\n", VAR_0);
  VAR_8 = VAR_4;
 } else
  VAR_8 = VAR_3;
 return VAR_8;
}
