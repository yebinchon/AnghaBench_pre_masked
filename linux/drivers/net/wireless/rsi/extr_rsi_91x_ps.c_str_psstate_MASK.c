
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum ps_state { ____Placeholder_ps_state } ps_state ;







char *FUNC_0(enum ps_state VAR_0)
{
 switch (VAR_0) {
 case 128:
  return "PS_NONE";
 case 131:
  return "PS_DISABLE_REQ_SENT";
 case 129:
  return "PS_ENABLE_REQ_SENT";
 case 130:
  return "PS_ENABLED";
 default:
  return "INVALID_STATE";
 }
}
