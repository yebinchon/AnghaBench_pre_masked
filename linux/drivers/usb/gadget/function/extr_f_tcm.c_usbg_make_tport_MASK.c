
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct se_wwn {int dummy; } ;
struct usbg_tport {struct se_wwn tport_wwn; int tport_name; int tport_wwpn; } ;
struct target_fabric_configfs {int dummy; } ;
struct config_group {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct se_wwn* FUNC_0 (int ) ;
 int VAR_2 ;
 struct usbg_tport* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int,char*,char const*) ;
 char* FUNC_3 (char const*) ;

__attribute__((used)) static struct se_wwn *FUNC_4(
 struct target_fabric_configfs *VAR_3,
 struct config_group *VAR_4,
 const char *VAR_5)
{
 struct usbg_tport *VAR_6;
 const char *VAR_7;
 u64 VAR_8 = 0;

 VAR_7 = FUNC_3(VAR_5);
 if (!VAR_7)
  return FUNC_0(-VAR_0);

 VAR_6 = FUNC_1(sizeof(struct usbg_tport), VAR_2);
 if (!(VAR_6))
  return FUNC_0(-VAR_1);

 VAR_6->tport_wwpn = VAR_8;
 FUNC_2(VAR_6->tport_name, sizeof(VAR_6->tport_name), "%s", VAR_7);
 return &VAR_6->tport_wwn;
}
