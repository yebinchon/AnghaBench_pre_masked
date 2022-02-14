
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int denominator; } ;
struct TYPE_5__ {TYPE_1__ timeperframe; } ;
struct TYPE_6__ {TYPE_2__ output; } ;
struct v4l2_streamparm {scalar_t__ type; TYPE_3__ parm; } ;
struct isp_video_fh {TYPE_1__ timeperframe; } ;
struct isp_video {scalar_t__ type; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct isp_video_fh* FUNC_0 (void*) ;
 struct isp_video* FUNC_1 (struct file*) ;

__attribute__((used)) static int
FUNC_2(struct file *VAR_2, void *VAR_3, struct v4l2_streamparm *VAR_4)
{
 struct isp_video_fh *VAR_5 = FUNC_0(VAR_3);
 struct isp_video *VAR_6 = FUNC_1(VAR_2);

 if (VAR_6->type != VAR_1 ||
     VAR_6->type != VAR_4->type)
  return -VAR_0;

 if (VAR_4->parm.output.timeperframe.denominator == 0)
  VAR_4->parm.output.timeperframe.denominator = 1;

 VAR_5->timeperframe = VAR_4->parm.output.timeperframe;

 return 0;
}
