
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tgt_host_action_mutex; int tgt_mutex; int * qla_tgt; } ;
struct scsi_qla_host {TYPE_1__ vha_tgt; } ;
struct TYPE_4__ {int atio_q_length; } ;
struct qla_hw_data {TYPE_2__ tgt; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct qla_hw_data*,struct scsi_qla_host*) ;
 int FUNC_2 (struct scsi_qla_host*) ;

void
FUNC_3(struct scsi_qla_host *VAR_1, struct qla_hw_data *VAR_2)
{
 VAR_1->vha_tgt.qla_tgt = ((void*)0);

 FUNC_0(&VAR_1->vha_tgt.tgt_mutex);
 FUNC_0(&VAR_1->vha_tgt.tgt_host_action_mutex);

 FUNC_2(VAR_1);







 VAR_2->tgt.atio_q_length = VAR_0;

 FUNC_1(VAR_2, VAR_1);
}
