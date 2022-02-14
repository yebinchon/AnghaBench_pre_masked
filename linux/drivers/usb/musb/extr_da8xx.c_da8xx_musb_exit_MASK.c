
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct musb {int xceiv; int dev_timer; TYPE_1__* controller; } ;
struct da8xx_glue {int clk; int phy; } ;
struct TYPE_2__ {int parent; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct da8xx_glue* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct musb *VAR_0)
{
 struct da8xx_glue *VAR_1 = FUNC_2(VAR_0->controller->parent);

 FUNC_1(&VAR_0->dev_timer);

 FUNC_4(VAR_1->phy);
 FUNC_3(VAR_1->phy);
 FUNC_0(VAR_1->clk);

 FUNC_5(VAR_0->xceiv);

 return 0;
}
