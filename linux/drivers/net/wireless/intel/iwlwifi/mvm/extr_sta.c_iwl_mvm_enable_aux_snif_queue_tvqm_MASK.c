
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct iwl_mvm {TYPE_3__* trans; } ;
struct TYPE_8__ {scalar_t__ tfd_q_hang_detect; } ;
struct TYPE_7__ {TYPE_2__* trans_cfg; } ;
struct TYPE_6__ {TYPE_1__* base_params; } ;
struct TYPE_5__ {unsigned int wd_timeout; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct iwl_mvm*) ;
 int FUNC_2 (struct iwl_mvm*,int ,int ,unsigned int) ;
 TYPE_4__ VAR_2 ;

__attribute__((used)) static int FUNC_3(struct iwl_mvm *VAR_3, u8 VAR_4)
{
 unsigned int VAR_5 = VAR_2.tfd_q_hang_detect ?
  VAR_3->trans->trans_cfg->base_params->wd_timeout :
  VAR_1;

 FUNC_0(!FUNC_1(VAR_3));

 return FUNC_2(VAR_3, VAR_4, VAR_0,
           VAR_5);
}
