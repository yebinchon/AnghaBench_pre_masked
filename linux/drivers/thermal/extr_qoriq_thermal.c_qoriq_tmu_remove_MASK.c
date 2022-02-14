
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qoriq_tmu_data {int clk; TYPE_1__* regs; } ;
struct platform_device {int dummy; } ;
struct TYPE_2__ {int tmr; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct qoriq_tmu_data* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct platform_device*,int *) ;
 int FUNC_3 (struct qoriq_tmu_data*,int ,int *) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_1)
{
 struct qoriq_tmu_data *VAR_2 = FUNC_1(VAR_1);


 FUNC_3(VAR_2, VAR_0, &VAR_2->regs->tmr);

 FUNC_0(VAR_2->clk);

 FUNC_2(VAR_1, ((void*)0));

 return 0;
}
