
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fract {unsigned int numerator; unsigned int denominator; } ;
struct csi_skip_desc {unsigned int max_ratio; unsigned int keep; } ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_1(const struct csi_skip_desc *VAR_0,
        struct v4l2_fract *VAR_1)
{
 unsigned int VAR_2;

 VAR_1->numerator *= VAR_0->max_ratio;
 VAR_1->denominator *= VAR_0->keep;


 VAR_2 = FUNC_0(VAR_1->numerator, VAR_1->denominator);
 if (VAR_2 > 1) {
  VAR_1->numerator /= VAR_2;
  VAR_1->denominator /= VAR_2;
 }
}
