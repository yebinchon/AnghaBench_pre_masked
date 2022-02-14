
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device_handler {int dummy; } ;
struct scsi_device {int sdev_gendev; struct scsi_device_handler* handler; } ;
struct request_queue {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 struct scsi_device* FUNC_1 (struct request_queue*) ;
 int FUNC_2 (struct scsi_device*,struct scsi_device_handler*) ;
 struct scsi_device_handler* FUNC_3 (char const*) ;

int FUNC_4(struct request_queue *VAR_3, const char *VAR_4)
{
 struct scsi_device *VAR_5;
 struct scsi_device_handler *VAR_6;
 int VAR_7 = 0;

 VAR_5 = FUNC_1(VAR_3);
 if (!VAR_5)
  return -VAR_2;

 VAR_6 = FUNC_3(VAR_4);
 if (!VAR_6) {
  VAR_7 = -VAR_1;
  goto out_put_device;
 }

 if (VAR_5->handler) {
  if (VAR_5->handler != VAR_6)
   VAR_7 = -VAR_0;
  goto out_put_device;
 }

 VAR_7 = FUNC_2(VAR_5, VAR_6);

out_put_device:
 FUNC_0(&VAR_5->sdev_gendev);
 return VAR_7;
}
