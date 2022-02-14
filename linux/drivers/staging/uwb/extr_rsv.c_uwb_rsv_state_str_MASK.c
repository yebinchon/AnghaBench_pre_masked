
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum uwb_rsv_state { ____Placeholder_uwb_rsv_state } uwb_rsv_state ;


 int VAR_0 ;
 int VAR_1 ;
 char const** VAR_2 ;

const char *FUNC_0(enum uwb_rsv_state VAR_3)
{
 if (VAR_3 < VAR_1 || VAR_3 >= VAR_0)
  return "unknown";
 return VAR_2[VAR_3];
}
