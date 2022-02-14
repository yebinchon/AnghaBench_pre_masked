
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
__attribute__((used)) static inline const char *FUNC_0(u32 VAR_1)
{
 switch (VAR_1 & VAR_0) {
 case 131:
  return "U0";
 case 130:
  return "U1";
 case 129:
  return "U2";
 case 128:
  return "U3";
 case 139:
  return "Disabled";
 case 133:
  return "RxDetect";
 case 137:
  return "Inactive";
 case 136:
  return "Polling";
 case 135:
  return "Recovery";
 case 138:
  return "Hot Reset";
 case 140:
  return "Compliance mode";
 case 132:
  return "Test mode";
 case 134:
  return "Resume";
 default:
  break;
 }
 return "Unknown";
}
