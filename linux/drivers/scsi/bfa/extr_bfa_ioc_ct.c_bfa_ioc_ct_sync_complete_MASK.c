
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int ioc_fail_sync; int alt_ioc_fwstate; int ioc_fwstate; } ;
struct bfa_ioc_s {TYPE_1__ ioc_regs; } ;
typedef int bfa_boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct bfa_ioc_s*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static bfa_boolean_t
FUNC_6(struct bfa_ioc_s *VAR_3)
{
 uint32_t VAR_4 = FUNC_4(VAR_3->ioc_regs.ioc_fail_sync);
 uint32_t VAR_5 = FUNC_2(VAR_4);
 uint32_t VAR_6 = FUNC_1(VAR_4);
 uint32_t VAR_7;

 if (VAR_6 == 0)
  return VAR_1;







 VAR_7 = VAR_6;
 if ((VAR_5 & FUNC_3(VAR_3)) &&
  !(VAR_6 & FUNC_3(VAR_3)))
  VAR_6 |= FUNC_3(VAR_3);

 if (VAR_5 == VAR_6) {
  FUNC_5(FUNC_0(VAR_4),
   VAR_3->ioc_regs.ioc_fail_sync);
  FUNC_5(VAR_2, VAR_3->ioc_regs.ioc_fwstate);
  FUNC_5(VAR_2, VAR_3->ioc_regs.alt_ioc_fwstate);
  return VAR_1;
 }






 if (VAR_7 != VAR_6)
  FUNC_5((VAR_4 | VAR_6), VAR_3->ioc_regs.ioc_fail_sync);

 return VAR_0;
}
