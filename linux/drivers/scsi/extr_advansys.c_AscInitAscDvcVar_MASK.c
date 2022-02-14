
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uchar ;
struct TYPE_5__ {int bus_type; int is_in_int; int scsi_reset_wait; int max_sdtr_index; TYPE_1__* cfg; int ** scsiq_busy_tail; int ** scsiq_busy_head; int * max_dvc_qng; scalar_t__* cur_dvc_qng; int sdtr_period_tbl; int max_dma_count; void* start_motor; int max_total_qng; scalar_t__ init_sdtr; int dvc_cntl; scalar_t__ min_sdtr_index; scalar_t__ res2; scalar_t__ redo_scam; scalar_t__ queue_full_or_busy; scalar_t__ unit_not_ready; scalar_t__ no_scam; scalar_t__ use_tagged_qng; scalar_t__ last_q_shortage; scalar_t__ in_critical_cnt; scalar_t__ cur_total_qng; scalar_t__ sdtr_done; scalar_t__ pci_fix_asyn_xfer_always; scalar_t__ pci_fix_asyn_xfer; scalar_t__ bug_fix_cntl; int err_code; int iop_base; } ;
struct TYPE_4__ {int * max_tag_qng; scalar_t__ isa_dma_channel; int isa_dma_speed; scalar_t__ chip_version; int chip_scsi_id; void* disc_enable; void* sdtr_enable; scalar_t__ cmd_qng_enabled; scalar_t__ can_tagged_qng; } ;
typedef int PortAddr ;
typedef int ASC_SCSI_Q ;
typedef TYPE_2__ ASC_DVC_VAR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 void* VAR_17 ;
 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;

__attribute__((used)) static void FUNC_7(ASC_DVC_VAR *VAR_25)
{
 int VAR_26;
 PortAddr VAR_27;
 uchar VAR_28;

 VAR_27 = VAR_25->iop_base;
 VAR_25->err_code = 0;
 if ((VAR_25->bus_type &
      (VAR_9 | VAR_11 | VAR_8 | VAR_13)) == 0) {
  VAR_25->err_code |= VAR_7;
 }
 FUNC_3(VAR_27, VAR_18);
 FUNC_5(VAR_27, 0);
 VAR_25->bug_fix_cntl = 0;
 VAR_25->pci_fix_asyn_xfer = 0;
 VAR_25->pci_fix_asyn_xfer_always = 0;

 VAR_25->sdtr_done = 0;
 VAR_25->cur_total_qng = 0;
 VAR_25->is_in_int = 0;
 VAR_25->in_critical_cnt = 0;
 VAR_25->last_q_shortage = 0;
 VAR_25->use_tagged_qng = 0;
 VAR_25->no_scam = 0;
 VAR_25->unit_not_ready = 0;
 VAR_25->queue_full_or_busy = 0;
 VAR_25->redo_scam = 0;
 VAR_25->res2 = 0;
 VAR_25->min_sdtr_index = 0;
 VAR_25->cfg->can_tagged_qng = 0;
 VAR_25->cfg->cmd_qng_enabled = 0;
 VAR_25->dvc_cntl = VAR_4;
 VAR_25->init_sdtr = 0;
 VAR_25->max_total_qng = VAR_6;
 VAR_25->scsi_reset_wait = 3;
 VAR_25->start_motor = VAR_17;
 VAR_25->max_dma_count = FUNC_2(VAR_25->bus_type);
 VAR_25->cfg->sdtr_enable = VAR_17;
 VAR_25->cfg->disc_enable = VAR_17;
 VAR_25->cfg->chip_scsi_id = VAR_3;
 VAR_28 = FUNC_0(VAR_27, VAR_25->bus_type);
 VAR_25->cfg->chip_version = VAR_28;
 VAR_25->sdtr_period_tbl = VAR_24;
 VAR_25->max_sdtr_index = 7;
 if ((VAR_25->bus_type & VAR_11) &&
     (VAR_28 >= VAR_2)) {
  VAR_25->bus_type = VAR_12;
  VAR_25->sdtr_period_tbl = VAR_23;
  VAR_25->max_sdtr_index = 15;
  if (VAR_28 == VAR_2) {
   FUNC_6(VAR_27,
        (VAR_20 | VAR_22));
  } else if (VAR_28 >= VAR_1) {
   FUNC_6(VAR_27,
        (VAR_20 |
         VAR_21));
  }
 }
 if (VAR_25->bus_type == VAR_11) {
  FUNC_6(VAR_27,
       (VAR_20 | VAR_22));
 }

 VAR_25->cfg->isa_dma_speed = VAR_5;
 for (VAR_26 = 0; VAR_26 <= VAR_16; VAR_26++) {
  VAR_25->cur_dvc_qng[VAR_26] = 0;
  VAR_25->max_dvc_qng[VAR_26] = VAR_15;
  VAR_25->scsiq_busy_head[VAR_26] = (ASC_SCSI_Q *)0L;
  VAR_25->scsiq_busy_tail[VAR_26] = (ASC_SCSI_Q *)0L;
  VAR_25->cfg->max_tag_qng[VAR_26] = VAR_14;
 }
}
