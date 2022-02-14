
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm {unsigned long bt_coex_last_tcm_ts; } ;
struct iwl_bt_iterator_data {scalar_t__ primary_load; scalar_t__ secondary_load; int secondary; int primary; scalar_t__ primary_ll; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct iwl_mvm *VAR_2,
      struct iwl_bt_iterator_data *VAR_3)
{
 unsigned long VAR_4 = VAR_1;

 if (!FUNC_1(VAR_4, VAR_2->bt_coex_last_tcm_ts + VAR_0))
  return;

 VAR_2->bt_coex_last_tcm_ts = VAR_4;




 if (VAR_3->primary_ll)
  return;

 if (VAR_3->primary_load >= VAR_3->secondary_load)
  return;

 FUNC_0(VAR_3->primary, VAR_3->secondary);
}
