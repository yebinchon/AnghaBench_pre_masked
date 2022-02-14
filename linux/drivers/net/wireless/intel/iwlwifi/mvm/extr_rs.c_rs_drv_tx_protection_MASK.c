
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_lq_cmd {int flags; } ;
struct TYPE_3__ {struct iwl_lq_cmd lq; } ;
struct TYPE_4__ {TYPE_1__ rs_drv; } ;
struct iwl_mvm_sta {scalar_t__ tx_protection; TYPE_2__ lq_sta; } ;
struct iwl_mvm {int mutex; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_mvm*,struct iwl_lq_cmd*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct iwl_mvm *VAR_1, struct iwl_mvm_sta *VAR_2,
    bool VAR_3)
{
 struct iwl_lq_cmd *VAR_4 = &VAR_2->lq_sta.rs_drv.lq;

 FUNC_1(&VAR_1->mutex);

 if (VAR_3) {
  if (VAR_2->tx_protection == 0)
   VAR_4->flags |= VAR_0;
  VAR_2->tx_protection++;
 } else {
  VAR_2->tx_protection--;
  if (VAR_2->tx_protection == 0)
   VAR_4->flags &= ~VAR_0;
 }

 return FUNC_0(VAR_1, VAR_4);
}
