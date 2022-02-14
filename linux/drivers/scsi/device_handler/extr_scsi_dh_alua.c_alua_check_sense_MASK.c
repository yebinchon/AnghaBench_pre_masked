
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_sense_hdr {int sense_key; int asc; int ascq; } ;
struct scsi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;

 int FUNC_0 (struct scsi_device*,int) ;

__attribute__((used)) static int FUNC_1(struct scsi_device *VAR_3,
       struct scsi_sense_hdr *VAR_4)
{
 switch (VAR_4->sense_key) {
 case 129:
  if (VAR_4->asc == 0x04 && VAR_4->ascq == 0x0a) {



   FUNC_0(VAR_3, 0);
   return VAR_1;
  }
  break;
 case 128:
  if (VAR_4->asc == 0x29 && VAR_4->ascq == 0x00) {





   FUNC_0(VAR_3, 1);
   return VAR_0;
  }
  if (VAR_4->asc == 0x29 && VAR_4->ascq == 0x04)



   return VAR_0;
  if (VAR_4->asc == 0x2a && VAR_4->ascq == 0x01)



   return VAR_0;
  if (VAR_4->asc == 0x2a && VAR_4->ascq == 0x06) {



   FUNC_0(VAR_3, 1);
   return VAR_0;
  }
  if (VAR_4->asc == 0x2a && VAR_4->ascq == 0x07) {



   FUNC_0(VAR_3, 1);
   return VAR_0;
  }
  if (VAR_4->asc == 0x3f && VAR_4->ascq == 0x03)



   return VAR_0;
  if (VAR_4->asc == 0x3f && VAR_4->ascq == 0x0e)





   return VAR_0;
  break;
 }

 return VAR_2;
}
