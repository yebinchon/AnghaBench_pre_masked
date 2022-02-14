
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int s64 ;
typedef enum v4l2_ctrl_type { ____Placeholder_v4l2_ctrl_type } v4l2_ctrl_type ;


 int VAR_0 ;
 int VAR_1 ;
__attribute__((used)) static int FUNC_0(enum v4l2_ctrl_type VAR_2,
  s64 VAR_3, s64 VAR_4, u64 VAR_5, s64 VAR_6)
{
 switch (VAR_2) {
 case 136:
  if (VAR_5 != 1 || VAR_4 > 1 || VAR_3 < 0)
   return -VAR_1;

 case 128:
 case 130:
 case 129:
 case 135:
 case 134:
  if (VAR_5 == 0 || VAR_3 > VAR_4 || VAR_6 < VAR_3 || VAR_6 > VAR_4)
   return -VAR_1;
  return 0;
 case 137:
  if (VAR_5 || VAR_3 || !VAR_4 || (VAR_6 & ~VAR_4))
   return -VAR_1;
  return 0;
 case 132:
 case 133:
  if (VAR_3 > VAR_4 || VAR_6 < VAR_3 || VAR_6 > VAR_4)
   return -VAR_1;


  if (VAR_5 && ((1 << VAR_6) & VAR_5))
   return -VAR_0;
  return 0;
 case 131:
  if (VAR_3 > VAR_4 || VAR_3 < 0 || VAR_5 < 1 || VAR_6)
   return -VAR_1;
  return 0;
 default:
  return 0;
 }
}
