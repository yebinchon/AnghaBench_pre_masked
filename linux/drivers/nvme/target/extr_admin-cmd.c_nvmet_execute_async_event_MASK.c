
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvmet_req {TYPE_1__* sq; } ;
struct nvmet_ctrl {scalar_t__ nr_async_event_cmds; int async_event_work; int lock; struct nvmet_req** async_event_cmds; } ;
struct TYPE_2__ {struct nvmet_ctrl* ctrl; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nvmet_req*,int) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct nvmet_req *VAR_3)
{
 struct nvmet_ctrl *VAR_4 = VAR_3->sq->ctrl;

 FUNC_0(&VAR_4->lock);
 if (VAR_4->nr_async_event_cmds >= VAR_0) {
  FUNC_1(&VAR_4->lock);
  FUNC_2(VAR_3, VAR_1 | VAR_2);
  return;
 }
 VAR_4->async_event_cmds[VAR_4->nr_async_event_cmds++] = VAR_3;
 FUNC_1(&VAR_4->lock);

 FUNC_3(&VAR_4->async_event_work);
}
