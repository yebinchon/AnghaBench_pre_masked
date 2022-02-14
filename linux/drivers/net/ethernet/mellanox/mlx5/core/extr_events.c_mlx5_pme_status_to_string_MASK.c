
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum port_module_event_status_type { ____Placeholder_port_module_event_status_type } port_module_event_status_type ;







__attribute__((used)) static const char *FUNC_0(enum port_module_event_status_type VAR_0)
{
 switch (VAR_0) {
 case 129:
  return "Cable plugged";
 case 128:
  return "Cable unplugged";
 case 130:
  return "Cable error";
 case 131:
  return "Cable disabled";
 default:
  return "Unknown status";
 }
}
