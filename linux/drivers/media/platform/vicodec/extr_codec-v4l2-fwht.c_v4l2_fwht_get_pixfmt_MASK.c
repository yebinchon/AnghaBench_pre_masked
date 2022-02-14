
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct v4l2_fwht_pixfmt_info {int dummy; } ;


 scalar_t__ FUNC_0 (struct v4l2_fwht_pixfmt_info const*) ;
 struct v4l2_fwht_pixfmt_info const* VAR_0 ;

const struct v4l2_fwht_pixfmt_info *FUNC_1(u32 VAR_1)
{
 if (VAR_1 >= FUNC_0(VAR_0))
  return ((void*)0);
 return VAR_0 + VAR_1;
}
