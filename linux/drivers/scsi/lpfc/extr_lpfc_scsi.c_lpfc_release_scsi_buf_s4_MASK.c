
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_sli4_hdw_queue {int abts_io_buf_list_lock; int abts_scsi_io_bufs; int lpfc_abts_io_buf_list; } ;
struct lpfc_io_buf {int list; int * pCmd; scalar_t__ exch_busy; struct lpfc_sli4_hdw_queue* hdwq; scalar_t__ prot_seg_cnt; scalar_t__ seg_cnt; } ;
struct lpfc_hba {int dummy; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct lpfc_hba*,struct lpfc_io_buf*,struct lpfc_sli4_hdw_queue*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_4(struct lpfc_hba *VAR_0, struct lpfc_io_buf *VAR_1)
{
 struct lpfc_sli4_hdw_queue *VAR_2;
 unsigned long VAR_3 = 0;

 VAR_1->seg_cnt = 0;
 VAR_1->prot_seg_cnt = 0;

 VAR_2 = VAR_1->hdwq;
 if (VAR_1->exch_busy) {
  FUNC_2(&VAR_2->abts_io_buf_list_lock, VAR_3);
  VAR_1->pCmd = ((void*)0);
  FUNC_0(&VAR_1->list, &VAR_2->lpfc_abts_io_buf_list);
  VAR_2->abts_scsi_io_bufs++;
  FUNC_3(&VAR_2->abts_io_buf_list_lock, VAR_3);
 } else {
  FUNC_1(VAR_0, (struct lpfc_io_buf *)VAR_1, VAR_2);
 }
}
