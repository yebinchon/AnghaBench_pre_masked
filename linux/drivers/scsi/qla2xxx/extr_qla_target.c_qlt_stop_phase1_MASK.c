
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tgt_mutex; } ;
struct scsi_qla_host {TYPE_1__ vha_tgt; struct qla_tgt* host_no; } ;
struct qla_tgt {int tgt_stop; int waitQ; struct scsi_qla_host* sess_count; int sess_work_lock; int sess_works_list; scalar_t__ tgt_stopped; struct qla_hw_data* ha; struct scsi_qla_host* vha; } ;
struct TYPE_4__ {int host_shutting_down; } ;
struct qla_hw_data {int optrom_mutex; TYPE_2__ flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,struct scsi_qla_host*,int,char*,...) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (struct scsi_qla_host*) ;
 scalar_t__ FUNC_6 (struct scsi_qla_host*) ;
 int VAR_3 ;
 int FUNC_7 (struct qla_tgt*) ;
 int FUNC_8 (struct scsi_qla_host*) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (struct qla_tgt*) ;
 int FUNC_12 (int ,int ,int) ;

int FUNC_13(struct qla_tgt *VAR_4)
{
 struct scsi_qla_host *VAR_5 = VAR_4->vha;
 struct qla_hw_data *VAR_6 = VAR_4->ha;
 unsigned long VAR_7;

 FUNC_2(&VAR_6->optrom_mutex);
 FUNC_2(&VAR_3);

 if (VAR_4->tgt_stop || VAR_4->tgt_stopped) {
  FUNC_4(VAR_2, VAR_5, 0xf04e,
      "Already in tgt->tgt_stop or tgt_stopped state\n");
  FUNC_3(&VAR_3);
  FUNC_3(&VAR_6->optrom_mutex);
  return -VAR_0;
 }

 FUNC_4(VAR_2, VAR_5, 0xe003, "Stopping target for host %ld(%p)\n",
     VAR_5->host_no, VAR_5);




 FUNC_2(&VAR_5->vha_tgt.tgt_mutex);
 VAR_4->tgt_stop = 1;
 FUNC_7(VAR_4);
 FUNC_3(&VAR_5->vha_tgt.tgt_mutex);
 FUNC_3(&VAR_3);

 FUNC_4(VAR_2, VAR_5, 0xf009,
     "Waiting for sess works (tgt %p)", VAR_4);
 FUNC_9(&VAR_4->sess_work_lock, VAR_7);
 while (!FUNC_1(&VAR_4->sess_works_list)) {
  FUNC_10(&VAR_4->sess_work_lock, VAR_7);
  FUNC_0();
  FUNC_9(&VAR_4->sess_work_lock, VAR_7);
 }
 FUNC_10(&VAR_4->sess_work_lock, VAR_7);

 FUNC_4(VAR_2, VAR_5, 0xf00a,
     "Waiting for tgt %p: sess_count=%d\n", VAR_4, VAR_4->sess_count);

 FUNC_12(VAR_4->waitQ, FUNC_11(VAR_4), 10*VAR_1);


 if (!VAR_6->flags.host_shutting_down &&
     (FUNC_6(VAR_5) || FUNC_5(VAR_5)))
  FUNC_8(VAR_5);


 FUNC_12(VAR_4->waitQ, FUNC_11(VAR_4), 10*VAR_1);
 FUNC_3(&VAR_6->optrom_mutex);

 return 0;
}
