
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_fract {int member_0; int member_1; int numerator; int denominator; } ;


 int FUNC_0 (int,int) ;

struct v4l2_fract FUNC_1(u8 VAR_0, u8 VAR_1)
{
 struct v4l2_fract VAR_2 = { 16, 9 };
 u8 VAR_3;


 if (!VAR_0 && !VAR_1)
  return VAR_2;

 if (VAR_0 && VAR_1) {
  VAR_2.numerator = VAR_0;
  VAR_2.denominator = VAR_1;
  return VAR_2;
 }


 VAR_3 = VAR_0 | VAR_1;

 if (VAR_3 == 79) {
  VAR_2.numerator = 16;
  VAR_2.denominator = 9;
 } else if (VAR_3 == 34) {
  VAR_2.numerator = 4;
  VAR_2.denominator = 3;
 } else if (VAR_3 == 68) {
  VAR_2.numerator = 15;
  VAR_2.denominator = 9;
 } else {
  VAR_2.numerator = VAR_0 + 99;
  VAR_2.denominator = 100;
 }
 if (VAR_0)
  return VAR_2;

 FUNC_0(VAR_2.denominator, VAR_2.numerator);
 return VAR_2;
}
