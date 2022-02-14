
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int dummy; } ;
struct file {int * private_data; } ;
struct camera_data {int v4l2_lock; scalar_t__ mmapped; int * stream_fh; int vdev; } ;


 int FUNC_0 (struct camera_data*) ;
 int FUNC_1 (struct camera_data*) ;
 int FUNC_2 (struct camera_data*) ;
 int FUNC_3 (struct camera_data*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct file*) ;
 int FUNC_7 (struct file*) ;
 struct video_device* FUNC_8 (struct file*) ;
 struct camera_data* FUNC_9 (struct video_device*) ;
 scalar_t__ FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct file *VAR_0)
{
 struct video_device *VAR_1 = FUNC_8(VAR_0);
 struct camera_data *VAR_2 = FUNC_9(VAR_1);

 FUNC_4(&VAR_2->v4l2_lock);
 if (FUNC_10(&VAR_2->vdev) && FUNC_6(VAR_0)) {
  FUNC_3(VAR_2);


  FUNC_1(VAR_2);

  FUNC_2(VAR_2);
  FUNC_0(VAR_2);
 }

 if (VAR_2->stream_fh == VAR_0->private_data) {
  VAR_2->stream_fh = ((void*)0);
  VAR_2->mmapped = 0;
 }
 FUNC_5(&VAR_2->v4l2_lock);
 return FUNC_7(VAR_0);
}
