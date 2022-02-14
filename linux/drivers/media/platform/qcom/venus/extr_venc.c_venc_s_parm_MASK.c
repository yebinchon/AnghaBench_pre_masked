
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct v4l2_fract {int denominator; int numerator; } ;
struct venus_inst {int fps; struct v4l2_fract timeperframe; } ;
struct v4l2_outputparm {int capability; int reserved; struct v4l2_fract timeperframe; } ;
struct TYPE_2__ {struct v4l2_outputparm output; } ;
struct v4l2_streamparm {scalar_t__ type; TYPE_1__ parm; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int ,int) ;
 struct venus_inst* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_5, void *VAR_6, struct v4l2_streamparm *VAR_7)
{
 struct venus_inst *VAR_8 = FUNC_2(VAR_5);
 struct v4l2_outputparm *VAR_9 = &VAR_7->parm.output;
 struct v4l2_fract *VAR_10 = &VAR_9->timeperframe;
 u64 VAR_11, VAR_12;

 if (VAR_7->type != VAR_2 &&
     VAR_7->type != VAR_3)
  return -VAR_0;

 FUNC_1(VAR_9->reserved, 0, sizeof(VAR_9->reserved));

 if (!VAR_10->denominator)
  VAR_10->denominator = VAR_8->timeperframe.denominator;
 if (!VAR_10->numerator)
  VAR_10->numerator = VAR_8->timeperframe.numerator;

 VAR_9->capability = VAR_4;

 VAR_11 = VAR_10->numerator * (u64)VAR_1;
 FUNC_0(VAR_11, VAR_10->denominator);

 if (!VAR_11)
  return -VAR_0;

 VAR_12 = (u64)VAR_1;
 FUNC_0(VAR_12, VAR_11);

 VAR_8->timeperframe = *VAR_10;
 VAR_8->fps = VAR_12;

 return 0;
}
