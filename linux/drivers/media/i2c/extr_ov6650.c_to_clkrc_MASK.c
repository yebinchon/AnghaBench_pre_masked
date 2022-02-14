
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u8 ;
struct v4l2_fract {unsigned long numerator; unsigned long denominator; } ;


 unsigned long VAR_0 ;

__attribute__((used)) static u8 FUNC_0(struct v4l2_fract *VAR_1,
  unsigned long VAR_2, unsigned long VAR_3)
{
 unsigned long VAR_4;

 if (VAR_1->numerator && VAR_1->denominator)
  VAR_4 = VAR_3 * VAR_1->denominator /
    (VAR_0 * VAR_1->numerator);
 else
  VAR_4 = VAR_3;

 if (VAR_2 && VAR_2 < VAR_4)
  VAR_4 = VAR_2;

 return (VAR_3 - 1) / VAR_4;
}
