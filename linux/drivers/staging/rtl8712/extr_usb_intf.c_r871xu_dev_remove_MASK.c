
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct usb_device {scalar_t__ state; } ;
struct net_device {int dummy; } ;
struct _adapter {int surprise_removed; int rtl8712_fw_ready; int fw; } ;
struct TYPE_2__ {scalar_t__ drv_registered; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 () ;
 struct usb_device* FUNC_1 (struct usb_interface*) ;
 struct _adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct _adapter*) ;
 int FUNC_4 (struct _adapter*) ;
 int FUNC_5 (struct _adapter*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct net_device*) ;
 struct net_device* FUNC_9 (struct usb_interface*) ;
 int FUNC_10 (struct usb_device*) ;
 int FUNC_11 (struct usb_device*) ;
 int FUNC_12 (struct usb_interface*,int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static void FUNC_14(struct usb_interface *VAR_2)
{
 struct net_device *VAR_3 = FUNC_9(VAR_2);
 struct usb_device *VAR_4 = FUNC_1(VAR_2);

 if (VAR_3) {
  struct _adapter *VAR_5 = FUNC_2(VAR_3);

  FUNC_12(VAR_2, ((void*)0));
  FUNC_6(VAR_5->fw);

  FUNC_13(&VAR_5->rtl8712_fw_ready);
  if (VAR_1.drv_registered)
   VAR_5->surprise_removed = 1;
  FUNC_8(VAR_3);
  FUNC_0();
  FUNC_7(1);

  FUNC_4(VAR_5);
  FUNC_5(VAR_5);
  FUNC_3(VAR_5);




  FUNC_10(VAR_4);
 }




 if (VAR_4->state != VAR_0)
  FUNC_11(VAR_4);
}
