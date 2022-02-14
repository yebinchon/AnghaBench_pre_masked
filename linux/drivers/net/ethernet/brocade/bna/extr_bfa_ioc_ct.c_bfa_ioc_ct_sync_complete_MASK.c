
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int ioc_fail_sync; int alt_ioc_fwstate; int ioc_fwstate; } ;
struct bfa_ioc {TYPE_1__ ioc_regs; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct bfa_ioc*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static bool
FUNC_6(struct bfa_ioc *VAR_1)
{
 u32 VAR_2 = FUNC_4(VAR_1->ioc_regs.ioc_fail_sync);
 u32 VAR_3 = FUNC_2(VAR_2);
 u32 VAR_4 = FUNC_1(VAR_2);
 u32 VAR_5;

 if (VAR_4 == 0)
  return 1;







 VAR_5 = VAR_4;
 if ((VAR_3 & FUNC_3(VAR_1)) &&
   !(VAR_4 & FUNC_3(VAR_1)))
  VAR_4 |= FUNC_3(VAR_1);

 if (VAR_3 == VAR_4) {
  FUNC_5(FUNC_0(VAR_2),
    VAR_1->ioc_regs.ioc_fail_sync);
  FUNC_5(VAR_0, VAR_1->ioc_regs.ioc_fwstate);
  FUNC_5(VAR_0, VAR_1->ioc_regs.alt_ioc_fwstate);
  return 1;
 }






 if (VAR_5 != VAR_4)
  FUNC_5((VAR_2 | VAR_4), VAR_1->ioc_regs.ioc_fail_sync);

 return 0;
}
