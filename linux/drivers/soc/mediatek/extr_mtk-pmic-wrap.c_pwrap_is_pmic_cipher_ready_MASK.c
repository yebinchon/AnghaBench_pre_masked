
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pmic_wrapper {TYPE_1__* slave; } ;
struct TYPE_2__ {int * dew_regs; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct pmic_wrapper*,int ,int*) ;

__attribute__((used)) static bool FUNC_1(struct pmic_wrapper *VAR_1)
{
 u32 VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_1->slave->dew_regs[VAR_0],
    &VAR_2);
 if (VAR_3)
  return 0;

 return VAR_2 == 1;
}
