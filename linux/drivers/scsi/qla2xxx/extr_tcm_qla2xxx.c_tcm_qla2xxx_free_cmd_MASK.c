
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qla_tgt_cmd {int cmd_in_wq; int trc_flags; int work; TYPE_2__* qpair; } ;
struct TYPE_3__ {int core_qla_free_cmd; } ;
struct TYPE_4__ {TYPE_1__ tgt_counters; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 () ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4(struct qla_tgt_cmd *VAR_3)
{
 VAR_3->qpair->tgt_counters.core_qla_free_cmd++;
 VAR_3->cmd_in_wq = 1;

 FUNC_1(VAR_3->trc_flags & VAR_0);
 VAR_3->trc_flags |= VAR_0;

 FUNC_0(&VAR_3->work, VAR_1);
 FUNC_2(FUNC_3(), VAR_2, &VAR_3->work);
}
