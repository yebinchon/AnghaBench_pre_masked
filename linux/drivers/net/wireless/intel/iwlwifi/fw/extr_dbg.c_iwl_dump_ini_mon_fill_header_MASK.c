
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct iwl_fw_runtime {int trans; } ;
struct iwl_fw_ini_region_cfg {int dummy; } ;
struct TYPE_2__ {void* version; } ;
struct iwl_fw_ini_monitor_dump {void* ranges; void* cycle_cnt; void* write_ptr; TYPE_1__ header; } ;


 int FUNC_0 (struct iwl_fw_runtime*,char*) ;
 int VAR_0 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,unsigned long*) ;
 int FUNC_4 (int ,unsigned long*) ;

__attribute__((used)) static void
*FUNC_5(struct iwl_fw_runtime *VAR_1,
         struct iwl_fw_ini_region_cfg *VAR_2,
         struct iwl_fw_ini_monitor_dump *VAR_3,
         u32 VAR_4, u32 VAR_5,
         u32 VAR_6, u32 VAR_7)
{
 u32 VAR_8, VAR_9;
 unsigned long VAR_10;

 if (!FUNC_3(VAR_1->trans, &VAR_10)) {
  FUNC_0(VAR_1, "Failed to get monitor header\n");
  return ((void*)0);
 }

 VAR_8 = FUNC_2(VAR_1->trans, VAR_4);
 VAR_9 = FUNC_2(VAR_1->trans, VAR_6);

 FUNC_4(VAR_1->trans, &VAR_10);

 VAR_3->header.version = FUNC_1(VAR_0);
 VAR_3->write_ptr = FUNC_1(VAR_8 & VAR_5);
 VAR_3->cycle_cnt = FUNC_1(VAR_9 & VAR_7);

 return VAR_3->ranges;
}
