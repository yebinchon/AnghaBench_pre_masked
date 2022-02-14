
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dev; } ;
struct usb_device_id {int dummy; } ;
struct us_unusual_dev {int dummy; } ;
struct us_data {int scan_dwork; int delay_wait; int notify; int cmnd_ready; int dev_mutex; } ;
struct scsi_host_template {int dummy; } ;
struct Scsi_Host {int max_cmd_len; int sg_tablesize; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct us_data*,struct usb_interface*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (struct us_data*,struct usb_device_id const*,struct us_unusual_dev*) ;
 int FUNC_5 (struct us_data*) ;
 int FUNC_6 (struct us_data*) ;
 struct us_data* FUNC_7 (struct Scsi_Host*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct us_data*) ;
 struct Scsi_Host* FUNC_12 (struct scsi_host_template*,int) ;
 int FUNC_13 (int *,struct usb_interface*) ;
 int FUNC_14 (struct us_data*,char*) ;
 int VAR_1 ;
 int FUNC_15 (struct usb_interface*) ;

int FUNC_16(struct us_data **VAR_2,
  struct usb_interface *VAR_3,
  const struct usb_device_id *VAR_4,
  struct us_unusual_dev *VAR_5,
  struct scsi_host_template *VAR_6)
{
 struct Scsi_Host *VAR_7;
 struct us_data *VAR_8;
 int VAR_9;

 FUNC_2(&VAR_3->dev, "USB Mass Storage device detected\n");





 VAR_7 = FUNC_12(VAR_6, sizeof(*VAR_8));
 if (!VAR_7) {
  FUNC_3(&VAR_3->dev, "Unable to allocate the scsi host\n");
  return -VAR_0;
 }




 VAR_7->max_cmd_len = 16;
 VAR_7->sg_tablesize = FUNC_15(VAR_3);
 *VAR_2 = VAR_8 = FUNC_7(VAR_7);
 FUNC_10(&(VAR_8->dev_mutex));
 FUNC_13(&VAR_8->dev_mutex, VAR_3);
 FUNC_8(&VAR_8->cmnd_ready);
 FUNC_8(&(VAR_8->notify));
 FUNC_9(&VAR_8->delay_wait);
 FUNC_0(&VAR_8->scan_dwork, VAR_1);


 VAR_9 = FUNC_1(VAR_8, VAR_3);
 if (VAR_9)
  goto BadDevice;


 VAR_9 = FUNC_4(VAR_8, VAR_4, VAR_5);
 if (VAR_9)
  goto BadDevice;


 FUNC_6(VAR_8);
 FUNC_5(VAR_8);





 return 0;

BadDevice:
 FUNC_14(VAR_8, "storage_probe() failed\n");
 FUNC_11(VAR_8);
 return VAR_9;
}
