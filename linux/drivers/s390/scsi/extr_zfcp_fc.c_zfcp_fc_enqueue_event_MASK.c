
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct zfcp_fc_event {int code; int list; int data; } ;
struct TYPE_2__ {int work; int list_lock; int list; } ;
struct zfcp_adapter {TYPE_1__ events; int work_queue; } ;
typedef enum fc_host_event_code { ____Placeholder_fc_host_event_code } fc_host_event_code ;


 int VAR_0 ;
 struct zfcp_fc_event* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct zfcp_adapter *VAR_1,
      enum fc_host_event_code VAR_2, u32 VAR_3)
{
 struct zfcp_fc_event *VAR_4;

 VAR_4 = FUNC_0(sizeof(struct zfcp_fc_event), VAR_0);
 if (!VAR_4)
  return;

 VAR_4->code = VAR_2;
 VAR_4->data = VAR_3;

 FUNC_3(&VAR_1->events.list_lock);
 FUNC_1(&VAR_4->list, &VAR_1->events.list);
 FUNC_4(&VAR_1->events.list_lock);

 FUNC_2(VAR_1->work_queue, &VAR_1->events.work);
}
