
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sunxi_glue {int work; int flags; struct musb* musb; } ;
struct musb {TYPE_1__* controller; } ;
struct TYPE_2__ {int parent; } ;


 int VAR_0 ;
 struct sunxi_glue* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct musb *VAR_1)
{
 struct sunxi_glue *VAR_2 = FUNC_0(VAR_1->controller->parent);

 VAR_2->musb = VAR_1;


 if (FUNC_2(VAR_0, &VAR_2->flags))
  return;

 FUNC_1(&VAR_2->work);
}
