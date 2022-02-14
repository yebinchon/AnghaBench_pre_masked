
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum xgbe_an { ____Placeholder_xgbe_an } xgbe_an ;
__attribute__((used)) static const char *FUNC_0(enum xgbe_an VAR_0)
{
 switch (VAR_0) {
 case 128:
  return "Ready";
 case 129:
  return "Page-Received";
 case 131:
  return "Incompatible-Link";
 case 133:
  return "Complete";
 case 130:
  return "No-Link";
 case 132:
  return "Error";
 default:
  return "Undefined";
 }
}
