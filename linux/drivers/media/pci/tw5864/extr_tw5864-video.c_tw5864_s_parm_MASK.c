
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_fract {int numerator; int denominator; } ;
struct TYPE_3__ {struct v4l2_fract timeperframe; } ;
struct TYPE_4__ {TYPE_1__ capture; } ;
struct v4l2_streamparm {TYPE_2__ parm; } ;
struct tw5864_input {int frame_interval; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct tw5864_input*) ;
 int FUNC_1 (struct tw5864_input*,struct v4l2_fract*) ;
 int FUNC_2 (struct file*,void*,struct v4l2_streamparm*) ;
 struct tw5864_input* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_0, void *VAR_1,
    struct v4l2_streamparm *VAR_2)
{
 struct tw5864_input *VAR_3 = FUNC_3(VAR_0);
 struct v4l2_fract *VAR_4 = &VAR_2->parm.capture.timeperframe;
 struct v4l2_fract VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_3, &VAR_5);
 if (VAR_6)
  return VAR_6;

 if (!VAR_4->numerator || !VAR_4->denominator) {
  VAR_4->numerator = VAR_5.numerator * VAR_3->frame_interval;
  VAR_4->denominator = VAR_5.denominator;
 } else if (VAR_4->denominator != VAR_5.denominator) {
  VAR_4->numerator = VAR_4->numerator * VAR_5.denominator /
   VAR_4->denominator;
  VAR_4->denominator = VAR_5.denominator;
 }

 VAR_3->frame_interval = VAR_4->numerator / VAR_5.numerator;
 if (VAR_3->frame_interval < 1)
  VAR_3->frame_interval = 1;
 FUNC_0(VAR_3);
 return FUNC_2(VAR_0, VAR_1, VAR_2);
}
