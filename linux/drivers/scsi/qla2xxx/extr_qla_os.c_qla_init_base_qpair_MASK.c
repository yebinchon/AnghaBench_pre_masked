
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_qla_host {struct qla_hw_data* hw; } ;
struct rsp_que {TYPE_1__* qpair; struct req_que* req; } ;
struct req_que {int dummy; } ;
struct qla_hw_data {TYPE_1__* base_qpair; int pdev; int srb_mempool; int * msix_entries; int hardware_lock; } ;
struct TYPE_2__ {int use_shadow_reg; int reqq_start_iocbs; int pdev; int enable_class_2; int hints_list; int srb_mempool; int * msix; int * qp_lock_ptr; struct scsi_qla_host* vha; struct rsp_que* rsp; struct req_que* req; struct qla_hw_data* hw; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*) ;
 scalar_t__ FUNC_2 (struct qla_hw_data*) ;
 scalar_t__ FUNC_3 (struct qla_hw_data*) ;
 scalar_t__ FUNC_4 (struct qla_hw_data*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(struct scsi_qla_host *VAR_3, struct req_que *VAR_4,
    struct rsp_que *VAR_5)
{
 struct qla_hw_data *VAR_6 = VAR_3->hw;

 VAR_5->qpair = VAR_6->base_qpair;
 VAR_5->req = VAR_4;
 VAR_6->base_qpair->hw = VAR_6;
 VAR_6->base_qpair->req = VAR_4;
 VAR_6->base_qpair->rsp = VAR_5;
 VAR_6->base_qpair->vha = VAR_3;
 VAR_6->base_qpair->qp_lock_ptr = &VAR_6->hardware_lock;
 VAR_6->base_qpair->use_shadow_reg = FUNC_4(VAR_6) ? 1 : 0;
 VAR_6->base_qpair->msix = &VAR_6->msix_entries[VAR_0];
 VAR_6->base_qpair->srb_mempool = VAR_6->srb_mempool;
 FUNC_0(&VAR_6->base_qpair->hints_list);
 VAR_6->base_qpair->enable_class_2 = VAR_1;

 FUNC_5(VAR_5->qpair, FUNC_6());
 VAR_6->base_qpair->pdev = VAR_6->pdev;

 if (FUNC_1(VAR_6) || FUNC_3(VAR_6) || FUNC_2(VAR_6))
  VAR_6->base_qpair->reqq_start_iocbs = VAR_2;
}
