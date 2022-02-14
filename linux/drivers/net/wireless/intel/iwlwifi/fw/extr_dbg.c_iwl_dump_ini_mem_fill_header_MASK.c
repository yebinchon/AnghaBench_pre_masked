
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_fw_runtime {int dummy; } ;
struct iwl_fw_ini_region_cfg {int dummy; } ;
struct TYPE_2__ {int version; } ;
struct iwl_fw_ini_error_dump {void* ranges; TYPE_1__ header; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void *FUNC_1(struct iwl_fw_runtime *VAR_1,
       struct iwl_fw_ini_region_cfg *VAR_2,
       void *VAR_3)
{
 struct iwl_fw_ini_error_dump *VAR_4 = VAR_3;

 VAR_4->header.version = FUNC_0(VAR_0);

 return VAR_4->ranges;
}
