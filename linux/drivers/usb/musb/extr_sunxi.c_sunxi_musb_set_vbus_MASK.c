
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sunxi_glue {int work; int flags; } ;
struct musb {TYPE_3__* xceiv; TYPE_1__* controller; } ;
struct TYPE_6__ {TYPE_2__* otg; } ;
struct TYPE_5__ {int state; } ;
struct TYPE_4__ {int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 struct sunxi_glue* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct musb *VAR_2, int VAR_3)
{
 struct sunxi_glue *VAR_4 = FUNC_1(VAR_2->controller->parent);

 if (VAR_3) {
  FUNC_3(VAR_1, &VAR_4->flags);
  VAR_2->xceiv->otg->state = VAR_0;
 } else {
  FUNC_0(VAR_1, &VAR_4->flags);
 }

 FUNC_2(&VAR_4->work);
}
