
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb_ctl {int request_queue_lock; int request_queue; int running; } ;
struct tb_cfg_request {int flags; int list; struct tb_ctl* ctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tb_ctl*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 struct tb_ctl* FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct tb_ctl *VAR_2,
      struct tb_cfg_request *VAR_3)
{
 FUNC_0(FUNC_5(VAR_1, &VAR_3->flags));
 FUNC_0(VAR_3->ctl);

 FUNC_2(&VAR_2->request_queue_lock);
 if (!VAR_2->running) {
  FUNC_3(&VAR_2->request_queue_lock);
  return -VAR_0;
 }
 VAR_3->ctl = VAR_2;
 FUNC_1(&VAR_3->list, &VAR_2->request_queue);
 FUNC_4(VAR_1, &VAR_3->flags);
 FUNC_3(&VAR_2->request_queue_lock);
 return 0;
}
