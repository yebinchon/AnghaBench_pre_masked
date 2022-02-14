
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ef4_nic {int last_irq_cpu; TYPE_1__* type; } ;
struct TYPE_2__ {int (* irq_test_generate ) (struct ef4_nic*) ;} ;


 int FUNC_0 () ;
 int FUNC_1 (struct ef4_nic*) ;

int FUNC_2(struct ef4_nic *VAR_0)
{
 VAR_0->last_irq_cpu = -1;
 FUNC_0();
 return VAR_0->type->irq_test_generate(VAR_0);
}
