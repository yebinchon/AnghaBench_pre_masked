
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct TYPE_3__ {int bp_delayed; scalar_t__ bp_delay; } ;
typedef TYPE_1__ kdb_bp_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct pt_regs*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct pt_regs*) ;

__attribute__((used)) static void FUNC_4(struct pt_regs *VAR_1, kdb_bp_t *VAR_2)
{
 if (FUNC_0(VAR_0))
  FUNC_2("regs->ip = 0x%lx\n", FUNC_1(VAR_1));




 FUNC_3(VAR_1);




 VAR_2->bp_delay = 0;
 VAR_2->bp_delayed = 1;
}
