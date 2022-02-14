
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_gadget_driver {int dummy; } ;
struct usb_gadget {int dummy; } ;
struct TYPE_3__ {int is_selfpowered; } ;
struct ast_vhub_dev {TYPE_2__* vhub; TYPE_1__ gadget; struct usb_gadget_driver* driver; } ;
struct TYPE_4__ {int lock; } ;


 int FUNC_0 (struct ast_vhub_dev*,char*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct ast_vhub_dev* FUNC_3 (struct usb_gadget*) ;

__attribute__((used)) static int FUNC_4(struct usb_gadget *VAR_0,
         struct usb_gadget_driver *VAR_1)
{
 struct ast_vhub_dev *VAR_2 = FUNC_3(VAR_0);
 unsigned long VAR_3;

 FUNC_1(&VAR_2->vhub->lock, VAR_3);

 FUNC_0(VAR_2, "start\n");


 VAR_2->driver = VAR_1;
 VAR_2->gadget.is_selfpowered = 1;

 FUNC_2(&VAR_2->vhub->lock, VAR_3);

 return 0;
}
