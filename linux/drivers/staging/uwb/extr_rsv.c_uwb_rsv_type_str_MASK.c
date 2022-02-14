
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum uwb_drp_type { ____Placeholder_uwb_drp_type } uwb_drp_type ;


 int VAR_0 ;
 int VAR_1 ;
 char const** VAR_2 ;

const char *FUNC_0(enum uwb_drp_type VAR_3)
{
 if (VAR_3 < VAR_0 || VAR_3 > VAR_1)
  return "invalid";
 return VAR_2[VAR_3];
}
