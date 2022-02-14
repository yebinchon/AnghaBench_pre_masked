
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;
struct perf_regs {int abi; struct pt_regs* regs; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct perf_regs *VAR_1,
      struct pt_regs *VAR_2)
{
 VAR_1->regs = VAR_2;
 VAR_1->abi = FUNC_0(VAR_0);
}
