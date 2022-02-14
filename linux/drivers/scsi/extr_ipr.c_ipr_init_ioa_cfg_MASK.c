
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct ipr_ioa_cfg {int max_devs_supported; int cfg_table_size; TYPE_1__* hrrq; struct Scsi_Host* host; int max_cmds; scalar_t__ sis64; int sdt_state; int eeh_wait_q; int msi_wait_q; int reset_wait_q; int scsi_add_work_q; int work_q; int used_res_q; int free_res_q; int hostrcb_report_q; int hostrcb_pending_q; int hostrcb_free_q; int ipr_cmd_label; int ipr_hcam_label; int resource_table_label; int cfg_table_start; int trace_start; int eye_catcher; int doorbell; int log_level; struct pci_dev* pdev; } ;
struct ipr_config_table_hdr64 {int dummy; } ;
struct ipr_config_table_hdr {int dummy; } ;
struct ipr_config_table_entry64 {int dummy; } ;
struct ipr_config_table_entry {int dummy; } ;
struct Scsi_Host {int * host_lock; int can_queue; int max_cmd_len; int host_no; int unique_id; int max_channel; int max_lun; int max_id; } ;
struct TYPE_2__ {int _lock; int * lock; int hrrq_pending_q; int hrrq_free_q; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 char* VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 char* VAR_13 ;
 char* VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (int *) ;
 int VAR_16 ;
 int FUNC_4 (struct ipr_ioa_cfg*) ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int FUNC_5 (struct pci_dev*,struct ipr_ioa_cfg*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,char*) ;

__attribute__((used)) static void FUNC_8(struct ipr_ioa_cfg *VAR_20,
        struct Scsi_Host *VAR_21, struct pci_dev *VAR_22)
{
 int VAR_23;

 VAR_20->host = VAR_21;
 VAR_20->pdev = VAR_22;
 VAR_20->log_level = VAR_17;
 VAR_20->doorbell = VAR_3;
 FUNC_7(VAR_20->eye_catcher, VAR_4);
 FUNC_7(VAR_20->trace_start, VAR_14);
 FUNC_7(VAR_20->cfg_table_start, VAR_1);
 FUNC_7(VAR_20->resource_table_label, VAR_13);
 FUNC_7(VAR_20->ipr_hcam_label, VAR_5);
 FUNC_7(VAR_20->ipr_cmd_label, VAR_2);

 FUNC_1(&VAR_20->hostrcb_free_q);
 FUNC_1(&VAR_20->hostrcb_pending_q);
 FUNC_1(&VAR_20->hostrcb_report_q);
 FUNC_1(&VAR_20->free_res_q);
 FUNC_1(&VAR_20->used_res_q);
 FUNC_2(&VAR_20->work_q, VAR_19);
 FUNC_2(&VAR_20->scsi_add_work_q, VAR_16);
 FUNC_3(&VAR_20->reset_wait_q);
 FUNC_3(&VAR_20->msi_wait_q);
 FUNC_3(&VAR_20->eeh_wait_q);
 VAR_20->sdt_state = VAR_0;

 FUNC_4(VAR_20);
 VAR_20->max_devs_supported = VAR_18;

 if (VAR_20->sis64) {
  VAR_21->max_id = VAR_12;
  VAR_21->max_lun = VAR_11;
  if (VAR_18 > VAR_10)
   VAR_20->max_devs_supported = VAR_10;
  VAR_20->cfg_table_size = (sizeof(struct ipr_config_table_hdr64)
        + ((sizeof(struct ipr_config_table_entry64)
            * VAR_20->max_devs_supported)));
 } else {
  VAR_21->max_id = VAR_8;
  VAR_21->max_lun = VAR_7;
  if (VAR_18 > VAR_9)
   VAR_20->max_devs_supported = VAR_9;
  VAR_20->cfg_table_size = (sizeof(struct ipr_config_table_hdr)
        + ((sizeof(struct ipr_config_table_entry)
            * VAR_20->max_devs_supported)));
 }

 VAR_21->max_channel = VAR_15;
 VAR_21->unique_id = VAR_21->host_no;
 VAR_21->max_cmd_len = VAR_6;
 VAR_21->can_queue = VAR_20->max_cmds;
 FUNC_5(VAR_22, VAR_20);

 for (VAR_23 = 0; VAR_23 < FUNC_0(VAR_20->hrrq); VAR_23++) {
  FUNC_1(&VAR_20->hrrq[VAR_23].hrrq_free_q);
  FUNC_1(&VAR_20->hrrq[VAR_23].hrrq_pending_q);
  FUNC_6(&VAR_20->hrrq[VAR_23]._lock);
  if (VAR_23 == 0)
   VAR_20->hrrq[VAR_23].lock = VAR_20->host->host_lock;
  else
   VAR_20->hrrq[VAR_23].lock = &VAR_20->hrrq[VAR_23]._lock;
 }
}
