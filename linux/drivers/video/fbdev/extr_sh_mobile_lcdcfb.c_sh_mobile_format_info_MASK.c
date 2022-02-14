
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sh_mobile_lcdc_format_info {scalar_t__ fourcc; } ;


 unsigned int FUNC_0 (struct sh_mobile_lcdc_format_info const*) ;
 struct sh_mobile_lcdc_format_info const* VAR_0 ;

__attribute__((used)) static const struct sh_mobile_lcdc_format_info *
FUNC_1(u32 VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); ++VAR_2) {
  if (VAR_0[VAR_2].fourcc == VAR_1)
   return &VAR_0[VAR_2];
 }

 return ((void*)0);
}
