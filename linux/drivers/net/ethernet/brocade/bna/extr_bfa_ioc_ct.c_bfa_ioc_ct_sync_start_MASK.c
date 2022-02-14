
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int alt_ioc_fwstate; int ioc_fwstate; int ioc_usage_reg; int ioc_fail_sync; } ;
struct bfa_ioc {TYPE_1__ ioc_regs; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct bfa_ioc*) ;
 int FUNC_2 (struct bfa_ioc*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static bool
FUNC_5(struct bfa_ioc *VAR_1)
{
 u32 VAR_2 = FUNC_3(VAR_1->ioc_regs.ioc_fail_sync);
 u32 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3 & FUNC_2(VAR_1)) {
  FUNC_4(0, VAR_1->ioc_regs.ioc_fail_sync);
  FUNC_4(1, VAR_1->ioc_regs.ioc_usage_reg);
  FUNC_4(VAR_0, VAR_1->ioc_regs.ioc_fwstate);
  FUNC_4(VAR_0, VAR_1->ioc_regs.alt_ioc_fwstate);
  return 1;
 }

 return FUNC_1(VAR_1);
}
