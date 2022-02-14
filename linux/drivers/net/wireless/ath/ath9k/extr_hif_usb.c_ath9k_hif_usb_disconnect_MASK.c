
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct usb_device {scalar_t__ state; int dev; } ;
struct hif_device_usb {int flags; int htc_handle; int fw_done; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct hif_device_usb*) ;
 int FUNC_1 (struct usb_device*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*) ;
 struct usb_device* FUNC_5 (struct usb_interface*) ;
 int FUNC_6 (struct hif_device_usb*) ;
 struct hif_device_usb* FUNC_7 (struct usb_interface*) ;
 int FUNC_8 (struct usb_device*) ;
 int FUNC_9 (struct usb_interface*,int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct usb_interface *VAR_2)
{
 struct usb_device *VAR_3 = FUNC_5(VAR_2);
 struct hif_device_usb *VAR_4 = FUNC_7(VAR_2);
 bool VAR_5 = (VAR_3->state == VAR_1) ? 1 : 0;

 if (!VAR_4)
  return;

 FUNC_10(&VAR_4->fw_done);

 if (VAR_4->flags & VAR_0) {
  FUNC_2(VAR_4->htc_handle, VAR_5);
  FUNC_3(VAR_4->htc_handle);
  FUNC_0(VAR_4);
 }

 FUNC_9(VAR_2, ((void*)0));



 if (!VAR_5 && (VAR_4->flags & VAR_0))
  FUNC_1(VAR_3);

 FUNC_6(VAR_4);
 FUNC_4(&VAR_3->dev, "ath9k_htc: USB layer deinitialized\n");
 FUNC_8(VAR_3);
}
