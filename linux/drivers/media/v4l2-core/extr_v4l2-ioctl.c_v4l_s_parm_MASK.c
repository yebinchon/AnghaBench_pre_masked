
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int capturemode; scalar_t__ extendedmode; int reserved; } ;
struct TYPE_4__ {int outputmode; scalar_t__ extendedmode; int reserved; } ;
struct TYPE_6__ {TYPE_2__ capture; TYPE_1__ output; } ;
struct v4l2_streamparm {TYPE_3__ parm; int type; } ;
struct v4l2_ioctl_ops {int (* vidioc_s_parm ) (struct file*,void*,struct v4l2_streamparm*) ;} ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct file*,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct file*,void*,struct v4l2_streamparm*) ;

__attribute__((used)) static int FUNC_4(const struct v4l2_ioctl_ops *VAR_1,
    struct file *VAR_2, void *VAR_3, void *VAR_4)
{
 struct v4l2_streamparm *VAR_5 = VAR_4;
 int VAR_6 = FUNC_1(VAR_2, VAR_5->type);

 if (VAR_6)
  return VAR_6;


 if (FUNC_0(VAR_5->type)) {
  FUNC_2(VAR_5->parm.output.reserved, 0,
         sizeof(VAR_5->parm.output.reserved));
  VAR_5->parm.output.extendedmode = 0;
  VAR_5->parm.output.outputmode &= VAR_0;
 } else {
  FUNC_2(VAR_5->parm.capture.reserved, 0,
         sizeof(VAR_5->parm.capture.reserved));
  VAR_5->parm.capture.extendedmode = 0;
  VAR_5->parm.capture.capturemode &= VAR_0;
 }
 return VAR_1->vidioc_s_parm(VAR_2, VAR_3, VAR_5);
}
