
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ctrl {int id; } ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;

bool FUNC_1(const struct v4l2_ctrl *VAR_2)
{
 if (FUNC_0(VAR_2->id) == VAR_1)
  return 1;
 if (FUNC_0(VAR_2->id) == VAR_0)
  return 1;
 switch (VAR_2->id) {
 case 130:
 case 128:
 case 133:
 case 132:
 case 129:
 case 131:
  return 1;
 default:
  break;
 }
 return 0;
}
