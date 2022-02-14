
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_sense_hdr {int response_code; int additional_length; int sense_key; int asc; int ascq; } ;
struct scsi_device {int sdev_bflags; int retry_hwerror; int allow_restart; TYPE_2__* sdev_target; int expecting_cc_ua; TYPE_1__* handler; } ;
struct scsi_cmnd {scalar_t__* cmnd; scalar_t__ scsi_done; int* sense_buffer; struct scsi_device* device; } ;
struct TYPE_4__ {int expecting_lun_change; } ;
struct TYPE_3__ {int (* check_sense ) (struct scsi_device*,struct scsi_sense_hdr*) ;} ;



 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




 int VAR_7 ;



 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;


 int FUNC_0 (struct scsi_cmnd*,struct scsi_sense_hdr*) ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (struct scsi_device*,struct scsi_sense_hdr*) ;
 scalar_t__ FUNC_2 (struct scsi_sense_hdr*) ;
 int FUNC_3 (struct scsi_cmnd*,int ) ;
 int FUNC_4 (struct scsi_device*,struct scsi_sense_hdr*) ;

int FUNC_5(struct scsi_cmnd *VAR_12)
{
 struct scsi_device *VAR_13 = VAR_12->device;
 struct scsi_sense_hdr VAR_14;

 if (! FUNC_0(VAR_12, &VAR_14))
  return VAR_6;

 FUNC_1(VAR_13, &VAR_14);

 if (FUNC_2(&VAR_14))
  return VAR_7;

 if (VAR_13->handler && VAR_13->handler->check_sense) {
  int VAR_15;

  VAR_15 = VAR_13->handler->check_sense(VAR_13, &VAR_14);
  if (VAR_15 != VAR_8)
   return VAR_15;

 }

 if (VAR_12->cmnd[0] == VAR_10 && VAR_12->scsi_done != VAR_11)





  return VAR_9;





 if (VAR_14.response_code == 0x70) {

  if (VAR_12->sense_buffer[2] & 0xe0)
   return VAR_9;
 } else {





  if ((VAR_14.additional_length > 3) &&
      (VAR_12->sense_buffer[8] == 0x4) &&
      (VAR_12->sense_buffer[11] & 0xe0))
   return VAR_9;
 }

 switch (VAR_14.sense_key) {
 case 131:
  return VAR_9;
 case 130:
  return VAR_9;

 case 140:
  if (VAR_14.asc == 0x10)
   return VAR_9;

  if (VAR_14.asc == 0x44 && VAR_13->sdev_bflags & VAR_2)
   return VAR_0;
  if (VAR_14.asc == 0xc1 && VAR_14.ascq == 0x01 &&
      VAR_13->sdev_bflags & VAR_1)
   return VAR_0;

  return VAR_7;
 case 132:
 case 129:






  if (VAR_12->device->expecting_cc_ua) {






   if (VAR_14.asc != 0x28 || VAR_14.ascq != 0x00) {
    VAR_12->device->expecting_cc_ua = 0;
    return VAR_7;
   }
  }





  if (VAR_12->device->sdev_target->expecting_lun_change &&
      VAR_14.asc == 0x3f && VAR_14.ascq == 0x0e)
   return VAR_7;




  if ((VAR_14.asc == 0x04) && (VAR_14.ascq == 0x01))
   return VAR_7;




  if (VAR_12->device->allow_restart &&
      (VAR_14.asc == 0x04) && (VAR_14.ascq == 0x02))
   return VAR_6;




  return VAR_9;


 case 137:
  if (VAR_14.asc == 0x27 && VAR_14.ascq == 0x07) {

   FUNC_3(VAR_12, VAR_3);
   return VAR_9;
  }

 case 138:
 case 128:
 case 133:
 case 139:
  FUNC_3(VAR_12, VAR_5);
  return VAR_9;

 case 134:
  if (VAR_14.asc == 0x11 ||
      VAR_14.asc == 0x13 ||
      VAR_14.asc == 0x14) {
   FUNC_3(VAR_12, VAR_4);
   return VAR_9;
  }
  return VAR_7;

 case 136:
  if (VAR_12->device->retry_hwerror)
   return VAR_0;
  else
   FUNC_3(VAR_12, VAR_5);


 case 135:
  if (VAR_14.asc == 0x20 ||
      VAR_14.asc == 0x21 ||
      VAR_14.asc == 0x22 ||
      VAR_14.asc == 0x24 ||
      VAR_14.asc == 0x26 ||
      VAR_14.asc == 0x27) {
   FUNC_3(VAR_12, VAR_5);
  }
  return VAR_9;

 default:
  return VAR_9;
 }
}
