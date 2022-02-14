
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_event {int dummy; } ;
struct dvb_video_events {int eventw; int eventr; int overflow; int wait_queue; int lock; int * events; } ;
struct av7110 {struct dvb_video_events video_events; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct video_event*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct av7110 *VAR_1, struct video_event *VAR_2)
{
 struct dvb_video_events *VAR_3 = &VAR_1->video_events;
 int VAR_4;

 FUNC_1(&VAR_3->lock);

 VAR_4 = (VAR_3->eventw + 1) % VAR_0;
 if (VAR_4 == VAR_3->eventr) {
  VAR_3->overflow = 1;
  VAR_3->eventr = (VAR_3->eventr + 1) % VAR_0;
 }


 FUNC_0(&VAR_3->events[VAR_3->eventw], VAR_2, sizeof(struct video_event));
 VAR_3->eventw = VAR_4;

 FUNC_2(&VAR_3->lock);

 FUNC_3(&VAR_3->wait_queue);
}
