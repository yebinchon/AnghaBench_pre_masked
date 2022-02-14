
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int no_flag; scalar_t__ jm_flag; scalar_t__ bn_flag; scalar_t__ loop_avail; void* sm_ma_avail; scalar_t__ da_flag; int dup_addr_test; } ;
struct TYPE_4__ {TYPE_3__* m; } ;
struct s_smc {TYPE_2__ r; TYPE_1__ mib; } ;
struct TYPE_6__ {void* fddiMACMA_UnitdataAvailable; int fddiMACRMTState; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 void* VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_1(struct s_smc *VAR_5)
{
 VAR_5->mib.m[VAR_2].fddiMACRMTState = FUNC_0(VAR_3) ;
 VAR_5->r.dup_addr_test = VAR_0 ;
 VAR_5->r.da_flag = 0 ;
 VAR_5->mib.m[VAR_2].fddiMACMA_UnitdataAvailable = VAR_1 ;
 VAR_5->r.sm_ma_avail = VAR_1 ;
 VAR_5->r.loop_avail = 0 ;
 VAR_5->r.bn_flag = 0 ;
 VAR_5->r.jm_flag = 0 ;
 VAR_5->r.no_flag = VAR_4 ;
}
