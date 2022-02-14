
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ denominator; scalar_t__ numerator; } ;
struct TYPE_7__ {TYPE_2__ timeperframe; int capability; } ;
struct TYPE_8__ {TYPE_3__ output; } ;
struct v4l2_streamparm {scalar_t__ type; TYPE_4__ parm; } ;
struct v4l2_fract {scalar_t__ denominator; scalar_t__ numerator; } ;
struct TYPE_5__ {struct v4l2_fract time_per_frame; } ;
struct hva_ctx {TYPE_1__ ctrls; } ;
struct file {int private_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct hva_ctx* FUNC_0 (int ) ;
 int FUNC_1 (struct file*,void*,struct v4l2_streamparm*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, void *VAR_4, struct v4l2_streamparm *VAR_5)
{
 struct hva_ctx *VAR_6 = FUNC_0(VAR_3->private_data);
 struct v4l2_fract *VAR_7 = &VAR_6->ctrls.time_per_frame;

 if (VAR_5->type != VAR_1)
  return -VAR_0;

 if (!VAR_5->parm.output.timeperframe.numerator ||
     !VAR_5->parm.output.timeperframe.denominator)
  return FUNC_1(VAR_3, VAR_4, VAR_5);

 VAR_5->parm.output.capability = VAR_2;
 VAR_7->numerator = VAR_5->parm.output.timeperframe.numerator;
 VAR_7->denominator =
  VAR_5->parm.output.timeperframe.denominator;

 return 0;
}
