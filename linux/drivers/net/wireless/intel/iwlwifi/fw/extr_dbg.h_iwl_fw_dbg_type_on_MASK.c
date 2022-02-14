
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct iwl_fw_runtime {TYPE_2__* fw; } ;
struct TYPE_3__ {int dump_mask; } ;
struct TYPE_4__ {TYPE_1__ dbg; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline bool FUNC_1(struct iwl_fw_runtime *VAR_0, u32 VAR_1)
{
 return (VAR_0->fw->dbg.dump_mask & FUNC_0(VAR_1));
}
