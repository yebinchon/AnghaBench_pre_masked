
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct iwl_mvm_tid_data {int next_reclaimed; int seq_number; } ;
struct iwl_mvm {TYPE_2__* trans; } ;
struct TYPE_4__ {TYPE_1__* trans_cfg; } ;
struct TYPE_3__ {scalar_t__ gen2; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

u16 FUNC_2(struct iwl_mvm *VAR_0, struct iwl_mvm_tid_data *VAR_1)
{
 u16 VAR_2 = FUNC_0(VAR_1->seq_number);





 if (VAR_0->trans->trans_cfg->gen2)
  VAR_2 &= 0xff;

 return FUNC_1(VAR_2, VAR_1->next_reclaimed);
}
