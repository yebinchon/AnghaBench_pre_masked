
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iscsi_tpg_attrib {int login_keys_workaround; } ;
struct iscsi_portal_group {int tpgt; struct iscsi_tpg_attrib tpg_attrib; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*) ;
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

 VAR_3->login_keys_workaround = VAR_2;
 FUNC_0("iSCSI_TPG[%hu] - TPG enabled bit for login keys workaround: %s ",
  VAR_1->tpgt, (VAR_3->login_keys_workaround) ? "ON" : "OFF");

 return 0;
}
