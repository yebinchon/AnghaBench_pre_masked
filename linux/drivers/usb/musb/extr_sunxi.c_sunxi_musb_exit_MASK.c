
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sunxi_glue {int xceiv; int dev; int flags; int clk; int rst; int phy; int work; } ;
struct musb {TYPE_1__* controller; } ;
struct TYPE_2__ {int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 struct sunxi_glue* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,int *) ;

__attribute__((used)) static int FUNC_10(struct musb *VAR_3)
{
 struct sunxi_glue *VAR_4 = FUNC_2(VAR_3->controller->parent);

 FUNC_6(VAR_3->controller);

 FUNC_0(&VAR_4->work);
 if (FUNC_9(VAR_2, &VAR_4->flags))
  FUNC_5(VAR_4->phy);

 FUNC_4(VAR_4->phy);

 if (FUNC_9(VAR_0, &VAR_4->flags))
  FUNC_7(VAR_4->rst);

 FUNC_1(VAR_4->clk);
 if (FUNC_9(VAR_1, &VAR_4->flags))
  FUNC_8(VAR_3->controller->parent);

 FUNC_3(VAR_4->dev, VAR_4->xceiv);

 return 0;
}
