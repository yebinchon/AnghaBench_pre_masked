
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmic_wrapper {int dev; TYPE_1__* slave; } ;
struct TYPE_2__ {int * dew_regs; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct pmic_wrapper*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct pmic_wrapper *VAR_3)
{

 if (FUNC_1(VAR_3, VAR_3->slave->dew_regs[VAR_1],
   0x1) ||
     FUNC_1(VAR_3, VAR_3->slave->dew_regs[VAR_2],
   0xffff)) {
  FUNC_0(VAR_3->dev, "enable dewrap fail\n");
  return -VAR_0;
 }

 return 0;
}
