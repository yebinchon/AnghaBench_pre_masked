
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fract {int numerator; unsigned int denominator; } ;
struct ov772x_priv {int dummy; } ;


 unsigned int FUNC_0 (unsigned int*) ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int* VAR_0 ;

__attribute__((used)) static unsigned int FUNC_2(struct ov772x_priv *VAR_1,
          struct v4l2_fract *VAR_2)
{
 unsigned int VAR_3 = VAR_2->numerator ?
      VAR_2->denominator / VAR_2->numerator :
      VAR_2->denominator;
 unsigned int VAR_4;
 unsigned int VAR_5;
 unsigned int VAR_6;
 unsigned int VAR_7;


 VAR_4 = ~0L;
 for (VAR_7 = 0, VAR_6 = 0; VAR_7 < FUNC_0(VAR_0); VAR_7++) {
  VAR_5 = FUNC_1(VAR_3 - VAR_0[VAR_7]);
  if (VAR_5 < VAR_4) {
   VAR_6 = VAR_7;
   VAR_4 = VAR_5;
  }
 }

 return VAR_0[VAR_6];
}
