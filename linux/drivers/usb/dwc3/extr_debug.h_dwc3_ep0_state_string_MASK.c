
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum dwc3_ep0_state { ____Placeholder_dwc3_ep0_state } dwc3_ep0_state ;







__attribute__((used)) static inline const char *FUNC_0(enum dwc3_ep0_state VAR_0)
{
 switch (VAR_0) {
 case 128:
  return "Unconnected";
 case 130:
  return "Setup Phase";
 case 131:
  return "Data Phase";
 case 129:
  return "Status Phase";
 default:
  return "UNKNOWN";
 }
}
