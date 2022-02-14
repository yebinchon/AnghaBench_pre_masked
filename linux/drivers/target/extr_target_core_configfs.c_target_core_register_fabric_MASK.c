
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct config_group {int cg_item; } ;
struct target_fabric_configfs {char const tf_wwn_cit; char const tf_discovery_cit; struct config_group tf_group; struct config_group tf_disc_group; TYPE_1__* tf_ops; } ;
struct TYPE_2__ {char const* fabric_name; } ;


 int VAR_0 ;
 struct config_group* FUNC_0 (int ) ;
 int FUNC_1 (struct config_group*,char const*,char const*) ;
 char const* FUNC_2 (int *) ;
 int FUNC_3 (struct config_group*,struct config_group*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char const*,char*,int) ;
 struct target_fabric_configfs* FUNC_7 (char const*) ;

__attribute__((used)) static struct config_group *FUNC_8(
 struct config_group *VAR_1,
 const char *VAR_2)
{
 struct target_fabric_configfs *VAR_3;
 int VAR_4;

 FUNC_4("Target_Core_ConfigFS: REGISTER -> group: %p name:"
   " %s\n", VAR_1, VAR_2);

 VAR_3 = FUNC_7(VAR_2);
 if (!VAR_3) {
  FUNC_4("target_core_register_fabric() trying autoload for %s\n",
    VAR_2);
  if (!FUNC_6(VAR_2, "iscsi", 5)) {






   VAR_4 = FUNC_5("iscsi_target_mod");
   if (VAR_4 < 0) {
    FUNC_4("request_module() failed for"
             " iscsi_target_mod.ko: %d\n", VAR_4);
    return FUNC_0(-VAR_0);
   }
  } else if (!FUNC_6(VAR_2, "loopback", 8)) {






   VAR_4 = FUNC_5("tcm_loop");
   if (VAR_4 < 0) {
    FUNC_4("request_module() failed for"
             " tcm_loop.ko: %d\n", VAR_4);
    return FUNC_0(-VAR_0);
   }
  }

  VAR_3 = FUNC_7(VAR_2);
 }

 if (!VAR_3) {
  FUNC_4("target_core_get_fabric() failed for %s\n",
           VAR_2);
  return FUNC_0(-VAR_0);
 }
 FUNC_4("Target_Core_ConfigFS: REGISTER -> Located fabric:"
   " %s\n", VAR_3->tf_ops->fabric_name);




 FUNC_4("Target_Core_ConfigFS: REGISTER tfc_wwn_cit -> %p\n",
   &VAR_3->tf_wwn_cit);

 FUNC_1(&VAR_3->tf_group, VAR_2, &VAR_3->tf_wwn_cit);

 FUNC_1(&VAR_3->tf_disc_group, "discovery_auth",
   &VAR_3->tf_discovery_cit);
 FUNC_3(&VAR_3->tf_disc_group, &VAR_3->tf_group);

 FUNC_4("Target_Core_ConfigFS: REGISTER -> Allocated Fabric: %s\n",
   FUNC_2(&VAR_3->tf_group.cg_item));
 return &VAR_3->tf_group;
}
