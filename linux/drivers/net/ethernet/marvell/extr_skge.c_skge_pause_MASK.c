
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum pause_status { ____Placeholder_pause_status } pause_status ;







__attribute__((used)) static const char *FUNC_0(enum pause_status VAR_0)
{
 switch (VAR_0) {
 case 130:
  return "none";
 case 129:
  return "rx only";
 case 131:
  return "tx_only";
 case 128:
  return "both";
 default:
  return "indeterminated";
 }
}
