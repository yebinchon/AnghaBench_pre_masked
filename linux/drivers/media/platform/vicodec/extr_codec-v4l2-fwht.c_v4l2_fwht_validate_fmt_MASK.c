
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct v4l2_fwht_pixfmt_info {scalar_t__ width_div; scalar_t__ height_div; scalar_t__ pixenc; scalar_t__ components_num; } ;



bool FUNC_0(const struct v4l2_fwht_pixfmt_info *VAR_0,
       u32 VAR_1, u32 VAR_2, u32 VAR_3,
       u32 VAR_4)
{
 if (VAR_0->width_div == VAR_1 &&
     VAR_0->height_div == VAR_2 &&
     (!VAR_4 || VAR_0->pixenc == VAR_4) &&
     VAR_0->components_num == VAR_3)
  return 1;
 return 0;
}
