
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int numerator; unsigned int denominator; } ;
struct TYPE_5__ {int readbuffers; TYPE_1__ timeperframe; int capability; } ;
struct TYPE_6__ {TYPE_2__ capture; } ;
struct v4l2_streamparm {TYPE_3__ parm; } ;
struct file {int dummy; } ;
struct aspeed_video {unsigned int frame_rate; } ;


 int FUNC_0 (int ,unsigned int) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct aspeed_video*,int ,int ,int ) ;
 struct aspeed_video* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_4, void *VAR_5,
     struct v4l2_streamparm *VAR_6)
{
 unsigned int VAR_7 = 0;
 struct aspeed_video *VAR_8 = FUNC_2(VAR_4);

 VAR_6->parm.capture.capability = VAR_1;
 VAR_6->parm.capture.readbuffers = 3;

 if (VAR_6->parm.capture.timeperframe.numerator)
  VAR_7 = VAR_6->parm.capture.timeperframe.denominator /
   VAR_6->parm.capture.timeperframe.numerator;

 if (!VAR_7 || VAR_7 > VAR_0) {
  VAR_7 = 0;
  VAR_6->parm.capture.timeperframe.denominator = VAR_0;
  VAR_6->parm.capture.timeperframe.numerator = 1;
 }

 if (VAR_8->frame_rate != VAR_7) {
  VAR_8->frame_rate = VAR_7;
  FUNC_1(VAR_8, VAR_2, VAR_3,
        FUNC_0(VAR_3, VAR_7));
 }

 return 0;
}
