
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wsm_buf {int dummy; } ;
struct TYPE_2__ {void* data; void* id; } ;
struct cw1200_wsm_event {int link; TYPE_1__ evt; } ;
struct cw1200_common {scalar_t__ mode; int event_handler; int workqueue; int event_queue_lock; int event_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_0 (struct wsm_buf*) ;
 int FUNC_1 (struct cw1200_wsm_event*) ;
 struct cw1200_wsm_event* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,void*,void*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct cw1200_common *VAR_4, struct wsm_buf *VAR_5)
{
 int VAR_6;
 struct cw1200_wsm_event *VAR_7;

 if (VAR_4->mode == VAR_3) {

  return 0;
 }

 VAR_7 = FUNC_2(sizeof(struct cw1200_wsm_event), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->evt.id = FUNC_0(VAR_5);
 VAR_7->evt.data = FUNC_0(VAR_5);

 FUNC_5("[WSM] Event: %d(%d)\n",
   VAR_7->evt.id, VAR_7->evt.data);

 FUNC_7(&VAR_4->event_queue_lock);
 VAR_6 = FUNC_4(&VAR_4->event_queue);
 FUNC_3(&VAR_7->link, &VAR_4->event_queue);
 FUNC_8(&VAR_4->event_queue_lock);

 if (VAR_6)
  FUNC_6(VAR_4->workqueue, &VAR_4->event_handler);

 return 0;

underflow:
 FUNC_1(VAR_7);
 return -VAR_0;
}
