
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfe_device {TYPE_1__* line; int stream_lock; int power_lock; } ;
struct v4l2_subdev {int entity; } ;
struct camss_video {int dummy; } ;
struct TYPE_2__ {struct camss_video video_out; struct v4l2_subdev subdev; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct camss_video*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct v4l2_subdev*) ;

void FUNC_5(struct vfe_device *VAR_0)
{
 int VAR_1;

 FUNC_3(&VAR_0->power_lock);
 FUNC_3(&VAR_0->stream_lock);

 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0->line); VAR_1++) {
  struct v4l2_subdev *VAR_2 = &VAR_0->line[VAR_1].subdev;
  struct camss_video *VAR_3 = &VAR_0->line[VAR_1].video_out;

  FUNC_2(VAR_3);
  FUNC_4(VAR_2);
  FUNC_1(&VAR_2->entity);
 }
}
