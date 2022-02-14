
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct venus_inst {int timeperframe; } ;
struct TYPE_3__ {int timeperframe; int capability; } ;
struct TYPE_4__ {TYPE_1__ output; } ;
struct v4l2_streamparm {scalar_t__ type; TYPE_2__ parm; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct venus_inst* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_4, void *VAR_5, struct v4l2_streamparm *VAR_6)
{
 struct venus_inst *VAR_7 = FUNC_0(VAR_4);

 if (VAR_6->type != VAR_1 &&
     VAR_6->type != VAR_2)
  return -VAR_0;

 VAR_6->parm.output.capability |= VAR_3;
 VAR_6->parm.output.timeperframe = VAR_7->timeperframe;

 return 0;
}
