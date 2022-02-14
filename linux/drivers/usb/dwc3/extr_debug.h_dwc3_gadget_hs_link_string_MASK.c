
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum dwc3_link_state { ____Placeholder_dwc3_link_state } dwc3_link_state ;
__attribute__((used)) static inline const char *
FUNC_0(enum dwc3_link_state VAR_0)
{
 switch (VAR_0) {
 case 130:
  return "On";
 case 129:
  return "Sleep";
 case 128:
  return "Suspend";
 case 131:
  return "Disconnected";
 case 132:
  return "Early Suspend";
 case 135:
  return "Recovery";
 case 134:
  return "Reset";
 case 133:
  return "Resume";
 default:
  return "UNKNOWN link state\n";
 }
}
