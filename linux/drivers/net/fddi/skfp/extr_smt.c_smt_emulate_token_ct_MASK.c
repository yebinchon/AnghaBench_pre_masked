
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_5__ {int* last_tok_time; } ;
struct TYPE_7__ {TYPE_4__* m; } ;
struct TYPE_6__ {scalar_t__ mac_ring_is_up; } ;
struct s_smc {TYPE_1__ sm; TYPE_3__ mib; TYPE_2__ hw; } ;
struct TYPE_8__ {int fddiMACToken_Ct; } ;


 int VAR_0 ;
 int FUNC_0 () ;

void FUNC_1(struct s_smc *VAR_1, int VAR_2)
{
 u_long VAR_3;
 u_long VAR_4;


 VAR_4 = FUNC_0();
 VAR_3 = ((VAR_4 - VAR_1->sm.last_tok_time[VAR_2]) *
     100)/VAR_0;







 if (VAR_1->hw.mac_ring_is_up){
  VAR_1->mib.m[VAR_2].fddiMACToken_Ct += VAR_3;
 }


 VAR_1->sm.last_tok_time[VAR_2] = VAR_4;

}
