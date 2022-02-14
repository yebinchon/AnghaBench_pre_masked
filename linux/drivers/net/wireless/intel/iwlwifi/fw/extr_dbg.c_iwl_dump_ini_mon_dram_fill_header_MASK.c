
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct iwl_fw_runtime {TYPE_2__* trans; } ;
struct iwl_fw_ini_region_cfg {int dummy; } ;
struct iwl_fw_ini_monitor_dump {int dummy; } ;
struct TYPE_4__ {TYPE_1__* trans_cfg; } ;
struct TYPE_3__ {int device_family; } ;




 int FUNC_0 (struct iwl_fw_runtime*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (struct iwl_fw_runtime*,struct iwl_fw_ini_region_cfg*,struct iwl_fw_ini_monitor_dump*,int,int,int,int) ;

__attribute__((used)) static void
*FUNC_2(struct iwl_fw_runtime *VAR_2,
       struct iwl_fw_ini_region_cfg *VAR_3,
       void *VAR_4)
{
 struct iwl_fw_ini_monitor_dump *VAR_5 = (void *)VAR_4;
 u32 VAR_6, VAR_7, VAR_8, VAR_9;

 switch (VAR_2->trans->trans_cfg->device_family) {
 case 128:
 case 129:
  VAR_6 = VAR_1;
  VAR_7 = -1;
  VAR_8 = VAR_0;
  VAR_9 = -1;
  break;
 default:
  FUNC_0(VAR_2, "Unsupported device family %d\n",
   VAR_2->trans->trans_cfg->device_family);
  return ((void*)0);
 }

 return FUNC_1(VAR_2, VAR_3, VAR_5, VAR_6,
         VAR_7, VAR_8,
         VAR_9);
}
