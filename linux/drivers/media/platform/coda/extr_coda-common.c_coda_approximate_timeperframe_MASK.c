
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fract {int member_0; int member_1; int numerator; int denominator; } ;


 unsigned int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1(struct v4l2_fract *VAR_0)
{
 struct v4l2_fract VAR_1 = *VAR_0;
 struct v4l2_fract VAR_2;
 struct v4l2_fract VAR_3 = { 1, 0 };
 struct v4l2_fract VAR_4 = { 0, 1 };
 unsigned int VAR_5, VAR_6, VAR_7;


 if (VAR_1.numerator == 0 || VAR_1.denominator / VAR_1.numerator > 65535) {
  VAR_0->numerator = 1;
  VAR_0->denominator = 65535;
  return;
 }


 if (VAR_1.denominator == 0 || VAR_1.numerator / VAR_1.denominator > 65536) {
  VAR_0->numerator = 65536;
  VAR_0->denominator = 1;
  return;
 }


 VAR_6 = FUNC_0(VAR_1.numerator, VAR_1.denominator);
 if (VAR_6 > 1) {
  VAR_1.numerator /= VAR_6;
  VAR_1.denominator /= VAR_6;
 }

 if (VAR_1.numerator <= 65536 && VAR_1.denominator < 65536) {
  *VAR_0 = VAR_1;
  return;
 }


 while (VAR_4 <= 65536 && VAR_4 < 65536) {
  VAR_2 = VAR_3;
  VAR_3 = VAR_4;


  if (VAR_1.numerator == 0)
   break;

  VAR_5 = VAR_1.denominator / VAR_1.numerator;

  VAR_4 = VAR_2 + VAR_5 * VAR_3;
  VAR_4 = VAR_2 + VAR_5 * VAR_4;

  VAR_7 = VAR_1.numerator;
  VAR_1.numerator = VAR_1.denominator % VAR_1.numerator;
  VAR_1.denominator = VAR_7;
 }

 *VAR_0 = VAR_3;
}
