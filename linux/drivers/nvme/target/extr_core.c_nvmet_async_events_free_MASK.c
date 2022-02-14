
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmet_req {int dummy; } ;
struct nvmet_ctrl {size_t nr_async_event_cmds; int lock; struct nvmet_req** async_event_cmds; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nvmet_req*,int) ;

__attribute__((used)) static void FUNC_3(struct nvmet_ctrl *VAR_2)
{
 struct nvmet_req *VAR_3;

 while (1) {
  FUNC_0(&VAR_2->lock);
  if (!VAR_2->nr_async_event_cmds) {
   FUNC_1(&VAR_2->lock);
   return;
  }

  VAR_3 = VAR_2->async_event_cmds[--VAR_2->nr_async_event_cmds];
  FUNC_1(&VAR_2->lock);
  FUNC_2(VAR_3, VAR_1 | VAR_0);
 }
}
