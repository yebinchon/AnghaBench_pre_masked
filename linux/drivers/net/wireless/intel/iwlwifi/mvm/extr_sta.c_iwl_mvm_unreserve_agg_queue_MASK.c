
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct iwl_mvm_tid_data {size_t txq_id; } ;
struct iwl_mvm_sta {int dummy; } ;
struct iwl_mvm {TYPE_1__* queue_info; int mutex; } ;
struct TYPE_2__ {scalar_t__ status; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct iwl_mvm*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct iwl_mvm *VAR_3,
     struct iwl_mvm_sta *VAR_4,
     struct iwl_mvm_tid_data *VAR_5)
{
 u16 VAR_6 = VAR_5->txq_id;

 FUNC_1(&VAR_3->mutex);

 if (FUNC_0(VAR_3))
  return;
 if (VAR_3->queue_info[VAR_6].status == VAR_2) {
  VAR_3->queue_info[VAR_6].status = VAR_1;
  VAR_5->txq_id = VAR_0;
 }
}
