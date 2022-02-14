
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_sense_hdr {int sense_key; int asc; int ascq; } ;
struct scsi_device {int dummy; } ;
struct hp_sw_dh_data {int path_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int FUNC_0 (int ,struct scsi_device*,char*,int ,int,int,int) ;

__attribute__((used)) static int FUNC_1(struct scsi_device *VAR_6, struct hp_sw_dh_data *VAR_7,
      struct scsi_sense_hdr *VAR_8)
{
 int VAR_9 = VAR_4;

 switch (VAR_8->sense_key) {
 case 128:
  VAR_9 = VAR_3;
  break;
 case 129:
  if (VAR_8->asc == 0x04 && VAR_8->ascq == 2) {





   VAR_7->path_state = VAR_1;
   VAR_9 = VAR_5;
   break;
  }

 default:
  FUNC_0(VAR_2, VAR_6,
      "%s: sending tur failed, sense %x/%x/%x\n",
      VAR_0, VAR_8->sense_key, VAR_8->asc,
      VAR_8->ascq);
  break;
 }
 return VAR_9;
}
