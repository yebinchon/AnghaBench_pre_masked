
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iscsi_tpg_attrib {int fabric_prot_type; } ;
struct iscsi_portal_group {int tpgt; struct iscsi_tpg_attrib tpg_attrib; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*,int) ;

int FUNC_2(
 struct iscsi_portal_group *VAR_1,
 u32 VAR_2)
{
 struct iscsi_tpg_attrib *VAR_3 = &VAR_1->tpg_attrib;

 if ((VAR_2 != 0) && (VAR_2 != 1) && (VAR_2 != 3)) {
  FUNC_1("Illegal value for fabric_prot_type: %u\n", VAR_2);
  return -VAR_0;
 }

 VAR_3->fabric_prot_type = VAR_2;
 FUNC_0("iSCSI_TPG[%hu] - T10 Fabric Protection Type: %u\n",
   VAR_1->tpgt, VAR_2);

 return 0;
}
