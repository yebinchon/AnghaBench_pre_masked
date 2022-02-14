
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_device {int dev; } ;
struct otg_fsm {TYPE_2__* otg; } ;
struct TYPE_4__ {TYPE_1__* host; } ;
struct TYPE_3__ {int root_hub; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct usb_device*) ;
 int FUNC_2 (struct usb_device*) ;
 struct usb_device* FUNC_3 (int ,int) ;

__attribute__((used)) static void FUNC_4(struct otg_fsm *VAR_0, int VAR_1)
{
 struct usb_device *VAR_2;

 if (!VAR_0->otg->host)
  return;

 VAR_2 = FUNC_3(VAR_0->otg->host->root_hub, 1);
 if (!VAR_2)
  return;

 if (VAR_1) {
  FUNC_1(VAR_2);
 } else {
  FUNC_0(&VAR_2->dev, 0);
  FUNC_2(VAR_2);
 }
}
