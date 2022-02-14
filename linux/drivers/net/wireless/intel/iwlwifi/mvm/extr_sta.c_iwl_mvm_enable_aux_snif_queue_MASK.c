
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct iwl_trans_txq_scd_cfg {int aggregate; int frame_limit; int tid; int sta_id; int fifo; } ;
struct iwl_mvm {TYPE_3__* trans; } ;
struct TYPE_8__ {scalar_t__ tfd_q_hang_detect; } ;
struct TYPE_7__ {TYPE_2__* trans_cfg; } ;
struct TYPE_6__ {TYPE_1__* base_params; } ;
struct TYPE_5__ {unsigned int wd_timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct iwl_mvm*,int *,int ,int ,struct iwl_trans_txq_scd_cfg*,unsigned int) ;
 int FUNC_2 (struct iwl_mvm*) ;
 TYPE_4__ VAR_3 ;

__attribute__((used)) static void FUNC_3(struct iwl_mvm *VAR_4, u16 VAR_5,
       u8 VAR_6, u8 VAR_7)
{
 unsigned int VAR_8 = VAR_3.tfd_q_hang_detect ?
  VAR_4->trans->trans_cfg->base_params->wd_timeout :
  VAR_2;
 struct iwl_trans_txq_scd_cfg VAR_9 = {
  .fifo = VAR_7,
  .sta_id = VAR_6,
  .tid = VAR_1,
  .aggregate = 0,
  .frame_limit = VAR_0,
 };

 FUNC_0(FUNC_2(VAR_4));

 FUNC_1(VAR_4, ((void*)0), VAR_5, 0, &VAR_9, VAR_8);
}
