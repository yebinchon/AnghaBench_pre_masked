
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_fract {int denominator; int numerator; } ;



__attribute__((used)) static inline u32 FUNC_0(const struct v4l2_fract *VAR_0)
{
 return (VAR_0->denominator + (VAR_0->numerator >> 1)) / VAR_0->numerator;
}
