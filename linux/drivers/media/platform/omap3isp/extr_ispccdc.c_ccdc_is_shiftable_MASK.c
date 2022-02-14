
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct isp_format_info {scalar_t__ flavor; unsigned int width; } ;


 struct isp_format_info* FUNC_0 (scalar_t__) ;

__attribute__((used)) static bool FUNC_1(u32 VAR_0, u32 VAR_1, unsigned int VAR_2)
{
 const struct isp_format_info *VAR_3, *VAR_4;

 if (VAR_0 == VAR_1)
  return 1;

 VAR_3 = FUNC_0(VAR_0);
 VAR_4 = FUNC_0(VAR_1);

 if ((VAR_3->flavor == 0) || (VAR_4->flavor == 0))
  return 0;

 if (VAR_3->flavor != VAR_4->flavor)
  return 0;

 return VAR_3->width - VAR_4->width + VAR_2 <= 6;
}
