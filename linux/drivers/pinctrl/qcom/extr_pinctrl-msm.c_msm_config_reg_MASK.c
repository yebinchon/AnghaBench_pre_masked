
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_pingroup {unsigned int pull_bit; unsigned int drv_bit; unsigned int oe_bit; } ;
struct msm_pinctrl {int dummy; } ;


 int VAR_0 ;
__attribute__((used)) static int FUNC_0(struct msm_pinctrl *VAR_1,
     const struct msm_pingroup *VAR_2,
     unsigned VAR_3,
     unsigned *VAR_4,
     unsigned *VAR_5)
{
 switch (VAR_3) {
 case 133:
 case 132:
 case 134:
 case 131:
  *VAR_5 = VAR_2->pull_bit;
  *VAR_4 = 3;
  break;
 case 130:
  *VAR_5 = VAR_2->drv_bit;
  *VAR_4 = 7;
  break;
 case 128:
 case 129:
  *VAR_5 = VAR_2->oe_bit;
  *VAR_4 = 1;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
