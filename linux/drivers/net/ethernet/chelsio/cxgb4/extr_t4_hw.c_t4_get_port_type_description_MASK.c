
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum fw_port_type { ____Placeholder_fw_port_type } fw_port_type ;


 int FUNC_0 (char const* const*) ;

const char *FUNC_1(enum fw_port_type VAR_0)
{
 static const char *const VAR_1[] = {
  "Fiber_XFI",
  "Fiber_XAUI",
  "BT_SGMII",
  "BT_XFI",
  "BT_XAUI",
  "KX4",
  "CX4",
  "KX",
  "KR",
  "SFP",
  "BP_AP",
  "BP4_AP",
  "QSFP_10G",
  "QSA",
  "QSFP",
  "BP40_BA",
  "KR4_100G",
  "CR4_QSFP",
  "CR_QSFP",
  "CR2_QSFP",
  "SFP28",
  "KR_SFP28",
  "KR_XLAUI"
 };

 if (VAR_0 < FUNC_0(VAR_1))
  return VAR_1[VAR_0];
 return "UNKNOWN";
}
