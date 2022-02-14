
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pmic_wrapper {TYPE_2__* master; TYPE_1__* slave; } ;
struct TYPE_4__ {int arb_en_all; } ;
struct TYPE_3__ {int* dew_regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct pmic_wrapper*) ;
 scalar_t__ FUNC_1 (struct pmic_wrapper*,int,int) ;
 int FUNC_2 (struct pmic_wrapper*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct pmic_wrapper *VAR_7)
{
 int VAR_8;


 VAR_8 = FUNC_0(VAR_7);
 if (VAR_8)
  return VAR_8;


 if (FUNC_1(VAR_7,
   VAR_7->slave->dew_regs[VAR_2], 0x1))
  return -VAR_0;

 FUNC_2(VAR_7, 0x1, VAR_1);
 FUNC_2(VAR_7, 0x0, VAR_6);
 FUNC_2(VAR_7, VAR_7->slave->dew_regs[VAR_3],
       VAR_5);
 FUNC_2(VAR_7,
       VAR_7->master->arb_en_all, VAR_4);

 return 0;
}
