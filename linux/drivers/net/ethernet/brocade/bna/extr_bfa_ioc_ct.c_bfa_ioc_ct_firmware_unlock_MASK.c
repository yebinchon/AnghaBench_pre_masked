
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int ioc_usage_sem_reg; int ioc_usage_reg; } ;
struct bfa_ioc {TYPE_1__ ioc_regs; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct bfa_ioc*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_7(struct bfa_ioc *VAR_1)
{
 u32 VAR_2;




 if (FUNC_1(FUNC_2(VAR_1)) <
      VAR_0)
  return;




 FUNC_3(VAR_1->ioc_regs.ioc_usage_sem_reg);
 VAR_2 = FUNC_5(VAR_1->ioc_regs.ioc_usage_reg);
 FUNC_0(!(VAR_2 > 0));

 VAR_2--;
 FUNC_6(VAR_2, VAR_1->ioc_regs.ioc_usage_reg);

 FUNC_4(VAR_1->ioc_regs.ioc_usage_sem_reg);
}
