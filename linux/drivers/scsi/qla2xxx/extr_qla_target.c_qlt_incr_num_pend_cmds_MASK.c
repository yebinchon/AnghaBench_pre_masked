
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ stat_max_pend_cmds; } ;
struct scsi_qla_host {TYPE_3__* hw; TYPE_1__ qla_stats; } ;
struct TYPE_5__ {scalar_t__ num_pend_cmds; int q_full_lock; } ;
struct TYPE_6__ {TYPE_2__ tgt; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_2(struct scsi_qla_host *VAR_0)
{
 unsigned long VAR_1;

 FUNC_0(&VAR_0->hw->tgt.q_full_lock, VAR_1);

 VAR_0->hw->tgt.num_pend_cmds++;
 if (VAR_0->hw->tgt.num_pend_cmds > VAR_0->qla_stats.stat_max_pend_cmds)
  VAR_0->qla_stats.stat_max_pend_cmds =
   VAR_0->hw->tgt.num_pend_cmds;
 FUNC_1(&VAR_0->hw->tgt.q_full_lock, VAR_1);
}
