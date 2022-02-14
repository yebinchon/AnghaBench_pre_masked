
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int denominator; int numerator; } ;
struct TYPE_6__ {TYPE_1__ timeperframe; int capability; } ;
struct TYPE_7__ {TYPE_2__ output; } ;
struct v4l2_streamparm {scalar_t__ type; TYPE_3__ parm; } ;
struct v4l2_fract {int denominator; int numerator; } ;
struct TYPE_8__ {struct v4l2_fract time_per_frame; } ;
struct hva_ctx {TYPE_4__ ctrls; } ;
struct file {int private_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct hva_ctx* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_3, void *VAR_4, struct v4l2_streamparm *VAR_5)
{
 struct hva_ctx *VAR_6 = FUNC_0(VAR_3->private_data);
 struct v4l2_fract *VAR_7 = &VAR_6->ctrls.time_per_frame;

 if (VAR_5->type != VAR_1)
  return -VAR_0;

 VAR_5->parm.output.capability = VAR_2;
 VAR_5->parm.output.timeperframe.numerator = VAR_7->numerator;
 VAR_5->parm.output.timeperframe.denominator =
  VAR_7->denominator;

 return 0;
}
