
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qoriq_tmu_data {TYPE_1__* regs; } ;
struct TYPE_2__ {int tmr; int tmtmir; int tier; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qoriq_tmu_data*,int ,int *) ;

__attribute__((used)) static void FUNC_1(struct qoriq_tmu_data *VAR_3)
{

 FUNC_0(VAR_3, VAR_0, &VAR_3->regs->tier);


 FUNC_0(VAR_3, VAR_2, &VAR_3->regs->tmtmir);


 FUNC_0(VAR_3, VAR_1, &VAR_3->regs->tmr);
}
