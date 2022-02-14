
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_fract {int numerator; int denominator; } ;
struct v4l2_captureparm {struct v4l2_fract timeperframe; } ;
struct TYPE_2__ {struct v4l2_captureparm capture; } ;
struct v4l2_streamparm {TYPE_1__ parm; } ;
struct sd {int frame_rate; } ;
struct gspca_dev {int dummy; } ;



__attribute__((used)) static void FUNC_0(struct gspca_dev *VAR_0,
        struct v4l2_streamparm *VAR_1)
{
 struct v4l2_captureparm *VAR_2 = &VAR_1->parm.capture;
 struct v4l2_fract *VAR_3 = &VAR_2->timeperframe;
 struct sd *VAR_4 = (struct sd *) VAR_0;

 VAR_3->numerator = 1;
 VAR_3->denominator = VAR_4->frame_rate;
}
