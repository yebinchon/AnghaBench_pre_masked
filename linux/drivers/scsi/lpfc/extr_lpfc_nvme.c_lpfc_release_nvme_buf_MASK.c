
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lpfc_sli4_hdw_queue {int abts_io_buf_list_lock; int abts_nvme_io_bufs; int lpfc_abts_io_buf_list; } ;
struct TYPE_4__ {int iotag; int sli4_xritag; } ;
struct lpfc_io_buf {int flags; int list; TYPE_2__ cur_iocbq; struct lpfc_sli4_hdw_queue* hdwq; TYPE_1__* ndlp; } ;
struct lpfc_hba {int dummy; } ;
struct TYPE_3__ {int cmd_pending; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct lpfc_hba*,int ,int ,char*,int ,int ) ;
 int FUNC_3 (struct lpfc_hba*,struct lpfc_io_buf*,struct lpfc_sli4_hdw_queue*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_6(struct lpfc_hba *VAR_4, struct lpfc_io_buf *VAR_5)
{
 struct lpfc_sli4_hdw_queue *VAR_6;
 unsigned long VAR_7 = 0;

 if ((VAR_5->flags & VAR_2) && VAR_5->ndlp)
  FUNC_0(&VAR_5->ndlp->cmd_pending);

 VAR_5->ndlp = ((void*)0);
 VAR_5->flags &= ~VAR_2;

 VAR_6 = VAR_5->hdwq;
 if (VAR_5->flags & VAR_3) {
  FUNC_2(VAR_4, VAR_0, VAR_1,
    "6310 XB release deferred for "
    "ox_id x%x on reqtag x%x\n",
    VAR_5->cur_iocbq.sli4_xritag,
    VAR_5->cur_iocbq.iotag);

  FUNC_4(&VAR_6->abts_io_buf_list_lock, VAR_7);
  FUNC_1(&VAR_5->list,
   &VAR_6->lpfc_abts_io_buf_list);
  VAR_6->abts_nvme_io_bufs++;
  FUNC_5(&VAR_6->abts_io_buf_list_lock, VAR_7);
 } else
  FUNC_3(VAR_4, (struct lpfc_io_buf *)VAR_5, VAR_6);
}
