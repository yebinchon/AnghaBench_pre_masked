
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct usb_device_id {int dummy; } ;
struct usb_device {int dev; } ;
struct flexcop_usb {struct usb_interface* uintf; struct usb_device* udev; int data_mutex; struct flexcop_device* fc_dev; } ;
struct flexcop_device {int pid_filtering; int owner; int * dev; int bus_type; int stream_control; int get_mac_addr; int i2c_request; int write_ibi_reg; int read_ibi_reg; struct flexcop_usb* bus_specific; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct flexcop_device*) ;
 int FUNC_2 (struct flexcop_device*) ;
 int FUNC_3 (struct flexcop_device*) ;
 struct flexcop_device* FUNC_4 (int) ;
 int FUNC_5 (struct flexcop_usb*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (struct flexcop_usb*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (struct flexcop_usb*) ;
 int VAR_8 ;
 int FUNC_8 (char*,int ) ;
 struct usb_device* FUNC_9 (struct usb_interface*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct usb_interface *VAR_9,
  const struct usb_device_id *VAR_10)
{
 struct usb_device *VAR_11 = FUNC_9(VAR_9);
 struct flexcop_usb *VAR_12 = ((void*)0);
 struct flexcop_device *VAR_13 = ((void*)0);
 int VAR_14;

 if ((VAR_13 = FUNC_4(sizeof(struct flexcop_usb))) == ((void*)0)) {
  FUNC_0("out of memory\n");
  return -VAR_1;
 }


 VAR_12 = VAR_13->bus_specific;
 VAR_12->fc_dev = VAR_13;
 FUNC_10(&VAR_12->data_mutex);

 VAR_13->read_ibi_reg = VAR_6;
 VAR_13->write_ibi_reg = VAR_8;
 VAR_13->i2c_request = VAR_5;
 VAR_13->get_mac_addr = VAR_4;

 VAR_13->stream_control = VAR_7;

 VAR_13->pid_filtering = 1;
 VAR_13->bus_type = VAR_2;

 VAR_13->dev = &VAR_11->dev;
 VAR_13->owner = VAR_3;


 VAR_12->udev = VAR_11;
 VAR_12->uintf = VAR_9;
 if ((VAR_14 = FUNC_6(VAR_12)) != 0)
  goto err_kfree;


 if ((VAR_14 = FUNC_2(VAR_13)) != 0)
  goto err_usb_exit;


 if ((VAR_14 = FUNC_7(VAR_12)) != 0)
  goto err_fc_exit;

 FUNC_8("%s successfully initialized and connected.", VAR_0);
 return 0;

err_fc_exit:
 FUNC_1(VAR_13);
err_usb_exit:
 FUNC_5(VAR_12);
err_kfree:
 FUNC_3(VAR_13);
 return VAR_14;
}
