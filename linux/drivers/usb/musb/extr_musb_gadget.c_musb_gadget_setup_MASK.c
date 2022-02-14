
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int * parent; } ;
struct TYPE_7__ {TYPE_4__ dev; scalar_t__ is_otg; int name; int speed; int max_speed; int * ops; } ;
struct musb {TYPE_3__ g; int controller; scalar_t__ is_active; int gadget_work; TYPE_2__* xceiv; } ;
struct TYPE_6__ {TYPE_1__* otg; } ;
struct TYPE_5__ {int state; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct musb*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_4__*) ;
 int VAR_3 ;
 int FUNC_3 (struct musb*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct musb*,int ) ;
 int FUNC_5 (int ,TYPE_3__*) ;

int FUNC_6(struct musb *VAR_6)
{
 int VAR_7;






 VAR_6->g.ops = &VAR_4;
 VAR_6->g.max_speed = VAR_1;
 VAR_6->g.speed = VAR_2;

 FUNC_1(VAR_6);
 VAR_6->xceiv->otg->state = VAR_0;


 VAR_6->g.name = VAR_3;

 VAR_6->g.is_otg = 0;
 FUNC_0(&VAR_6->gadget_work, VAR_5);
 FUNC_3(VAR_6);

 VAR_6->is_active = 0;
 FUNC_4(VAR_6, 0);

 VAR_7 = FUNC_5(VAR_6->controller, &VAR_6->g);
 if (VAR_7)
  goto err;

 return 0;
err:
 VAR_6->g.dev.parent = ((void*)0);
 FUNC_2(&VAR_6->g.dev);
 return VAR_7;
}
