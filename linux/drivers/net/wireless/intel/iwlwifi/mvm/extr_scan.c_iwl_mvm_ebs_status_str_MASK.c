
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum iwl_scan_ebs_status { ____Placeholder_iwl_scan_ebs_status } iwl_scan_ebs_status ;







__attribute__((used)) static const char *FUNC_0(enum iwl_scan_ebs_status VAR_0)
{
 switch (VAR_0) {
 case 128:
  return "successful";
 case 129:
  return "inactive";
 case 130:
 case 131:
 default:
  return "failed";
 }
}
