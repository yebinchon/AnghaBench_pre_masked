
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int delay; int wk; } ;
struct iwl_fw_runtime {TYPE_1__ timestamp; } ;


 int FUNC_0 (struct iwl_fw_runtime*,char*,int) ;
 int FUNC_1 (struct iwl_fw_runtime*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;

void FUNC_5(struct iwl_fw_runtime *VAR_0, u32 VAR_1)
{
 FUNC_0(VAR_0,
   "starting timestamp_marker trigger with delay: %us\n",
   VAR_1);

 FUNC_1(VAR_0);

 VAR_0->timestamp.delay = FUNC_2(VAR_1 * 1000);

 FUNC_4(&VAR_0->timestamp.wk,
         FUNC_3(VAR_0->timestamp.delay));
}
