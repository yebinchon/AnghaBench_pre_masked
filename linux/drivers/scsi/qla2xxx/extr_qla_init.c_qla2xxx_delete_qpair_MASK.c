
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ qpairs_rsp_created; scalar_t__ qpairs_req_created; scalar_t__ qpairs_available; } ;
struct scsi_qla_host {TYPE_1__ flags; int qp_list; } ;
struct qla_qpair {int delete_in_progress; size_t id; int srb_mempool; int qp_list_elem; int rsp; int req; int ref_count; struct qla_hw_data* hw; } ;
struct qla_hw_data {int mq_lock; int num_qpairs; int qpair_qid_map; int ** queue_pair_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (size_t,int ) ;
 int FUNC_2 (struct qla_qpair*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct scsi_qla_host*,int ) ;
 int FUNC_10 (struct scsi_qla_host*,int ) ;

int FUNC_11(struct scsi_qla_host *VAR_2, struct qla_qpair *VAR_3)
{
 int VAR_4 = VAR_0;
 struct qla_hw_data *VAR_5 = VAR_3->hw;

 VAR_3->delete_in_progress = 1;
 while (FUNC_0(&VAR_3->ref_count))
  FUNC_6(500);

 VAR_4 = FUNC_9(VAR_2, VAR_3->req);
 if (VAR_4 != VAR_1)
  goto fail;

 VAR_4 = FUNC_10(VAR_2, VAR_3->rsp);
 if (VAR_4 != VAR_1)
  goto fail;

 FUNC_7(&VAR_5->mq_lock);
 VAR_5->queue_pair_map[VAR_3->id] = ((void*)0);
 FUNC_1(VAR_3->id, VAR_5->qpair_qid_map);
 VAR_5->num_qpairs--;
 FUNC_3(&VAR_3->qp_list_elem);
 if (FUNC_4(&VAR_2->qp_list)) {
  VAR_2->flags.qpairs_available = 0;
  VAR_2->flags.qpairs_req_created = 0;
  VAR_2->flags.qpairs_rsp_created = 0;
 }
 FUNC_5(VAR_3->srb_mempool);
 FUNC_2(VAR_3);
 FUNC_8(&VAR_5->mq_lock);

 return VAR_1;
fail:
 return VAR_4;
}
