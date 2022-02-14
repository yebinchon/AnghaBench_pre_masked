
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int irq_gpio; } ;
struct wm8994 {int edge_irq; TYPE_1__ pdata; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_1, void *VAR_2)
{
 struct wm8994 *VAR_3 = VAR_2;

 while (FUNC_0(VAR_3->pdata.irq_gpio))
  FUNC_1(FUNC_2(VAR_3->edge_irq, 0));

 return VAR_0;
}
