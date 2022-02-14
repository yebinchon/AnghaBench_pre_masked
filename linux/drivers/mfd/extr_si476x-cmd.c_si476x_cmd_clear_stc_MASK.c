
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct si476x_rsq_status_args {int primary; int rsqack; int attune; int cancel; int stcack; } ;
struct TYPE_2__ {int func; } ;
struct si476x_core {TYPE_1__ power_up_parameters; } ;


 int VAR_0 ;


 int FUNC_0 (struct si476x_core*,struct si476x_rsq_status_args*,int *) ;
 int FUNC_1 (struct si476x_core*,struct si476x_rsq_status_args*,int *) ;

__attribute__((used)) static int FUNC_2(struct si476x_core *VAR_1)
{
 int VAR_2;
 struct si476x_rsq_status_args VAR_3 = {
  .primary = 0,
  .rsqack = 0,
  .attune = 0,
  .cancel = 0,
  .stcack = 1,
 };

 switch (VAR_1->power_up_parameters.func) {
 case 128:
  VAR_2 = FUNC_1(VAR_1, &VAR_3, ((void*)0));
  break;
 case 129:
  VAR_2 = FUNC_0(VAR_1, &VAR_3, ((void*)0));
  break;
 default:
  VAR_2 = -VAR_0;
 }

 return VAR_2;
}
