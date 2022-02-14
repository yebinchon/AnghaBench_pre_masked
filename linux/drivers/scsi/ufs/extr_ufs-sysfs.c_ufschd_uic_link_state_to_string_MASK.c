
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum uic_link_state { ____Placeholder_uic_link_state } uic_link_state ;






__attribute__((used)) static const char *FUNC_0(
   enum uic_link_state VAR_0)
{
 switch (VAR_0) {
 case 128: return "OFF";
 case 130: return "ACTIVE";
 case 129: return "HIBERN8";
 default: return "UNKNOWN";
 }
}
