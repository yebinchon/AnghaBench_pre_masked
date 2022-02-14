
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static inline char *FUNC_0(enum v4l2_field VAR_6)
{
 if (VAR_6 == VAR_4)
  return "-";
 if (VAR_6 == VAR_5)
  return "T";
 if (VAR_6 == VAR_0)
  return "B";
 if (VAR_6 == VAR_1)
  return "I";
 if (VAR_6 == VAR_3)
  return "TB";
 if (VAR_6 == VAR_2)
  return "BT";
 return "?";
}
