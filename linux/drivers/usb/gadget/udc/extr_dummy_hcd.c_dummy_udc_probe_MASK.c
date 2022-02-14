
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct usb_gadget {int dummy; } ;
struct platform_device {int dev; } ;
struct TYPE_8__ {int * parent; } ;
struct TYPE_6__ {TYPE_5__ dev; int max_speed; int * ops; int name; } ;
struct dummy {TYPE_1__ gadget; } ;
struct TYPE_7__ {scalar_t__ is_high_speed; scalar_t__ is_super_speed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (TYPE_5__*,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct dummy*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 TYPE_3__ VAR_6 ;
 int FUNC_4 (struct platform_device*,struct dummy*) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_7)
{
 struct dummy *VAR_8;
 int VAR_9;

 VAR_8 = *((void **)FUNC_0(&VAR_7->dev));

 FUNC_3(&VAR_8->gadget, sizeof(struct usb_gadget));
 VAR_8->gadget.name = VAR_5;
 VAR_8->gadget.ops = &VAR_4;
 if (VAR_6.is_super_speed)
  VAR_8->gadget.max_speed = VAR_2;
 else if (VAR_6.is_high_speed)
  VAR_8->gadget.max_speed = VAR_1;
 else
  VAR_8->gadget.max_speed = VAR_0;

 VAR_8->gadget.dev.parent = &VAR_7->dev;
 FUNC_2(VAR_8);

 VAR_9 = FUNC_5(&VAR_7->dev, &VAR_8->gadget);
 if (VAR_9 < 0)
  goto err_udc;

 VAR_9 = FUNC_1(&VAR_8->gadget.dev, &VAR_3);
 if (VAR_9 < 0)
  goto err_dev;
 FUNC_4(VAR_7, VAR_8);
 return VAR_9;

err_dev:
 FUNC_6(&VAR_8->gadget);
err_udc:
 return VAR_9;
}
