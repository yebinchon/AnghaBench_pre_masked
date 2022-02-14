
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int timer_activ; scalar_t__ t_stop; scalar_t__ t_start; } ;
struct s_smc {TYPE_1__ hw; } ;


 int VAR_0 ;
 int FUNC_0 (struct s_smc*) ;

void FUNC_1(struct s_smc *VAR_1)
{
 VAR_1->hw.t_start = 0 ;
 VAR_1->hw.t_stop = 0 ;
 VAR_1->hw.timer_activ = VAR_0 ;

 FUNC_0(VAR_1) ;
}
