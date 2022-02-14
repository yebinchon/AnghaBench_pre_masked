
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subscribed_event_ops {int (* add ) (struct v4l2_subscribed_event*,unsigned int) ;} ;
struct v4l2_subscribed_event {scalar_t__ type; unsigned int elems; struct v4l2_subscribed_event_ops const* ops; int list; struct v4l2_fh* fh; int flags; int id; TYPE_1__* events; } ;
struct v4l2_fh {int subscribe_lock; TYPE_2__* vdev; int subscribed; } ;
struct v4l2_event_subscription {scalar_t__ type; int id; int flags; } ;
struct TYPE_4__ {int fh_lock; } ;
struct TYPE_3__ {struct v4l2_subscribed_event* sev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct v4l2_subscribed_event*) ;
 int VAR_4 ;
 int FUNC_1 (struct v4l2_subscribed_event*) ;
 struct v4l2_subscribed_event* FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct v4l2_subscribed_event*,int ,unsigned int) ;
 int FUNC_9 (struct v4l2_subscribed_event*,unsigned int) ;
 struct v4l2_subscribed_event* FUNC_10 (struct v4l2_fh*,scalar_t__,int ) ;

int FUNC_11(struct v4l2_fh *VAR_5,
    const struct v4l2_event_subscription *VAR_6, unsigned VAR_7,
    const struct v4l2_subscribed_event_ops *VAR_8)
{
 struct v4l2_subscribed_event *VAR_9, *VAR_10;
 unsigned long VAR_11;
 unsigned VAR_12;
 int VAR_13 = 0;

 if (VAR_6->type == VAR_3)
  return -VAR_0;

 if (VAR_7 < 1)
  VAR_7 = 1;

 VAR_9 = FUNC_2(FUNC_8(VAR_9, VAR_4, VAR_7), VAR_2);
 if (!VAR_9)
  return -VAR_1;
 for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++)
  VAR_9->events[VAR_12].sev = VAR_9;
 VAR_9->type = VAR_6->type;
 VAR_9->id = VAR_6->id;
 VAR_9->flags = VAR_6->flags;
 VAR_9->fh = VAR_5;
 VAR_9->ops = VAR_8;
 VAR_9->elems = VAR_7;

 FUNC_4(&VAR_5->subscribe_lock);

 FUNC_6(&VAR_5->vdev->fh_lock, VAR_11);
 VAR_10 = FUNC_10(VAR_5, VAR_6->type, VAR_6->id);
 if (!VAR_10)
  FUNC_3(&VAR_9->list, &VAR_5->subscribed);
 FUNC_7(&VAR_5->vdev->fh_lock, VAR_11);

 if (VAR_10) {

  FUNC_1(VAR_9);
 } else if (VAR_9->ops && VAR_9->ops->add) {
  VAR_13 = VAR_9->ops->add(VAR_9, VAR_7);
  if (VAR_13) {
   FUNC_6(&VAR_5->vdev->fh_lock, VAR_11);
   FUNC_0(VAR_9);
   FUNC_7(&VAR_5->vdev->fh_lock, VAR_11);
   FUNC_1(VAR_9);
  }
 }

 FUNC_5(&VAR_5->subscribe_lock);

 return VAR_13;
}
