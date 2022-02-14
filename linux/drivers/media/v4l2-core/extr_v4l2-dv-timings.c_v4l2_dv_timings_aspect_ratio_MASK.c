
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_fract {int member_0; int member_1; int numerator; int denominator; } ;
struct TYPE_3__ {int denominator; int numerator; } ;
struct TYPE_4__ {int flags; int width; int height; TYPE_1__ picture_aspect; } ;
struct v4l2_dv_timings {scalar_t__ type; TYPE_2__ bt; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,int,int,unsigned long*,unsigned long*) ;

struct v4l2_fract FUNC_1(const struct v4l2_dv_timings *VAR_2)
{
 struct v4l2_fract VAR_3 = { 1, 1 };
 unsigned long VAR_4, VAR_5;

 if (VAR_2->type != VAR_0)
  return VAR_3;
 if (!(VAR_2->bt.flags & VAR_1))
  return VAR_3;

 VAR_3.numerator = VAR_2->bt.width * VAR_2->bt.picture_aspect.denominator;
 VAR_3.denominator = VAR_2->bt.height * VAR_2->bt.picture_aspect.numerator;

 FUNC_0(VAR_3.numerator, VAR_3.denominator,
        VAR_3.numerator, VAR_3.denominator, &VAR_4, &VAR_5);
 VAR_3.numerator = VAR_4;
 VAR_3.denominator = VAR_5;
 return VAR_3;
}
