
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct target_fabric_configfs {int dummy; } ;
struct se_wwn {int dummy; } ;
struct sbp_tport {struct se_wwn tport_wwn; int tport_name; int guid; } ;
struct config_group {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct se_wwn* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct sbp_tport* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (char const*,int *) ;

__attribute__((used)) static struct se_wwn *FUNC_4(
  struct target_fabric_configfs *VAR_4,
  struct config_group *VAR_5,
  const char *VAR_6)
{
 struct sbp_tport *VAR_7;
 u64 VAR_8 = 0;

 if (FUNC_3(VAR_6, &VAR_8) < 0)
  return FUNC_0(-VAR_0);

 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return FUNC_0(-VAR_1);

 VAR_7->guid = VAR_8;
 FUNC_2(VAR_7->tport_name, VAR_3, VAR_8);

 return &VAR_7->tport_wwn;
}
