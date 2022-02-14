
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int * valid_ioctls; int flags; int ctrl_handler; } ;
struct v4l2_fh {int sequence; int subscribe_lock; int subscribed; int available; int wait; int prio; struct video_device* vdev; int list; int ctrl_handler; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;

void FUNC_5(struct v4l2_fh *VAR_4, struct video_device *VAR_5)
{
 VAR_4->vdev = VAR_5;

 VAR_4->ctrl_handler = VAR_5->ctrl_handler;
 FUNC_0(&VAR_4->list);
 FUNC_4(VAR_0, &VAR_4->vdev->flags);





 FUNC_4(FUNC_1(VAR_2), VAR_5->valid_ioctls);
 FUNC_4(FUNC_1(VAR_3), VAR_5->valid_ioctls);
 VAR_4->prio = VAR_1;
 FUNC_2(&VAR_4->wait);
 FUNC_0(&VAR_4->available);
 FUNC_0(&VAR_4->subscribed);
 VAR_4->sequence = -1;
 FUNC_3(&VAR_4->subscribe_lock);
}
