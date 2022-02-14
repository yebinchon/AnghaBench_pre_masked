
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subscribed_event {unsigned int in_use; int list; TYPE_1__* events; struct v4l2_fh* fh; } ;
struct v4l2_fh {int navailable; TYPE_2__* vdev; int subscribe_lock; } ;
struct TYPE_4__ {int fh_lock; } ;
struct TYPE_3__ {int list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 size_t FUNC_3 (struct v4l2_subscribed_event*,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct v4l2_subscribed_event *VAR_0)
{
 struct v4l2_fh *VAR_1 = VAR_0->fh;
 unsigned int VAR_2;

 FUNC_2(&VAR_1->subscribe_lock);
 FUNC_0(&VAR_1->vdev->fh_lock);


 for (VAR_2 = 0; VAR_2 < VAR_0->in_use; VAR_2++) {
  FUNC_1(&VAR_0->events[FUNC_3(VAR_0, VAR_2)].list);
  VAR_1->navailable--;
 }
 FUNC_1(&VAR_0->list);
}
