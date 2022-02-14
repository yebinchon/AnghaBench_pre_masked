
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_subdev_frame_interval {int interval; int member_1; int member_0; } ;
struct TYPE_5__ {int timeperframe; int capability; int readbuffers; } ;
struct TYPE_6__ {TYPE_2__ capture; } ;
struct v4l2_streamparm {scalar_t__ type; TYPE_3__ parm; } ;
struct file {int dummy; } ;
struct em28xx {TYPE_1__* v4l2; int is_webcam; } ;
struct TYPE_4__ {int v4l2_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_3__*,int ,int) ;
 int VAR_6 ;
 int FUNC_1 (int *,int ,int ,int ,struct v4l2_subdev_frame_interval*) ;
 int VAR_7 ;
 struct em28xx* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_8, void *VAR_9,
    struct v4l2_streamparm *VAR_10)
{
 struct em28xx *VAR_11 = FUNC_2(VAR_8);
 struct v4l2_subdev_frame_interval VAR_12 = {
  0,
  VAR_10->parm.capture.timeperframe
 };
 int VAR_13 = 0;

 if (!VAR_11->is_webcam)
  return -VAR_2;

 if (VAR_10->type != VAR_3 &&
     VAR_10->type != VAR_4)
  return -VAR_0;

 FUNC_0(&VAR_10->parm, 0, sizeof(VAR_10->parm));
 VAR_10->parm.capture.readbuffers = VAR_1;
 VAR_10->parm.capture.capability = VAR_5;
 VAR_13 = FUNC_1(&VAR_11->v4l2->v4l2_dev, 0,
     VAR_7, VAR_6, &VAR_12);
 if (!VAR_13)
  VAR_10->parm.capture.timeperframe = VAR_12.interval;
 return VAR_13;
}
