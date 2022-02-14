
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_fract {int numerator; int denominator; } ;
struct v4l2_captureparm {struct v4l2_fract timeperframe; } ;
struct TYPE_2__ {struct v4l2_captureparm capture; } ;
struct v4l2_streamparm {TYPE_1__ parm; } ;
struct sd {int framerate; } ;
struct gspca_dev {int exposure; scalar_t__ streaming; } ;


 int VAR_0 ;
 int FUNC_0 (struct gspca_dev*) ;
 int* VAR_1 ;
 int* VAR_2 ;
 int FUNC_1 (struct gspca_dev*,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct gspca_dev *VAR_3,
        struct v4l2_streamparm *VAR_4)
{
 struct sd *VAR_5 = (struct sd *) VAR_3;
 struct v4l2_captureparm *VAR_6 = &VAR_4->parm.capture;
 struct v4l2_fract *VAR_7 = &VAR_6->timeperframe;
 int VAR_8, VAR_9;

 if (VAR_7->numerator == 0 || VAR_7->denominator == 0)
  VAR_5->framerate = VAR_0;
 else
  VAR_5->framerate = VAR_7->denominator / VAR_7->numerator;

 if (VAR_3->streaming)
  FUNC_1(VAR_3, FUNC_2(VAR_3->exposure));


 VAR_9 = FUNC_0(VAR_3);
 if (VAR_9 & 0x80)
  VAR_8 = VAR_2[7 - (VAR_9 & 0x07)];
 else
  VAR_8 = VAR_1[6 - VAR_9];
 VAR_7->numerator = 1;
 VAR_7->denominator = VAR_8;
}
