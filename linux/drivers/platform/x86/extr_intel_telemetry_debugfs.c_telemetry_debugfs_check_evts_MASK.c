
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ pss_idle_evts; scalar_t__ pcs_idle_blkd_evts; scalar_t__ pcs_s0ix_blkd_evts; scalar_t__ pss_ltr_evts; scalar_t__ pss_wakeup_evts; scalar_t__ ioss_d0ix_evts; scalar_t__ ioss_pg_evts; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_1__* VAR_8 ;

__attribute__((used)) static int FUNC_0(void)
{
 if ((VAR_8->pss_idle_evts > VAR_4) ||
     (VAR_8->pcs_idle_blkd_evts > VAR_3) ||
     (VAR_8->pcs_s0ix_blkd_evts > VAR_6) ||
     (VAR_8->pss_ltr_evts > VAR_5) ||
     (VAR_8->pss_wakeup_evts > VAR_7) ||
     (VAR_8->ioss_d0ix_evts > VAR_1) ||
     (VAR_8->ioss_pg_evts > VAR_2))
  return -VAR_0;

 return 0;
}
