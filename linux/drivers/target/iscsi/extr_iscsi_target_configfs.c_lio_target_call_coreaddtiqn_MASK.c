
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_fabric_configfs {int dummy; } ;
struct se_wwn {int dummy; } ;
struct iscsi_tiqn {char const* tiqn; struct se_wwn tiqn_wwn; } ;
struct config_group {int dummy; } ;


 struct se_wwn* FUNC_0 (struct iscsi_tiqn*) ;
 scalar_t__ FUNC_1 (struct iscsi_tiqn*) ;
 struct iscsi_tiqn* FUNC_2 (unsigned char*) ;
 int FUNC_3 (char*,char const*) ;

__attribute__((used)) static struct se_wwn *FUNC_4(
 struct target_fabric_configfs *VAR_0,
 struct config_group *VAR_1,
 const char *VAR_2)
{
 struct iscsi_tiqn *VAR_3;

 VAR_3 = FUNC_2((unsigned char *)VAR_2);
 if (FUNC_1(VAR_3))
  return FUNC_0(VAR_3);

 FUNC_3("LIO_Target_ConfigFS: REGISTER -> %s\n", VAR_3->tiqn);
 FUNC_3("LIO_Target_ConfigFS: REGISTER -> Allocated Node:"
   " %s\n", VAR_2);
 return &VAR_3->tiqn_wwn;
}
