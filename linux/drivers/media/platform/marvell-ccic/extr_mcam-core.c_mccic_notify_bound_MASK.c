
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_subdev {int name; } ;
struct v4l2_async_subdev {int dummy; } ;
struct v4l2_async_notifier {int dummy; } ;
struct TYPE_4__ {int * queue; int * lock; int * v4l2_dev; } ;
struct mcam_camera {int s_mutex; struct v4l2_subdev* sensor; TYPE_1__ vdev; int vb_queue; int v4l2_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mcam_camera*,char*,int ) ;
 int FUNC_1 (struct mcam_camera*,char*) ;
 int FUNC_2 (struct mcam_camera*) ;
 int FUNC_3 (struct mcam_camera*) ;
 TYPE_1__ VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct mcam_camera* FUNC_6 (struct v4l2_async_notifier*) ;
 int FUNC_7 (struct v4l2_subdev*,struct mcam_camera*) ;
 int FUNC_8 (TYPE_1__*,int ,int) ;
 int FUNC_9 (TYPE_1__*,struct mcam_camera*) ;

__attribute__((used)) static int FUNC_10(struct v4l2_async_notifier *VAR_3,
 struct v4l2_subdev *VAR_4, struct v4l2_async_subdev *VAR_5)
{
 struct mcam_camera *VAR_6 = FUNC_6(VAR_3);
 int VAR_7;

 FUNC_4(&VAR_6->s_mutex);
 if (VAR_6->sensor) {
  FUNC_1(VAR_6, "sensor already bound\n");
  VAR_7 = -VAR_0;
  goto out;
 }

 FUNC_7(VAR_4, VAR_6);
 VAR_6->sensor = VAR_4;

 VAR_7 = FUNC_2(VAR_6);
 if (VAR_7) {
  VAR_6->sensor = ((void*)0);
  goto out;
 }

 VAR_7 = FUNC_3(VAR_6);
 if (VAR_7) {
  VAR_6->sensor = ((void*)0);
  goto out;
 }

 VAR_6->vdev = VAR_2;
 VAR_6->vdev.v4l2_dev = &VAR_6->v4l2_dev;
 VAR_6->vdev.lock = &VAR_6->s_mutex;
 VAR_6->vdev.queue = &VAR_6->vb_queue;
 FUNC_9(&VAR_6->vdev, VAR_6);
 VAR_7 = FUNC_8(&VAR_6->vdev, VAR_1, -1);
 if (VAR_7) {
  VAR_6->sensor = ((void*)0);
  goto out;
 }

 FUNC_0(VAR_6, "sensor %s bound\n", VAR_4->name);
out:
 FUNC_5(&VAR_6->s_mutex);
 return VAR_7;
}
