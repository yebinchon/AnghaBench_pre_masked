
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_gadget {int dummy; } ;
struct TYPE_4__ {int speed; } ;
struct ast_vhub_dev {TYPE_1__* vhub; scalar_t__ enabled; TYPE_2__ gadget; int * driver; } ;
struct TYPE_3__ {int lock; } ;


 int FUNC_0 (struct ast_vhub_dev*,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct ast_vhub_dev*) ;
 int FUNC_2 (struct ast_vhub_dev*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct ast_vhub_dev* FUNC_5 (struct usb_gadget*) ;

__attribute__((used)) static int FUNC_6(struct usb_gadget *VAR_1)
{
 struct ast_vhub_dev *VAR_2 = FUNC_5(VAR_1);
 unsigned long VAR_3;

 FUNC_3(&VAR_2->vhub->lock, VAR_3);

 FUNC_0(VAR_2, "stop\n");

 VAR_2->driver = ((void*)0);
 VAR_2->gadget.speed = VAR_0;

 FUNC_2(VAR_2);

 if (VAR_2->enabled)
  FUNC_1(VAR_2);

 FUNC_4(&VAR_2->vhub->lock, VAR_3);

 return 0;
}
