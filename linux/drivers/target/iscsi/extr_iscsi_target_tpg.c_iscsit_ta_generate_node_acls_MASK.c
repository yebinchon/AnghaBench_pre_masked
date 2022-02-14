
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iscsi_tpg_attrib {int generate_node_acls; int cache_dynamic_acls; } ;
struct iscsi_portal_group {int tpgt; struct iscsi_tpg_attrib tpg_attrib; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int) ;

int FUNC_2(
 struct iscsi_portal_group *VAR_1,
 u32 VAR_2)
{
 struct iscsi_tpg_attrib *VAR_3 = &VAR_1->tpg_attrib;

 if ((VAR_2 != 0) && (VAR_2 != 1)) {
  FUNC_1("Illegal value %d\n", VAR_2);
  return -VAR_0;
 }

 VAR_3->generate_node_acls = VAR_2;
 FUNC_0("iSCSI_TPG[%hu] - Generate Initiator Portal Group ACLs: %s\n",
  VAR_1->tpgt, (VAR_3->generate_node_acls) ? "Enabled" : "Disabled");

 if (VAR_2 == 1 && VAR_3->cache_dynamic_acls == 0) {
  FUNC_0("Explicitly setting cache_dynamic_acls=1 when "
   "generate_node_acls=1\n");
  VAR_3->cache_dynamic_acls = 1;
 }

 return 0;
}
