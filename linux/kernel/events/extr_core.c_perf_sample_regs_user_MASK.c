
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct perf_regs {struct pt_regs* regs; int abi; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (struct perf_regs*,struct pt_regs*,struct pt_regs*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (struct pt_regs*) ;

__attribute__((used)) static void FUNC_3(struct perf_regs *VAR_3,
      struct pt_regs *VAR_4,
      struct pt_regs *VAR_5)
{
 if (FUNC_2(VAR_4)) {
  VAR_3->abi = FUNC_1(VAR_2);
  VAR_3->regs = VAR_4;
 } else if (!(VAR_2->flags & VAR_1)) {
  FUNC_0(VAR_3, VAR_4, VAR_5);
 } else {
  VAR_3->abi = VAR_0;
  VAR_3->regs = ((void*)0);
 }
}
