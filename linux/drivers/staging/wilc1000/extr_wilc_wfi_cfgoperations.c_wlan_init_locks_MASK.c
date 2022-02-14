
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wilc {int txq_thread_started; int sync_event; int cfg_event; int txq_event; int txq_add_to_head_cs; int txq_spinlock; int vif_mutex; int cfg_cmd_lock; int rxq_cs; int hif_cs; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct wilc *VAR_0)
{
 FUNC_1(&VAR_0->hif_cs);
 FUNC_1(&VAR_0->rxq_cs);
 FUNC_1(&VAR_0->cfg_cmd_lock);
 FUNC_1(&VAR_0->vif_mutex);

 FUNC_2(&VAR_0->txq_spinlock);
 FUNC_1(&VAR_0->txq_add_to_head_cs);

 FUNC_0(&VAR_0->txq_event);
 FUNC_0(&VAR_0->cfg_event);
 FUNC_0(&VAR_0->sync_event);
 FUNC_0(&VAR_0->txq_thread_started);
}
