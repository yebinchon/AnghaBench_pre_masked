
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;






__attribute__((used)) static char *FUNC_0(unsigned long VAR_5, int *VAR_6)
{
 switch (VAR_5) {
 case 132:
  *VAR_6 = -VAR_1;
  return "HV_EBADALIGN";
 case 129:
  *VAR_6 = -VAR_1;
  return "HV_ENORADDR";
 case 131:
  *VAR_6 = -VAR_2;
  return "HV_EINVAL";
 case 128:
  *VAR_6 = -VAR_0;
  return "HV_EWOULDBLOCK";
 case 130:
  *VAR_6 = -VAR_4;
  return "HV_ENOACCESS";
 default:
  break;
 }

 *VAR_6 = -VAR_3;
 return "UNKNOWN";
}
