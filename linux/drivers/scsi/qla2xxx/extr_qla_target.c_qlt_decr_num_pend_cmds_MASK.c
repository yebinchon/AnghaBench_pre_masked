
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_qla_host {TYPE_2__* hw; } ;
struct TYPE_3__ {int q_full_lock; int num_pend_cmds; } ;
struct TYPE_4__ {TYPE_1__ tgt; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_2(struct scsi_qla_host *VAR_0)
{
 unsigned long VAR_1;

 FUNC_0(&VAR_0->hw->tgt.q_full_lock, VAR_1);
 VAR_0->hw->tgt.num_pend_cmds--;
 FUNC_1(&VAR_0->hw->tgt.q_full_lock, VAR_1);
}
