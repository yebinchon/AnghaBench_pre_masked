
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct nfcmrvl_usb_drv_data {int intf; int priv; TYPE_1__* udev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,struct usb_interface*) ;
 int FUNC_1 (int ) ;
 struct nfcmrvl_usb_drv_data* FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct usb_interface *VAR_0)
{
 struct nfcmrvl_usb_drv_data *VAR_1 = FUNC_2(VAR_0);

 if (!VAR_1)
  return;

 FUNC_0(&VAR_1->udev->dev, "intf %p\n", VAR_0);

 FUNC_1(VAR_1->priv);

 FUNC_3(VAR_1->intf, ((void*)0));
}
