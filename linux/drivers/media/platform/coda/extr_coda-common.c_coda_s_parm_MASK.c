
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_fract {int dummy; } ;
struct TYPE_5__ {struct v4l2_fract timeperframe; int capability; } ;
struct TYPE_6__ {TYPE_2__ output; } ;
struct v4l2_streamparm {scalar_t__ type; TYPE_3__ parm; } ;
struct file {int dummy; } ;
struct TYPE_4__ {int framerate_changed; int framerate; } ;
struct coda_ctx {TYPE_1__ params; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct v4l2_fract*) ;
 int FUNC_1 (struct v4l2_fract*) ;
 struct coda_ctx* FUNC_2 (void*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_3, void *VAR_4, struct v4l2_streamparm *VAR_5)
{
 struct coda_ctx *VAR_6 = FUNC_2(VAR_4);
 struct v4l2_fract *VAR_7;

 if (VAR_5->type != VAR_1)
  return -VAR_0;

 VAR_5->parm.output.capability = VAR_2;
 VAR_7 = &VAR_5->parm.output.timeperframe;
 FUNC_0(VAR_7);
 VAR_6->params.framerate = FUNC_1(VAR_7);
 VAR_6->params.framerate_changed = 1;

 return 0;
}
