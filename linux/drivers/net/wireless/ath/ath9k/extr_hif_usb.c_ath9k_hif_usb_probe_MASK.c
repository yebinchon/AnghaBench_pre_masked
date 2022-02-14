
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct usb_device_id {scalar_t__ driver_info; } ;
struct usb_device {int reset_resume; } ;
struct hif_device_usb {int fw_done; struct usb_device_id const* usb_device_id; struct usb_interface* interface; struct usb_device* udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct hif_device_usb*,int) ;
 int FUNC_1 (int *) ;
 struct usb_device* FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (struct hif_device_usb*) ;
 struct hif_device_usb* FUNC_4 (int,int ) ;
 int FUNC_5 (struct usb_interface*) ;
 int FUNC_6 (struct usb_device*) ;
 int FUNC_7 (struct usb_device*) ;
 int FUNC_8 (struct usb_interface*,struct hif_device_usb*) ;

__attribute__((used)) static int FUNC_9(struct usb_interface *VAR_3,
          const struct usb_device_id *VAR_4)
{
 struct usb_device *VAR_5 = FUNC_2(VAR_3);
 struct hif_device_usb *VAR_6;
 int VAR_7 = 0;

 if (VAR_4->driver_info == VAR_2)
  return FUNC_5(VAR_3);

 VAR_6 = FUNC_4(sizeof(struct hif_device_usb), VAR_1);
 if (!VAR_6) {
  VAR_7 = -VAR_0;
  goto err_alloc;
 }

 FUNC_6(VAR_5);

 VAR_6->udev = VAR_5;
 VAR_6->interface = VAR_3;
 VAR_6->usb_device_id = VAR_4;



 FUNC_8(VAR_3, VAR_6);

 FUNC_1(&VAR_6->fw_done);

 VAR_7 = FUNC_0(VAR_6, 1);
 if (VAR_7)
  goto err_fw_req;

 return VAR_7;

err_fw_req:
 FUNC_8(VAR_3, ((void*)0));
 FUNC_3(VAR_6);
 FUNC_7(VAR_5);
err_alloc:
 return VAR_7;
}
