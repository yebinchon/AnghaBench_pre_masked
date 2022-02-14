
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum iwl_mvm_tdls_cs_state { ____Placeholder_iwl_mvm_tdls_cs_state } iwl_mvm_tdls_cs_state ;
__attribute__((used)) static const char *
FUNC_0(enum iwl_mvm_tdls_cs_state VAR_0)
{
 switch (VAR_0) {
 case 131:
  return "IDLE";
 case 129:
  return "REQ SENT";
 case 128:
  return "RESP RECEIVED";
 case 130:
  return "REQ RECEIVED";
 case 132:
  return "ACTIVE";
 }

 return ((void*)0);
}
