
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int numerator; int denominator; } ;
struct vs6624 {TYPE_1__ frame_rate; } ;
struct v4l2_fract {int numerator; int denominator; } ;
struct v4l2_subdev_frame_interval {struct v4l2_fract interval; } ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct vs6624* FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (struct v4l2_subdev*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_5,
       struct v4l2_subdev_frame_interval *VAR_6)
{
 struct vs6624 *VAR_7 = FUNC_0(VAR_5);
 struct v4l2_fract *VAR_8 = &VAR_6->interval;


 if (VAR_8->numerator == 0 || VAR_8->denominator == 0
  || (VAR_8->denominator > VAR_8->numerator * VAR_0)) {

  VAR_8->numerator = 1;
  VAR_8->denominator = VAR_0;
 }
 VAR_7->frame_rate.numerator = VAR_8->denominator;
 VAR_7->frame_rate.denominator = VAR_8->numerator;
 FUNC_1(VAR_5, VAR_1, 0x0);
 FUNC_1(VAR_5, VAR_4,
   VAR_7->frame_rate.numerator >> 8);
 FUNC_1(VAR_5, VAR_3,
   VAR_7->frame_rate.numerator & 0xFF);
 FUNC_1(VAR_5, VAR_2,
   VAR_7->frame_rate.denominator & 0xFF);
 return 0;
}
