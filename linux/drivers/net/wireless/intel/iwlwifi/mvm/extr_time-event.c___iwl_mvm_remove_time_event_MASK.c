
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct iwl_mvm_time_event_data {scalar_t__ uid; scalar_t__ id; } ;
struct iwl_mvm {int time_event_lock; } ;


 int FUNC_0 (struct iwl_mvm*,char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct iwl_mvm*,struct iwl_mvm_time_event_data*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static bool FUNC_4(struct iwl_mvm *VAR_1,
     struct iwl_mvm_time_event_data *VAR_2,
     u32 *VAR_3)
{
 u32 VAR_4;





 FUNC_2(&VAR_1->time_event_lock);


 *VAR_3 = VAR_2->uid;
 VAR_4 = VAR_2->id;




 FUNC_1(VAR_1, VAR_2);
 FUNC_3(&VAR_1->time_event_lock);






 if (VAR_4 == VAR_0) {
  FUNC_0(VAR_1, "TE 0x%x has already ended\n", *VAR_3);
  return 0;
 }

 return 1;
}
