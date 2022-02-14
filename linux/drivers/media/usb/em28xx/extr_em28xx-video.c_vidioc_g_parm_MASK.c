
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev_frame_interval {int interval; int member_0; } ;
struct TYPE_3__ {int timeperframe; int capability; int readbuffers; } ;
struct TYPE_4__ {TYPE_1__ capture; } ;
struct v4l2_streamparm {scalar_t__ type; TYPE_2__ parm; } ;
struct file {int dummy; } ;
struct em28xx_v4l2 {int norm; int v4l2_dev; } ;
struct em28xx {scalar_t__ is_webcam; struct em28xx_v4l2* v4l2; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,int ,int ,struct v4l2_subdev_frame_interval*) ;
 int FUNC_1 (int ,int *) ;
 int VAR_6 ;
 struct em28xx* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_7, void *VAR_8,
    struct v4l2_streamparm *VAR_9)
{
 struct v4l2_subdev_frame_interval VAR_10 = { 0 };
 struct em28xx *VAR_11 = FUNC_2(VAR_7);
 struct em28xx_v4l2 *VAR_12 = VAR_11->v4l2;
 int VAR_13 = 0;

 if (VAR_9->type != VAR_2 &&
     VAR_9->type != VAR_3)
  return -VAR_0;

 VAR_9->parm.capture.readbuffers = VAR_1;
 VAR_9->parm.capture.capability = VAR_4;
 if (VAR_11->is_webcam) {
  VAR_13 = FUNC_0(&VAR_12->v4l2_dev, 0,
      VAR_6, VAR_5, &VAR_10);
  if (!VAR_13)
   VAR_9->parm.capture.timeperframe = VAR_10.interval;
 } else {
  FUNC_1(VAR_12->norm,
         &VAR_9->parm.capture.timeperframe);
 }

 return VAR_13;
}
