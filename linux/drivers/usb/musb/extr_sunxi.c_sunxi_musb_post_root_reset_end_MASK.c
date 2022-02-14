
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sunxi_glue {int phy; } ;
struct musb {TYPE_1__* controller; } ;
struct TYPE_2__ {int parent; } ;


 struct sunxi_glue* FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct musb *VAR_0)
{
 struct sunxi_glue *VAR_1 = FUNC_0(VAR_0->controller->parent);

 FUNC_1(VAR_1->phy, 1);
}
