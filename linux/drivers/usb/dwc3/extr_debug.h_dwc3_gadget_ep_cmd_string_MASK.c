
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
__attribute__((used)) static inline const char *
FUNC_0(u8 VAR_0)
{
 switch (VAR_0) {
 case 135:
  return "Start New Configuration";
 case 134:
  return "End Transfer";
 case 128:
  return "Update Transfer";
 case 129:
  return "Start Transfer";
 case 136:
  return "Clear Stall";
 case 131:
  return "Set Stall";
 case 133:
  return "Get Endpoint State";
 case 130:
  return "Set Endpoint Transfer Resource";
 case 132:
  return "Set Endpoint Configuration";
 default:
  return "UNKNOWN command";
 }
}
