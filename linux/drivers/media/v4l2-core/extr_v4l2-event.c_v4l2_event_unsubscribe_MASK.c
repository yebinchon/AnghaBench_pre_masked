
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subscribed_event {TYPE_2__* ops; } ;
struct v4l2_fh {int subscribe_lock; TYPE_1__* vdev; } ;
struct v4l2_event_subscription {scalar_t__ type; int id; } ;
struct TYPE_4__ {int (* del ) (struct v4l2_subscribed_event*) ;} ;
struct TYPE_3__ {int fh_lock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct v4l2_subscribed_event*) ;
 int FUNC_1 (struct v4l2_subscribed_event*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct v4l2_subscribed_event*) ;
 struct v4l2_subscribed_event* FUNC_7 (struct v4l2_fh*,scalar_t__,int ) ;
 int FUNC_8 (struct v4l2_fh*) ;

int FUNC_9(struct v4l2_fh *VAR_1,
      const struct v4l2_event_subscription *VAR_2)
{
 struct v4l2_subscribed_event *VAR_3;
 unsigned long VAR_4;

 if (VAR_2->type == VAR_0) {
  FUNC_8(VAR_1);
  return 0;
 }

 FUNC_2(&VAR_1->subscribe_lock);

 FUNC_4(&VAR_1->vdev->fh_lock, VAR_4);

 VAR_3 = FUNC_7(VAR_1, VAR_2->type, VAR_2->id);
 if (VAR_3 != ((void*)0))
  FUNC_0(VAR_3);

 FUNC_5(&VAR_1->vdev->fh_lock, VAR_4);

 if (VAR_3 && VAR_3->ops && VAR_3->ops->del)
  VAR_3->ops->del(VAR_3);

 FUNC_3(&VAR_1->subscribe_lock);

 FUNC_1(VAR_3);

 return 0;
}
