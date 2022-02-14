
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sl811 {int irq_enable; } ;
struct TYPE_3__ {int controller; } ;
struct TYPE_4__ {TYPE_1__ self; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 TYPE_2__* FUNC_1 (struct sl811*) ;

__attribute__((used)) static inline void FUNC_2(struct sl811 *VAR_1)
{
 if (VAR_1->irq_enable & VAR_0)
  return;
 FUNC_0(FUNC_1(VAR_1)->self.controller, "sof irq on\n");
 VAR_1->irq_enable |= VAR_0;
}
