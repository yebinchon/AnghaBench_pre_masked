
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int size; int scan_work; int l; } ;
struct TYPE_4__ {int size; int * l; int ldma; int fcports; } ;
struct scsi_qla_host {struct qla_hw_data* hw; struct Scsi_Host* host; int host_str; int host_no; TYPE_2__ scan; TYPE_1__ gnl; int vref_waitq; int fcport_waitQ; int cmd_list_lock; int work_lock; int iocb_work; int gpnid_list; int qp_list; int plogi_ack_list; int logo_list; int qla_sess_op_cmd_list; int qla_cmd_list; int list; int work_list; int vp_fcports; int ql2xiniexchg; int ql2xexchoffld; int qlini_mode; } ;
struct scsi_host_template {int dummy; } ;
struct qla_hw_data {int max_loop_id; int max_fibre_devices; TYPE_3__* pdev; } ;
struct get_name_list_extended {int dummy; } ;
struct fab_scan_rp {int dummy; } ;
struct Scsi_Host {int host_no; } ;
typedef int scsi_qla_host_t ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 char* VAR_1 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,int,int *,int ) ;
 int FUNC_5 (int *,int,int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct scsi_qla_host*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (int ,struct scsi_qla_host*,int,char*,struct Scsi_Host*,struct qla_hw_data*,struct scsi_qla_host*,int ) ;
 int VAR_5 ;
 int FUNC_9 (int ,struct scsi_qla_host*,int,char*) ;
 int VAR_6 ;
 int FUNC_10 (int ,TYPE_3__*,int,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 struct Scsi_Host* FUNC_11 (struct scsi_host_template*,int) ;
 int FUNC_12 (struct Scsi_Host*) ;
 struct scsi_qla_host* FUNC_13 (struct Scsi_Host*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,char*,char*,int ) ;
 int FUNC_16 (int) ;

struct scsi_qla_host *FUNC_17(struct scsi_host_template *VAR_9,
      struct qla_hw_data *VAR_10)
{
 struct Scsi_Host *VAR_11;
 struct scsi_qla_host *VAR_12 = ((void*)0);

 VAR_11 = FUNC_11(VAR_9, sizeof(scsi_qla_host_t));
 if (!VAR_11) {
  FUNC_10(VAR_6, VAR_10->pdev, 0x0107,
      "Failed to allocate host from the scsi layer, aborting.\n");
  return ((void*)0);
 }


 VAR_12 = FUNC_13(VAR_11);
 FUNC_7(VAR_12, 0, sizeof(scsi_qla_host_t));

 VAR_12->host = VAR_11;
 VAR_12->host_no = VAR_11->host_no;
 VAR_12->hw = VAR_10;

 VAR_12->qlini_mode = VAR_2;
 VAR_12->ql2xexchoffld = VAR_3;
 VAR_12->ql2xiniexchg = VAR_4;

 FUNC_1(&VAR_12->vp_fcports);
 FUNC_1(&VAR_12->work_list);
 FUNC_1(&VAR_12->list);
 FUNC_1(&VAR_12->qla_cmd_list);
 FUNC_1(&VAR_12->qla_sess_op_cmd_list);
 FUNC_1(&VAR_12->logo_list);
 FUNC_1(&VAR_12->plogi_ack_list);
 FUNC_1(&VAR_12->qp_list);
 FUNC_1(&VAR_12->gnl.fcports);
 FUNC_1(&VAR_12->gpnid_list);
 FUNC_2(&VAR_12->iocb_work, VAR_7);

 FUNC_14(&VAR_12->work_lock);
 FUNC_14(&VAR_12->cmd_list_lock);
 FUNC_6(&VAR_12->fcport_waitQ);
 FUNC_6(&VAR_12->vref_waitq);

 VAR_12->gnl.size = sizeof(struct get_name_list_extended) *
   (VAR_10->max_loop_id + 1);
 VAR_12->gnl.l = FUNC_4(&VAR_10->pdev->dev,
     VAR_12->gnl.size, &VAR_12->gnl.ldma, VAR_0);
 if (!VAR_12->gnl.l) {
  FUNC_9(VAR_6, VAR_12, 0xd04a,
      "Alloc failed for name list.\n");
  FUNC_12(VAR_12->host);
  return ((void*)0);
 }


 VAR_12->scan.size = VAR_10->max_fibre_devices * sizeof(struct fab_scan_rp);
 VAR_12->scan.l = FUNC_16(VAR_12->scan.size);
 if (!VAR_12->scan.l) {
  FUNC_9(VAR_6, VAR_12, 0xd04a,
      "Alloc failed for scan database.\n");
  FUNC_5(&VAR_10->pdev->dev, VAR_12->gnl.size,
      VAR_12->gnl.l, VAR_12->gnl.ldma);
  VAR_12->gnl.l = ((void*)0);
  FUNC_12(VAR_12->host);
  return ((void*)0);
 }
 FUNC_0(&VAR_12->scan.scan_work, VAR_8);

 FUNC_15(VAR_12->host_str, "%s_%ld", VAR_1, VAR_12->host_no);
 FUNC_8(VAR_5, VAR_12, 0x0041,
     "Allocated the host=%p hw=%p vha=%p dev_name=%s",
     VAR_12->host, VAR_12->hw, VAR_12,
     FUNC_3(&(VAR_10->pdev->dev)));

 return VAR_12;
}
