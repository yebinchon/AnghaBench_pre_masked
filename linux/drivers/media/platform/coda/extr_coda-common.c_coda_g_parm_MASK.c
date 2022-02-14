
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_fract {int denominator; int numerator; } ;
struct TYPE_5__ {struct v4l2_fract timeperframe; int capability; } ;
struct TYPE_6__ {TYPE_2__ output; } ;
struct v4l2_streamparm {scalar_t__ type; TYPE_3__ parm; } ;
struct file {int dummy; } ;
struct TYPE_4__ {int framerate; } ;
struct coda_ctx {TYPE_1__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct coda_ctx* FUNC_0 (void*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_5, void *VAR_6, struct v4l2_streamparm *VAR_7)
{
 struct coda_ctx *VAR_8 = FUNC_0(VAR_6);
 struct v4l2_fract *VAR_9;

 if (VAR_7->type != VAR_3)
  return -VAR_2;

 VAR_7->parm.output.capability = VAR_4;
 VAR_9 = &VAR_7->parm.output.timeperframe;
 VAR_9->denominator = VAR_8->params.framerate & VAR_1;
 VAR_9->numerator = 1 + (VAR_8->params.framerate >>
         VAR_0);

 return 0;
}
