
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int err_set; int alt_ll_halt; int ll_halt; } ;
struct bfa_ioc_s {TYPE_1__ ioc_regs; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (struct bfa_ioc_s*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int,int ) ;

__attribute__((used)) static void
FUNC_3(struct bfa_ioc_s *VAR_1)
{
 if (FUNC_0(VAR_1)) {
  FUNC_2(VAR_0, VAR_1->ioc_regs.ll_halt);
  FUNC_2(VAR_0, VAR_1->ioc_regs.alt_ll_halt);

  FUNC_1(VAR_1->ioc_regs.ll_halt);
  FUNC_1(VAR_1->ioc_regs.alt_ll_halt);
 } else {
  FUNC_2(~0U, VAR_1->ioc_regs.err_set);
  FUNC_1(VAR_1->ioc_regs.err_set);
 }
}
