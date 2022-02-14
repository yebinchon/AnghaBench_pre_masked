
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sunxi_glue {int flags; } ;
struct musb {TYPE_1__* controller; } ;
struct TYPE_2__ {int parent; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 struct sunxi_glue* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct musb *VAR_1)
{
 struct sunxi_glue *VAR_2 = FUNC_1(VAR_1->controller->parent);

 FUNC_0(VAR_0, &VAR_2->flags);
}
