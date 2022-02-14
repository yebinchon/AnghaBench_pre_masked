
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pmic_wrapper {int dev; TYPE_1__* slave; } ;
struct TYPE_2__ {int * dew_regs; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct pmic_wrapper*,int ,int*) ;
 int FUNC_3 (struct pmic_wrapper*,char,int ) ;

__attribute__((used)) static int FUNC_4(struct pmic_wrapper *VAR_4)
{
 u32 VAR_5;
 u32 VAR_6;
 u32 VAR_7 = 0;
 signed char VAR_8[16] = {
  -1, 0, 1, 0, 2, -1, 1, 1, 3, -1, -1, -1, 3, -1, 2, 1
 };

 for (VAR_6 = 0; VAR_6 < 4; VAR_6++) {
  FUNC_3(VAR_4, VAR_6, VAR_3);
  FUNC_2(VAR_4, VAR_4->slave->dew_regs[VAR_1],
      &VAR_5);
  if (VAR_5 == VAR_2) {
   FUNC_0(VAR_4->dev, "[Read Test] pass, SIDLY=%x\n", VAR_6);
   VAR_7 |= 1 << VAR_6;
  }
 }

 if (VAR_8[VAR_7] < 0) {
  FUNC_1(VAR_4->dev, "sidly pass range 0x%x not continuous\n",
    VAR_7);
  return -VAR_0;
 }

 FUNC_3(VAR_4, VAR_8[VAR_7], VAR_3);

 return 0;
}
