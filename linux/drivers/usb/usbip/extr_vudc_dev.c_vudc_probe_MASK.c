
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * parent; } ;
struct TYPE_4__ {TYPE_1__ dev; int max_speed; int * ops; int name; } ;
struct vudc {TYPE_2__ gadget; struct platform_device* pdev; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct vudc*) ;
 int FUNC_1 (struct vudc*) ;
 int FUNC_2 (struct vudc*) ;
 struct vudc* FUNC_3 (int,int ) ;
 int FUNC_4 (struct platform_device*,struct vudc*) ;
 int FUNC_5 (int *,TYPE_2__*) ;
 int VAR_4 ;

int FUNC_6(struct platform_device *VAR_5)
{
 struct vudc *VAR_6;
 int VAR_7 = -VAR_0;

 VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  goto out;

 VAR_6->gadget.name = VAR_1;
 VAR_6->gadget.ops = &VAR_4;
 VAR_6->gadget.max_speed = VAR_3;
 VAR_6->gadget.dev.parent = &VAR_5->dev;
 VAR_6->pdev = VAR_5;

 VAR_7 = FUNC_1(VAR_6);
 if (VAR_7)
  goto err_init_vudc_hw;

 VAR_7 = FUNC_5(&VAR_5->dev, &VAR_6->gadget);
 if (VAR_7 < 0)
  goto err_add_udc;

 FUNC_4(VAR_5, VAR_6);

 return VAR_7;

err_add_udc:
 FUNC_0(VAR_6);
err_init_vudc_hw:
 FUNC_2(VAR_6);
out:
 return VAR_7;
}
