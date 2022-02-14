
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int name; } ;
struct v4l2_async_subdev {int dummy; } ;
struct v4l2_async_notifier {int dummy; } ;
struct mcam_camera {int s_mutex; struct v4l2_subdev* sensor; int vdev; } ;


 int FUNC_0 (struct mcam_camera*,char*,int ) ;
 int FUNC_1 (struct mcam_camera*,char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct mcam_camera* FUNC_4 (struct v4l2_async_notifier*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct v4l2_async_notifier *VAR_0,
 struct v4l2_subdev *VAR_1, struct v4l2_async_subdev *VAR_2)
{
 struct mcam_camera *VAR_3 = FUNC_4(VAR_0);

 FUNC_2(&VAR_3->s_mutex);
 if (VAR_3->sensor != VAR_1) {
  FUNC_1(VAR_3, "sensor %s not bound\n", VAR_1->name);
  goto out;
 }

 FUNC_5(&VAR_3->vdev);
 VAR_3->sensor = ((void*)0);
 FUNC_0(VAR_3, "sensor %s unbound\n", VAR_1->name);

out:
 FUNC_3(&VAR_3->s_mutex);
}
