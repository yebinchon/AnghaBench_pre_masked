
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ rm_loop; scalar_t__ rm_join; } ;
struct TYPE_5__ {int fddiSMTCF_State; } ;
struct s_smc {TYPE_1__* y; TYPE_3__ r; TYPE_2__ mib; } ;
struct TYPE_4__ {void* cem_pst; scalar_t__ scrub; } ;


 int FUNC_0 (int ) ;
 void* VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;

void FUNC_1(struct s_smc *VAR_4)
{
 VAR_4->mib.fddiSMTCF_State = FUNC_0(VAR_3) ;
 VAR_4->r.rm_join = 0 ;
 VAR_4->r.rm_loop = 0 ;
 VAR_4->y[VAR_1].scrub = 0 ;
 VAR_4->y[VAR_2].scrub = 0 ;
 VAR_4->y[VAR_1].cem_pst = VAR_0 ;
 VAR_4->y[VAR_2].cem_pst = VAR_0 ;
}
