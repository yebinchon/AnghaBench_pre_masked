
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cw1200_common {int bh_work; int bh_workqueue; int bh_evt_wq; int bh_wq; scalar_t__ buf_id_rx; scalar_t__ buf_id_tx; scalar_t__ hw_bufs_used; scalar_t__ bh_error; int bh_suspend; int bh_term; int bh_tx; int bh_rx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (int *,int ) ;
 int VAR_5 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int *) ;

int FUNC_7(struct cw1200_common *VAR_6)
{
 int VAR_7 = 0;

 VAR_6->bh_workqueue = FUNC_2("cw1200_bh",
    VAR_4 | VAR_3
    | VAR_2, 1);

 if (!VAR_6->bh_workqueue)
  return -VAR_1;

 FUNC_0(&VAR_6->bh_work, VAR_5);

 FUNC_5("[BH] register.\n");

 FUNC_3(&VAR_6->bh_rx, 0);
 FUNC_3(&VAR_6->bh_tx, 0);
 FUNC_3(&VAR_6->bh_term, 0);
 FUNC_3(&VAR_6->bh_suspend, VAR_0);
 VAR_6->bh_error = 0;
 VAR_6->hw_bufs_used = 0;
 VAR_6->buf_id_tx = 0;
 VAR_6->buf_id_rx = 0;
 FUNC_4(&VAR_6->bh_wq);
 FUNC_4(&VAR_6->bh_evt_wq);

 VAR_7 = !FUNC_6(VAR_6->bh_workqueue, &VAR_6->bh_work);
 FUNC_1(VAR_7);
 return VAR_7;
}
