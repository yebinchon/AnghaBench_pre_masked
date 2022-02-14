
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t uint32_t ;
struct sli4_sge {int word2; void* sge_len; void* addr_lo; void* addr_hi; } ;
struct scsi_cmnd {int request; } ;
struct lpfc_sli4_hdw_queue {int empty_io_bufs; } ;
struct lpfc_nodelist {int cmd_pending; } ;
struct TYPE_11__ {int bdeSize; int addrLow; int addrHigh; int bdeFlags; scalar_t__ ulpIoTag32; } ;
struct TYPE_12__ {TYPE_4__ bdl; } ;
struct TYPE_13__ {TYPE_5__ fcpi64; } ;
struct TYPE_14__ {int ulpBdeCount; int ulpLe; int ulpClass; TYPE_6__ un; } ;
struct TYPE_10__ {TYPE_7__ iocb; int iocb_flag; } ;
struct lpfc_io_buf {size_t cpu; int flags; TYPE_3__ cur_iocbq; scalar_t__ dma_sgl; int fcp_rsp; int fcp_cmnd; scalar_t__ prot_data_type; int * waitq; int start_time; scalar_t__ timeout; scalar_t__ seg_cnt; scalar_t__ prot_seg_cnt; } ;
struct TYPE_9__ {struct lpfc_sli4_hdw_queue* hdwq; TYPE_1__* cpu_map; } ;
struct lpfc_hba {scalar_t__ cfg_fcp_io_sched; TYPE_2__ sli4_hba; int cfg_xri_rebalancing; } ;
struct fcp_rsp {int dummy; } ;
struct fcp_cmnd {int dummy; } ;
struct fcp_cmd_rsp_buf {scalar_t__ fcp_cmd_rsp_dma_handle; int fcp_rsp; int fcp_cmnd; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_8__ {size_t hdwq; } ;
typedef TYPE_7__ IOCB_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct sli4_sge*,int) ;
 int FUNC_2 (int ) ;
 size_t FUNC_3 (int) ;
 void* FUNC_4 (int) ;
 int VAR_5 ;
 void* FUNC_5 (int) ;
 struct fcp_cmd_rsp_buf* FUNC_6 (struct lpfc_hba*,struct lpfc_io_buf*) ;
 struct lpfc_io_buf* FUNC_7 (struct lpfc_hba*,struct lpfc_nodelist*,size_t,int) ;
 scalar_t__ FUNC_8 (struct lpfc_hba*,struct lpfc_nodelist*) ;
 int VAR_6 ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 size_t FUNC_11 () ;

__attribute__((used)) static struct lpfc_io_buf *
FUNC_12(struct lpfc_hba *VAR_7, struct lpfc_nodelist *VAR_8,
       struct scsi_cmnd *VAR_9)
{
 struct lpfc_io_buf *VAR_10;
 struct lpfc_sli4_hdw_queue *VAR_11;
 struct sli4_sge *VAR_12;
 IOCB_t *VAR_13;
 dma_addr_t VAR_14;
 dma_addr_t VAR_15;
 uint32_t VAR_16, VAR_17;
 int VAR_18;
 struct fcp_cmd_rsp_buf *VAR_19 = ((void*)0);

 VAR_16 = FUNC_11();
 if (VAR_9 && VAR_7->cfg_fcp_io_sched == VAR_2) {
  VAR_18 = FUNC_2(VAR_9->request);
  VAR_17 = FUNC_3(VAR_18);
 } else {
  VAR_17 = VAR_7->sli4_hba.cpu_map[VAR_16].hdwq;
 }

 VAR_10 = FUNC_7(VAR_7, VAR_8, VAR_17,
       !VAR_7->cfg_xri_rebalancing);
 if (!VAR_10) {
  VAR_11 = &VAR_7->sli4_hba.hdwq[VAR_17];
  VAR_11->empty_io_bufs++;
  return ((void*)0);
 }




 VAR_10->cur_iocbq.iocb_flag = VAR_3;
 VAR_10->prot_seg_cnt = 0;
 VAR_10->seg_cnt = 0;
 VAR_10->timeout = 0;
 VAR_10->flags = 0;
 VAR_10->start_time = VAR_5;
 VAR_10->waitq = ((void*)0);
 VAR_10->cpu = VAR_16;



 VAR_19 = FUNC_6(VAR_7, VAR_10);
 if (!VAR_19)
  return ((void*)0);

 VAR_10->fcp_cmnd = VAR_19->fcp_cmnd;
 VAR_10->fcp_rsp = VAR_19->fcp_rsp;






 VAR_12 = (struct sli4_sge *)VAR_10->dma_sgl;
 VAR_15 = VAR_19->fcp_cmd_rsp_dma_handle;
 VAR_12->addr_hi = FUNC_4(FUNC_9(VAR_15));
 VAR_12->addr_lo = FUNC_4(FUNC_10(VAR_15));
 VAR_12->word2 = FUNC_5(VAR_12->word2);
 FUNC_1(VAR_6, VAR_12, 0);
 VAR_12->word2 = FUNC_4(VAR_12->word2);
 VAR_12->sge_len = FUNC_4(sizeof(struct fcp_cmnd));
 VAR_12++;


 VAR_14 = VAR_15 + sizeof(struct fcp_cmnd);
 VAR_12->addr_hi = FUNC_4(FUNC_9(VAR_14));
 VAR_12->addr_lo = FUNC_4(FUNC_10(VAR_14));
 VAR_12->word2 = FUNC_5(VAR_12->word2);
 FUNC_1(VAR_6, VAR_12, 1);
 VAR_12->word2 = FUNC_4(VAR_12->word2);
 VAR_12->sge_len = FUNC_4(sizeof(struct fcp_rsp));





 VAR_13 = &VAR_10->cur_iocbq.iocb;
 VAR_13->un.fcpi64.bdl.ulpIoTag32 = 0;
 VAR_13->un.fcpi64.bdl.bdeFlags = VAR_0;




 VAR_13->un.fcpi64.bdl.bdeSize = sizeof(struct fcp_cmnd);
 VAR_13->un.fcpi64.bdl.addrLow = FUNC_10(VAR_15);
 VAR_13->un.fcpi64.bdl.addrHigh = FUNC_9(VAR_15);
 VAR_13->ulpBdeCount = 1;
 VAR_13->ulpLe = 1;
 VAR_13->ulpClass = VAR_1;

 if (FUNC_8(VAR_7, VAR_8)) {
  FUNC_0(&VAR_8->cmd_pending);
  VAR_10->flags |= VAR_4;
 }
 return VAR_10;
}
