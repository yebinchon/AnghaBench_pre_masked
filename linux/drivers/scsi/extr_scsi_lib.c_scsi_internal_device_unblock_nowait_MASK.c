
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int sdev_state; } ;
typedef enum scsi_device_state { ____Placeholder_scsi_device_state } scsi_device_state ;


 int VAR_0 ;


 int VAR_1 ;




 int FUNC_0 (struct scsi_device*) ;

int FUNC_1(struct scsi_device *VAR_2,
     enum scsi_device_state VAR_3)
{
 switch (VAR_3) {
 case 129:
 case 128:
  break;
 default:
  return -VAR_0;
 }





 switch (VAR_2->sdev_state) {
 case 133:
 case 128:
  VAR_2->sdev_state = VAR_3;
  break;
 case 131:
  if (VAR_3 == 128 ||
      VAR_3 == 130)
   VAR_2->sdev_state = VAR_3;
  else
   VAR_2->sdev_state = VAR_1;
  break;
 case 132:
 case 130:
  break;
 default:
  return -VAR_0;
 }
 FUNC_0(VAR_2);

 return 0;
}
