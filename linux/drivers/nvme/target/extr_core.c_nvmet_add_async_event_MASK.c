
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct nvmet_ctrl {int async_event_work; int lock; int async_events; } ;
struct nvmet_async_event {int entry; void* log_page; void* event_info; void* event_type; } ;


 int VAR_0 ;
 struct nvmet_async_event* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct nvmet_ctrl *VAR_1, u8 VAR_2,
  u8 VAR_3, u8 VAR_4)
{
 struct nvmet_async_event *VAR_5;

 VAR_5 = FUNC_0(sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  return;

 VAR_5->event_type = VAR_2;
 VAR_5->event_info = VAR_3;
 VAR_5->log_page = VAR_4;

 FUNC_2(&VAR_1->lock);
 FUNC_1(&VAR_5->entry, &VAR_1->async_events);
 FUNC_3(&VAR_1->lock);

 FUNC_4(&VAR_1->async_event_work);
}
