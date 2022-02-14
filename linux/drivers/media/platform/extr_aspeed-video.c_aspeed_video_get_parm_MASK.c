
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int numerator; scalar_t__ denominator; } ;
struct TYPE_6__ {int readbuffers; TYPE_1__ timeperframe; int capability; } ;
struct TYPE_5__ {TYPE_3__ capture; } ;
struct v4l2_streamparm {TYPE_2__ parm; } ;
struct file {int dummy; } ;
struct aspeed_video {scalar_t__ frame_rate; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct aspeed_video* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, void *VAR_3,
     struct v4l2_streamparm *VAR_4)
{
 struct aspeed_video *VAR_5 = FUNC_0(VAR_2);

 VAR_4->parm.capture.capability = VAR_1;
 VAR_4->parm.capture.readbuffers = 3;
 VAR_4->parm.capture.timeperframe.numerator = 1;
 if (!VAR_5->frame_rate)
  VAR_4->parm.capture.timeperframe.denominator = VAR_0;
 else
  VAR_4->parm.capture.timeperframe.denominator = VAR_5->frame_rate;

 return 0;
}
