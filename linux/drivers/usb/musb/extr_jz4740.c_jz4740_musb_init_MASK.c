
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct musb {int dyn_fifo; int isr; int xceiv; TYPE_1__* controller; } ;
struct device {scalar_t__ of_node; } ;
struct TYPE_2__ {struct device* parent; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,int ) ;
 int FUNC_4 (struct device*,char*,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(struct musb *VAR_2)
{
 struct device *VAR_3 = VAR_2->controller->parent;

 if (VAR_3->of_node)
  VAR_2->xceiv = FUNC_4(VAR_3, "phys", 0);
 else
  VAR_2->xceiv = FUNC_3(VAR_3, VAR_0);
 if (FUNC_0(VAR_2->xceiv)) {
  FUNC_2(VAR_3, "No transceiver configured\n");
  return FUNC_1(VAR_2->xceiv);
 }




 VAR_2->dyn_fifo = 1;

 VAR_2->isr = VAR_1;

 return 0;
}
