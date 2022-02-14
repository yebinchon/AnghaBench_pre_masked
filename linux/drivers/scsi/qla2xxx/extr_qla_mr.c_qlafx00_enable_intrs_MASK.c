
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qla_hw_data {int interrupts_on; int hardware_lock; } ;


 int FUNC_0 (struct qla_hw_data*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void
FUNC_3(struct qla_hw_data *VAR_0)
{
 unsigned long VAR_1 = 0;

 FUNC_1(&VAR_0->hardware_lock, VAR_1);
 VAR_0->interrupts_on = 1;
 FUNC_0(VAR_0);
 FUNC_2(&VAR_0->hardware_lock, VAR_1);
}
