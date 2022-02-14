
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct iwl_mvm {int dummy; } ;
struct iwl_lq_sta {scalar_t__ visited_columns; int flush_timer; scalar_t__ total_success; scalar_t__ total_failed; scalar_t__ table_count; int max_success_limit; int max_failure_limit; int table_count_limit; int rs_state; } ;


 int FUNC_0 (struct iwl_mvm*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_1(struct iwl_mvm *VAR_8, u8 VAR_9,
     struct iwl_lq_sta *VAR_10)
{
 FUNC_0(VAR_8, "Moving to RS_STATE_STAY_IN_COLUMN\n");
 VAR_10->rs_state = VAR_6;
 if (VAR_9) {
  VAR_10->table_count_limit = VAR_2;
  VAR_10->max_failure_limit = VAR_0;
  VAR_10->max_success_limit = VAR_1;
 } else {
  VAR_10->table_count_limit = VAR_5;
  VAR_10->max_failure_limit = VAR_3;
  VAR_10->max_success_limit = VAR_4;
 }
 VAR_10->table_count = 0;
 VAR_10->total_failed = 0;
 VAR_10->total_success = 0;
 VAR_10->flush_timer = VAR_7;
 VAR_10->visited_columns = 0;
}
