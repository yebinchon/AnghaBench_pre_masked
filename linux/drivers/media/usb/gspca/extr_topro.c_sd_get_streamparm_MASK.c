
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_fract {int numerator; int denominator; } ;
struct v4l2_captureparm {struct v4l2_fract timeperframe; } ;
struct TYPE_2__ {struct v4l2_captureparm capture; } ;
struct v4l2_streamparm {TYPE_1__ parm; } ;
struct sd {scalar_t__ bridge; } ;
struct gspca_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct gspca_dev*) ;
 int* VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_3,
        struct v4l2_streamparm *VAR_4)
{
 struct sd *VAR_5 = (struct sd *) VAR_3;
 struct v4l2_captureparm *VAR_6 = &VAR_4->parm.capture;
 struct v4l2_fract *VAR_7 = &VAR_6->timeperframe;
 int VAR_8, VAR_9;

 VAR_7->numerator = 1;
 VAR_9 = FUNC_0(VAR_3);
 if (VAR_9 & 0x80) {
  if (VAR_5->bridge == VAR_0)
   VAR_8 = VAR_1[6 - (VAR_9 & 0x07)];
  else
   VAR_8 = VAR_2[7 - (VAR_9 & 0x07)];
 } else {
  VAR_8 = VAR_1[6 - VAR_9];
 }
 VAR_7->denominator = VAR_8;
}
