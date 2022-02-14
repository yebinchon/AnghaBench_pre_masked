
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb_ctl {int running; int request_queue; int tx; int rx; int request_queue_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct tb_ctl*,char*) ;
 int FUNC_5 (struct tb_ctl*,char*) ;
 int FUNC_6 (int ) ;

void FUNC_7(struct tb_ctl *VAR_0)
{
 FUNC_2(&VAR_0->request_queue_lock);
 VAR_0->running = 0;
 FUNC_3(&VAR_0->request_queue_lock);

 FUNC_6(VAR_0->rx);
 FUNC_6(VAR_0->tx);

 if (!FUNC_1(&VAR_0->request_queue))
  FUNC_4(VAR_0, "dangling request in request_queue\n");
 FUNC_0(&VAR_0->request_queue);
 FUNC_5(VAR_0, "control channel stopped\n");
}
