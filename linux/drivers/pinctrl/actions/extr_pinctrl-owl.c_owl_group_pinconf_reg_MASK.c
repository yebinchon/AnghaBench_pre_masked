
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct owl_pingroup {int sr_width; int sr_shift; int sr_reg; int drv_width; int drv_shift; int drv_reg; } ;


 int VAR_0 ;
 int VAR_1 ;



__attribute__((used)) static int FUNC_0(const struct owl_pingroup *VAR_2,
    unsigned int VAR_3,
    u32 *VAR_4,
    u32 *VAR_5,
    u32 *VAR_6)
{
 switch (VAR_3) {
 case 129:
  if (VAR_2->drv_reg < 0)
   return -VAR_0;
  *VAR_4 = VAR_2->drv_reg;
  *VAR_5 = VAR_2->drv_shift;
  *VAR_6 = VAR_2->drv_width;
  break;
 case 128:
  if (VAR_2->sr_reg < 0)
   return -VAR_0;
  *VAR_4 = VAR_2->sr_reg;
  *VAR_5 = VAR_2->sr_shift;
  *VAR_6 = VAR_2->sr_width;
  break;
 default:
  return -VAR_1;
 }

 return 0;
}
