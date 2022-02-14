
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb_ctl {int request_queue_lock; } ;
struct tb_cfg_request {int flags; int list; struct tb_ctl* ctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct tb_cfg_request *VAR_3)
{
 struct tb_ctl *VAR_4 = VAR_3->ctl;

 FUNC_2(&VAR_4->request_queue_lock);
 FUNC_1(&VAR_3->list);
 FUNC_0(VAR_0, &VAR_3->flags);
 if (FUNC_4(VAR_1, &VAR_3->flags))
  FUNC_5(&VAR_2);
 FUNC_3(&VAR_4->request_queue_lock);
}
