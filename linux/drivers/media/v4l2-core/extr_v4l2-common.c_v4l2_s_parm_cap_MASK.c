
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct video_device {int device_caps; } ;
struct v4l2_subdev_frame_interval {int interval; } ;
struct v4l2_subdev {int dummy; } ;
struct TYPE_3__ {int readbuffers; int timeperframe; int capability; } ;
struct TYPE_4__ {TYPE_1__ capture; } ;
struct v4l2_streamparm {scalar_t__ type; TYPE_2__ parm; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 int VAR_6 ;
 int FUNC_1 (struct v4l2_subdev*,int ,int ,struct v4l2_subdev_frame_interval*) ;
 scalar_t__ FUNC_2 (struct v4l2_subdev*,int ,int ) ;
 int VAR_7 ;

int FUNC_3(struct video_device *VAR_8,
      struct v4l2_subdev *VAR_9, struct v4l2_streamparm *VAR_10)
{
 struct v4l2_subdev_frame_interval VAR_11 = {
  .interval = VAR_10->parm.capture.timeperframe
 };
 int VAR_12;

 if (VAR_10->type != VAR_1 &&
     VAR_10->type != VAR_2)
  return -VAR_0;

 FUNC_0(&VAR_10->parm, 0, sizeof(VAR_10->parm));
 if (VAR_8->device_caps & VAR_3)
  VAR_10->parm.capture.readbuffers = 2;
 else
  VAR_10->parm.capture.readbuffers = 0;

 if (FUNC_2(VAR_9, VAR_7, VAR_5))
  VAR_10->parm.capture.capability = VAR_4;
 VAR_12 = FUNC_1(VAR_9, VAR_7, VAR_6, &VAR_11);
 if (!VAR_12)
  VAR_10->parm.capture.timeperframe = VAR_11.interval;
 return VAR_12;
}
