
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fract {int numerator; int denominator; } ;


 int VAR_0 ;

void FUNC_0(int VAR_1, struct v4l2_fract *VAR_2)
{
 if (VAR_1 & VAR_0) {
  VAR_2->numerator = 1001;
  VAR_2->denominator = 30000;
 } else {
  VAR_2->numerator = 1;
  VAR_2->denominator = 25;
 }
}
