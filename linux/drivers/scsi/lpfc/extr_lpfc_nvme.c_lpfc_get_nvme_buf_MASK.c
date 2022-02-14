
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union lpfc_wqe128 {int dummy; } lpfc_wqe128 ;
typedef union lpfc_wqe {int dummy; } lpfc_wqe ;
struct sli4_sge {int word2; } ;
struct lpfc_sli4_hdw_queue {int empty_io_bufs; } ;
struct lpfc_nodelist {int cmd_pending; } ;
struct lpfc_iocbq {int wqe_cmpl; int iocb_flag; union lpfc_wqe128 wqe; } ;
struct lpfc_io_buf {int flags; struct sli4_sge* dma_sgl; int start_time; struct lpfc_iocbq cur_iocbq; } ;
struct TYPE_2__ {struct lpfc_sli4_hdw_queue* hdwq; } ;
struct lpfc_hba {TYPE_1__ sli4_hba; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct sli4_sge*,int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 struct lpfc_io_buf* FUNC_3 (struct lpfc_hba*,int *,int,int) ;
 scalar_t__ FUNC_4 (struct lpfc_hba*,struct lpfc_nodelist*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (union lpfc_wqe128*,int ,int) ;

__attribute__((used)) static struct lpfc_io_buf *
FUNC_6(struct lpfc_hba *VAR_7, struct lpfc_nodelist *VAR_8,
    int VAR_9, int VAR_10)
{
 struct lpfc_io_buf *VAR_11;
 struct lpfc_sli4_hdw_queue *VAR_12;
 struct sli4_sge *VAR_13;
 struct lpfc_iocbq *VAR_14;
 union lpfc_wqe128 *VAR_15;

 VAR_11 = FUNC_3(VAR_7, ((void*)0), VAR_9, VAR_10);

 if (VAR_11) {
  VAR_14 = &(VAR_11->cur_iocbq);
  VAR_15 = &VAR_14->wqe;




  VAR_14->iocb_flag = VAR_0;
  VAR_14->wqe_cmpl = VAR_4;
  VAR_11->start_time = VAR_3;
  VAR_11->flags = 0;





  VAR_13 = VAR_11->dma_sgl;
  FUNC_1(VAR_6, VAR_13, VAR_2);
  FUNC_1(VAR_5, VAR_13, 0);
  VAR_13->word2 = FUNC_2(VAR_13->word2);



  FUNC_5(VAR_15, 0, sizeof(union lpfc_wqe));

  if (FUNC_4(VAR_7, VAR_8)) {
   FUNC_0(&VAR_8->cmd_pending);
   VAR_11->flags |= VAR_1;
  }

 } else {
  VAR_12 = &VAR_7->sli4_hba.hdwq[VAR_9];
  VAR_12->empty_io_bufs++;
 }

 return VAR_11;
}
