
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct iwl_mvm {TYPE_3__* trans; } ;
struct TYPE_6__ {TYPE_2__* cfg; TYPE_1__* trans_cfg; } ;
struct TYPE_5__ {scalar_t__ gp2_reg_addr; } ;
struct TYPE_4__ {scalar_t__ device_family; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_3__*,scalar_t__) ;

u32 FUNC_1(struct iwl_mvm *VAR_2)
{
 u32 VAR_3 = VAR_0;

 if (VAR_2->trans->trans_cfg->device_family >= VAR_1 &&
     VAR_2->trans->cfg->gp2_reg_addr)
  VAR_3 = VAR_2->trans->cfg->gp2_reg_addr;

 return FUNC_0(VAR_2->trans, VAR_3);
}
