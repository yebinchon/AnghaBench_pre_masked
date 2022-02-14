
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct lpfc_vport {int fc_flag; struct lpfc_hba* phba; } ;
struct lpfc_lnk_stat {int link_events; int error_frames; int invalid_crc_count; int invalid_tx_word_count; int prim_seq_protocol_err_count; int loss_of_signal_count; int loss_of_sync_count; int link_failure_count; } ;
struct lpfc_sli {int sli_flag; int stats_start; struct lpfc_lnk_stat lnk_stat_offsets; } ;
struct lpfc_hba {int fc_ratov; int hba_flag; int link_events; int fc_eventTag; int mbox_mem_pool; struct lpfc_sli sli; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
struct TYPE_12__ {int crcCnt; int invalidXmitWord; int primSeqErrCnt; int lossSignalCnt; int lossSyncCnt; int linkFailureCnt; } ;
struct TYPE_13__ {int* varWords; TYPE_2__ varRdLnk; } ;
struct TYPE_14__ {TYPE_3__ un; void* mbxOwner; int mbxCommand; } ;
struct TYPE_11__ {TYPE_4__ mb; } ;
struct TYPE_15__ {struct lpfc_vport* vport; int * ctx_buf; TYPE_1__ u; } ;
typedef TYPE_4__ MAILBOX_t ;
typedef TYPE_5__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 int FUNC_0 () ;
 int FUNC_1 (struct lpfc_hba*,TYPE_5__*,int ) ;
 int FUNC_2 (struct lpfc_hba*,TYPE_5__*,int) ;
 TYPE_5__* FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_5__*,int ) ;
 int FUNC_5 (TYPE_5__*,int ,int) ;

__attribute__((used)) static void
FUNC_6(struct Scsi_Host *VAR_11)
{
 struct lpfc_vport *VAR_12 = (struct lpfc_vport *) VAR_11->hostdata;
 struct lpfc_hba *VAR_13 = VAR_12->phba;
 struct lpfc_sli *VAR_14 = &VAR_13->sli;
 struct lpfc_lnk_stat *VAR_15 = &VAR_14->lnk_stat_offsets;
 LPFC_MBOXQ_t *VAR_16;
 MAILBOX_t *VAR_17;
 int VAR_18 = 0;

 if (VAR_13->sli.sli_flag & VAR_3)
  return;

 VAR_16 = FUNC_3(VAR_13->mbox_mem_pool, VAR_1);
 if (!VAR_16)
  return;
 FUNC_5(VAR_16, 0, sizeof(LPFC_MBOXQ_t));

 VAR_17 = &VAR_16->u.mb;
 VAR_17->mbxCommand = VAR_7;
 VAR_17->mbxOwner = VAR_10;
 VAR_17->un.varWords[0] = 0x1;
 VAR_16->ctx_buf = ((void*)0);
 VAR_16->vport = VAR_12;

 if ((VAR_12->fc_flag & VAR_0) ||
  (!(VAR_14->sli_flag & VAR_4)))
  VAR_18 = FUNC_1(VAR_13, VAR_16, VAR_5);
 else
  VAR_18 = FUNC_2(VAR_13, VAR_16, VAR_13->fc_ratov * 2);

 if (VAR_18 != VAR_8) {
  if (VAR_18 != VAR_9)
   FUNC_4(VAR_16, VAR_13->mbox_mem_pool);
  return;
 }

 FUNC_5(VAR_16, 0, sizeof(LPFC_MBOXQ_t));
 VAR_17->mbxCommand = VAR_6;
 VAR_17->mbxOwner = VAR_10;
 VAR_16->ctx_buf = ((void*)0);
 VAR_16->vport = VAR_12;

 if ((VAR_12->fc_flag & VAR_0) ||
     (!(VAR_14->sli_flag & VAR_4)))
  VAR_18 = FUNC_1(VAR_13, VAR_16, VAR_5);
 else
  VAR_18 = FUNC_2(VAR_13, VAR_16, VAR_13->fc_ratov * 2);

 if (VAR_18 != VAR_8) {
  if (VAR_18 != VAR_9)
   FUNC_4( VAR_16, VAR_13->mbox_mem_pool);
  return;
 }

 VAR_15->link_failure_count = VAR_17->un.varRdLnk.linkFailureCnt;
 VAR_15->loss_of_sync_count = VAR_17->un.varRdLnk.lossSyncCnt;
 VAR_15->loss_of_signal_count = VAR_17->un.varRdLnk.lossSignalCnt;
 VAR_15->prim_seq_protocol_err_count = VAR_17->un.varRdLnk.primSeqErrCnt;
 VAR_15->invalid_tx_word_count = VAR_17->un.varRdLnk.invalidXmitWord;
 VAR_15->invalid_crc_count = VAR_17->un.varRdLnk.crcCnt;
 VAR_15->error_frames = VAR_17->un.varRdLnk.crcCnt;
 if (VAR_13->hba_flag & VAR_2)
  VAR_15->link_events = (VAR_13->link_events >> 1);
 else
  VAR_15->link_events = (VAR_13->fc_eventTag >> 1);

 VAR_14->stats_start = FUNC_0();

 FUNC_4(VAR_16, VAR_13->mbox_mem_pool);

 return;
}
