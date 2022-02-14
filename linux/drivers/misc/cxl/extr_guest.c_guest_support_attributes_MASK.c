
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum cxl_attrs { ____Placeholder_cxl_attrs } cxl_attrs ;





 int FUNC_0 (char const*,char*) ;

__attribute__((used)) static bool FUNC_1(const char *VAR_0,
         enum cxl_attrs VAR_1)
{
 switch (VAR_1) {
 case 130:
  if ((FUNC_0(VAR_0, "base_image") == 0) ||
   (FUNC_0(VAR_0, "load_image_on_perst") == 0) ||
   (FUNC_0(VAR_0, "perst_reloads_same_image") == 0) ||
   (FUNC_0(VAR_0, "image_loaded") == 0))
   return 0;
  break;
 case 128:
  if ((FUNC_0(VAR_0, "pp_mmio_off") == 0))
   return 0;
  break;
 case 129:
  break;
 default:
  break;
 }

 return 1;
}
