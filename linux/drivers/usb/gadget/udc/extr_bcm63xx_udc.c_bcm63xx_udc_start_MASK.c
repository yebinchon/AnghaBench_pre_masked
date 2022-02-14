
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * bus; } ;
struct usb_gadget_driver {scalar_t__ max_speed; TYPE_1__ driver; int setup; } ;
struct usb_gadget {int dummy; } ;
struct TYPE_6__ {int of_node; } ;
struct TYPE_7__ {TYPE_2__ dev; } ;
struct bcm63xx_udc {int lock; TYPE_4__* dev; TYPE_3__ gadget; struct usb_gadget_driver* driver; } ;
struct TYPE_8__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct bcm63xx_udc*) ;
 int FUNC_1 (struct bcm63xx_udc*) ;
 int FUNC_2 (struct bcm63xx_udc*) ;
 int FUNC_3 (struct bcm63xx_udc*) ;
 int FUNC_4 (struct bcm63xx_udc*,int) ;
 struct bcm63xx_udc* FUNC_5 (struct usb_gadget*) ;
 int FUNC_6 (struct bcm63xx_udc*,int) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct usb_gadget *VAR_4,
  struct usb_gadget_driver *VAR_5)
{
 struct bcm63xx_udc *VAR_6 = FUNC_5(VAR_4);
 unsigned long VAR_7;

 if (!VAR_5 || VAR_5->max_speed < VAR_3 ||
     !VAR_5->setup)
  return -VAR_1;
 if (!VAR_6)
  return -VAR_2;
 if (VAR_6->driver)
  return -VAR_0;

 FUNC_7(&VAR_6->lock, VAR_7);

 FUNC_6(VAR_6, 1);
 FUNC_3(VAR_6);
 FUNC_0(VAR_6);
 FUNC_1(VAR_6);
 FUNC_2(VAR_6);
 FUNC_4(VAR_6, 1);

 VAR_6->driver = VAR_5;
 VAR_5->driver.bus = ((void*)0);
 VAR_6->gadget.dev.of_node = VAR_6->dev->of_node;

 FUNC_8(&VAR_6->lock, VAR_7);

 return 0;
}
