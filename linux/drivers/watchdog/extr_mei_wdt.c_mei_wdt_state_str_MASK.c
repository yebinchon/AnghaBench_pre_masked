
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum mei_wdt_state { ____Placeholder_mei_wdt_state } mei_wdt_state ;
__attribute__((used)) static const char *FUNC_0(enum mei_wdt_state VAR_0)
{
 switch (VAR_0) {
 case 131:
  return "PROBE";
 case 133:
  return "IDLE";
 case 129:
  return "START";
 case 130:
  return "RUNNING";
 case 128:
  return "STOPPING";
 case 132:
  return "NOT_REQUIRED";
 default:
  return "unknown";
 }
}
