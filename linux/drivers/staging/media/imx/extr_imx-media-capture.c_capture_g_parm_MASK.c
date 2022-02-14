
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev_frame_interval {int interval; int pad; } ;
struct TYPE_3__ {int timeperframe; int capability; } ;
struct TYPE_4__ {TYPE_1__ capture; } ;
struct v4l2_streamparm {scalar_t__ type; TYPE_2__ parm; } ;
struct file {int dummy; } ;
struct capture_priv {int src_sd; int src_sd_pad; } ;
typedef int fi ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct v4l2_subdev_frame_interval*,int ,int) ;
 int FUNC_1 (int ,int ,int ,struct v4l2_subdev_frame_interval*) ;
 int VAR_4 ;
 struct capture_priv* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_5, void *VAR_6,
     struct v4l2_streamparm *VAR_7)
{
 struct capture_priv *VAR_8 = FUNC_2(VAR_5);
 struct v4l2_subdev_frame_interval VAR_9;
 int VAR_10;

 if (VAR_7->type != VAR_1)
  return -VAR_0;

 FUNC_0(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.pad = VAR_8->src_sd_pad;
 VAR_10 = FUNC_1(VAR_8->src_sd, VAR_4, VAR_3, &VAR_9);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_7->parm.capture.capability = VAR_2;
 VAR_7->parm.capture.timeperframe = VAR_9.interval;

 return 0;
}
