
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct i2400mu {TYPE_2__* notif_urb; TYPE_1__* usb_iface; } ;
struct device {int dummy; } ;
struct TYPE_5__ {int transfer_buffer; } ;
struct TYPE_4__ {struct device dev; } ;


 int FUNC_0 (int,struct device*,char*,struct i2400mu*) ;
 int FUNC_1 (int,struct device*,char*,struct i2400mu*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;

void FUNC_5(struct i2400mu *VAR_0)
{
 struct device *VAR_1 = &VAR_0->usb_iface->dev;

 FUNC_1(4, VAR_1, "(i2400mu %p)\n", VAR_0);
 if (VAR_0->notif_urb != ((void*)0)) {
  FUNC_4(VAR_0->notif_urb);
  FUNC_2(VAR_0->notif_urb->transfer_buffer);
  FUNC_3(VAR_0->notif_urb);
  VAR_0->notif_urb = ((void*)0);
 }
 FUNC_0(4, VAR_1, "(i2400mu %p)\n", VAR_0);
}
