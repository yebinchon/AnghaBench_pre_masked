
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct se_session {struct fc_port* fabric_sess_ptr; } ;
struct scsi_qla_host {TYPE_2__* hw; } ;
struct fc_port {struct scsi_qla_host* vha; } ;
struct TYPE_3__ {int sess_lock; } ;
struct TYPE_4__ {TYPE_1__ tgt; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct se_session*) ;
 int FUNC_4 (struct fc_port*) ;

__attribute__((used)) static void FUNC_5(struct se_session *VAR_0)
{
 struct fc_port *VAR_1 = VAR_0->fabric_sess_ptr;
 struct scsi_qla_host *VAR_2;
 unsigned long VAR_3;

 FUNC_0(!VAR_1);
 VAR_2 = VAR_1->vha;

 FUNC_1(&VAR_2->hw->tgt.sess_lock, VAR_3);
 FUNC_3(VAR_0);
 FUNC_2(&VAR_2->hw->tgt.sess_lock, VAR_3);

 FUNC_4(VAR_1);
}
