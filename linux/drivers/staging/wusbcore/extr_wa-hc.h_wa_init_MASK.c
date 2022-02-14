
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wahc {scalar_t__ active_buf_in_urbs; int * buf_in_urbs; int xfer_id_count; scalar_t__ dto_in_use; int xfer_error_work; int xfer_enqueue_work; int xfer_list_lock; int xfer_errored_list; int xfer_delayed_list; int xfer_list; int dti_edc; int dti_state; int notifs_queued; int nep_edc; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 int FUNC_6 (struct wahc*) ;
 int VAR_3 ;

__attribute__((used)) static inline void FUNC_7(struct wahc *VAR_4)
{
 int VAR_5;

 FUNC_3(&VAR_4->nep_edc);
 FUNC_2(&VAR_4->notifs_queued, 0);
 VAR_4->dti_state = VAR_0;
 FUNC_6(VAR_4);
 FUNC_3(&VAR_4->dti_edc);
 FUNC_0(&VAR_4->xfer_list);
 FUNC_0(&VAR_4->xfer_delayed_list);
 FUNC_0(&VAR_4->xfer_errored_list);
 FUNC_4(&VAR_4->xfer_list_lock);
 FUNC_1(&VAR_4->xfer_enqueue_work, VAR_3);
 FUNC_1(&VAR_4->xfer_error_work, VAR_2);
 VAR_4->dto_in_use = 0;
 FUNC_2(&VAR_4->xfer_id_count, 1);

 for (VAR_5 = 0; VAR_5 < VAR_1; ++VAR_5)
  FUNC_5(&(VAR_4->buf_in_urbs[VAR_5]));
 VAR_4->active_buf_in_urbs = 0;
}
