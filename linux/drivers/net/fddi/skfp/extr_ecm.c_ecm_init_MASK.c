
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ecm_line_state; scalar_t__ sb_flag; scalar_t__ trace_prop; int path_test; } ;
struct TYPE_3__ {int fddiSMTECMState; } ;
struct s_smc {TYPE_2__ e; TYPE_1__ mib; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_1(struct s_smc *VAR_3)
{
 VAR_3->e.path_test = VAR_2 ;
 VAR_3->e.trace_prop = 0 ;
 VAR_3->e.sb_flag = 0 ;
 VAR_3->mib.fddiSMTECMState = FUNC_0(VAR_0) ;
 VAR_3->e.ecm_line_state = VAR_1 ;
}
