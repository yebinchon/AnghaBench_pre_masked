
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct TYPE_3__ {int readbuffers; int timeperframe; } ;
struct TYPE_4__ {TYPE_1__ capture; } ;
struct v4l2_streamparm {scalar_t__ type; TYPE_2__ parm; } ;
struct v4l2_ioctl_ops {int (* vidioc_g_parm ) (struct file*,void*,struct v4l2_streamparm*) ;int (* vidioc_g_std ) (struct file*,void*,int *) ;} ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct file*,scalar_t__) ;
 int FUNC_1 (struct file*,void*,struct v4l2_streamparm*) ;
 int FUNC_2 (struct file*,void*,int *) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(const struct v4l2_ioctl_ops *VAR_3,
    struct file *VAR_4, void *VAR_5, void *VAR_6)
{
 struct v4l2_streamparm *VAR_7 = VAR_6;
 v4l2_std_id VAR_8;
 int VAR_9 = FUNC_0(VAR_4, VAR_7->type);

 if (VAR_9)
  return VAR_9;
 if (VAR_3->vidioc_g_parm)
  return VAR_3->vidioc_g_parm(VAR_4, VAR_5, VAR_7);
 if (VAR_7->type != VAR_1 &&
     VAR_7->type != VAR_2)
  return -VAR_0;
 VAR_7->parm.capture.readbuffers = 2;
 VAR_9 = VAR_3->vidioc_g_std(VAR_4, VAR_5, &VAR_8);
 if (VAR_9 == 0)
  FUNC_3(VAR_8, &VAR_7->parm.capture.timeperframe);
 return VAR_9;
}
