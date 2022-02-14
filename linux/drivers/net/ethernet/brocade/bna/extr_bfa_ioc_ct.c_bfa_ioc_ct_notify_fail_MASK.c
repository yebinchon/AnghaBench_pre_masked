
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int alt_ll_halt; int ll_halt; } ;
struct bfa_ioc {TYPE_1__ ioc_regs; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct bfa_ioc *VAR_1)
{
 FUNC_1(VAR_0, VAR_1->ioc_regs.ll_halt);
 FUNC_1(VAR_0, VAR_1->ioc_regs.alt_ll_halt);

 FUNC_0(VAR_1->ioc_regs.ll_halt);
 FUNC_0(VAR_1->ioc_regs.alt_ll_halt);
}
