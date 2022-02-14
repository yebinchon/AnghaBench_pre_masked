
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct iscsi_tpg_attrib {scalar_t__ default_cmdsn_depth; } ;
struct iscsi_portal_group {int tpgt; struct iscsi_tpg_attrib tpg_attrib; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,int ,scalar_t__) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__) ;

int FUNC_2(
 struct iscsi_portal_group *VAR_3,
 u32 VAR_4)
{
 struct iscsi_tpg_attrib *VAR_5 = &VAR_3->tpg_attrib;

 if (VAR_4 > VAR_1) {
  FUNC_1("Requested Default Queue Depth: %u larger"
   " than maximum %u\n", VAR_4,
    VAR_1);
  return -VAR_0;
 } else if (VAR_4 < VAR_2) {
  FUNC_1("Requested Default Queue Depth: %u smaller"
   " than minimum %u\n", VAR_4,
    VAR_2);
  return -VAR_0;
 }

 VAR_5->default_cmdsn_depth = VAR_4;
 FUNC_0("iSCSI_TPG[%hu] - Set Default CmdSN TCQ Depth to %u\n",
  VAR_3->tpgt, VAR_5->default_cmdsn_depth);

 return 0;
}
