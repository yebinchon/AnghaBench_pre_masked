
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct v4l2_subscribed_event {int in_use; int elems; int first; struct v4l2_kevent* events; TYPE_1__* ops; } ;
struct TYPE_6__ {scalar_t__ sequence; int id; int u; int type; } ;
struct v4l2_kevent {int list; TYPE_2__ event; int ts; } ;
struct v4l2_fh {int wait; int navailable; int available; scalar_t__ sequence; } ;
struct v4l2_event {int id; int u; int type; } ;
struct TYPE_5__ {int (* merge ) (TYPE_2__*,TYPE_2__*) ;int (* replace ) (TYPE_2__*,struct v4l2_event const*) ;} ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct v4l2_subscribed_event*,int) ;
 int FUNC_3 (TYPE_2__*,struct v4l2_event const*) ;
 int FUNC_4 (TYPE_2__*,TYPE_2__*) ;
 struct v4l2_subscribed_event* FUNC_5 (struct v4l2_fh*,int ,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct v4l2_fh *VAR_0,
      const struct v4l2_event *VAR_1, u64 VAR_2)
{
 struct v4l2_subscribed_event *VAR_3;
 struct v4l2_kevent *VAR_4;
 bool VAR_5 = 1;


 VAR_3 = FUNC_5(VAR_0, VAR_1->type, VAR_1->id);
 if (VAR_3 == ((void*)0))
  return;


 VAR_0->sequence++;


 if (VAR_3->in_use == VAR_3->elems) {

  VAR_4 = VAR_3->events + FUNC_2(VAR_3, 0);
  FUNC_1(&VAR_4->list);
  VAR_3->in_use--;
  VAR_3->first = FUNC_2(VAR_3, 1);
  VAR_0->navailable--;
  if (VAR_3->elems == 1) {
   if (VAR_3->ops && VAR_3->ops->replace) {
    VAR_3->ops->replace(&VAR_4->event, VAR_1);
    VAR_5 = 0;
   }
  } else if (VAR_3->ops && VAR_3->ops->merge) {
   struct v4l2_kevent *VAR_6 =
    VAR_3->events + FUNC_2(VAR_3, 0);
   VAR_3->ops->merge(&VAR_4->event, &VAR_6->event);
  }
 }


 VAR_4 = VAR_3->events + FUNC_2(VAR_3, VAR_3->in_use);
 VAR_4->event.type = VAR_1->type;
 if (VAR_5)
  VAR_4->event.u = VAR_1->u;
 VAR_4->event.id = VAR_1->id;
 VAR_4->ts = VAR_2;
 VAR_4->event.sequence = VAR_0->sequence;
 VAR_3->in_use++;
 FUNC_0(&VAR_4->list, &VAR_0->available);

 VAR_0->navailable++;

 FUNC_6(&VAR_0->wait);
}
