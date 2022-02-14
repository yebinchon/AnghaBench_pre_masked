
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct iwl_trans {TYPE_1__* trans_cfg; } ;
struct TYPE_2__ {scalar_t__ device_family; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static u32 FUNC_0(struct iwl_trans *VAR_1)
{
 if (VAR_1->trans_cfg->device_family >= VAR_0)
  return 0x00FFFFFF;
 else
  return 0x000FFFFF;
}
