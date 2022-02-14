
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmic_wrapper {TYPE_1__* slave; } ;
struct TYPE_2__ {int type; int * dew_regs; } ;




 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pmic_wrapper*,int,int ,int,int) ;
 int FUNC_1 (struct pmic_wrapper*,int ,int) ;
 int FUNC_2 (struct pmic_wrapper*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct pmic_wrapper *VAR_2)
{
 switch (VAR_2->slave->type) {
 case 128:
  FUNC_2(VAR_2, 0xc, VAR_1);
  FUNC_0(VAR_2, 4, 0, 2, 2);
  break;

 case 129:
  FUNC_2(VAR_2, 0x8, VAR_1);
  FUNC_1(VAR_2, VAR_2->slave->dew_regs[VAR_0],
       0x8);
  FUNC_0(VAR_2, 5, 0, 2, 2);
  break;
 default:
  break;
 }

 return 0;
}
