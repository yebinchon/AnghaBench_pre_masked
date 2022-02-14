
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dev; } ;
struct at76_priv {int udev; TYPE_1__* hw; } ;
struct TYPE_2__ {int wiphy; } ;


 int FUNC_0 (struct at76_priv*) ;
 int FUNC_1 (int *,char*) ;
 struct at76_priv* FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct usb_interface*,int *) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static void FUNC_6(struct usb_interface *VAR_0)
{
 struct at76_priv *VAR_1;

 VAR_1 = FUNC_2(VAR_0);
 FUNC_4(VAR_0, ((void*)0));


 if (!VAR_1)
  return;

 FUNC_5(VAR_1->hw->wiphy, "disconnecting\n");
 FUNC_0(VAR_1);
 FUNC_3(VAR_1->udev);
 FUNC_1(&VAR_0->dev, "disconnected\n");
}
