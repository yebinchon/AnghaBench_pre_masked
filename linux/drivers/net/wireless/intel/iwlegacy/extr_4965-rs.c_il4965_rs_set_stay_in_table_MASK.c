
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct il_priv {int dummy; } ;
struct il_lq_sta {int stay_in_tbl; scalar_t__ action_counter; int flush_timer; scalar_t__ total_success; scalar_t__ total_failed; scalar_t__ table_count; int max_success_limit; int max_failure_limit; int table_count_limit; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_1(struct il_priv *VAR_7, u8 VAR_8,
       struct il_lq_sta *VAR_9)
{
 FUNC_0("we are staying in the same table\n");
 VAR_9->stay_in_tbl = 1;
 if (VAR_8) {
  VAR_9->table_count_limit = VAR_2;
  VAR_9->max_failure_limit = VAR_0;
  VAR_9->max_success_limit = VAR_1;
 } else {
  VAR_9->table_count_limit = VAR_5;
  VAR_9->max_failure_limit = VAR_3;
  VAR_9->max_success_limit = VAR_4;
 }
 VAR_9->table_count = 0;
 VAR_9->total_failed = 0;
 VAR_9->total_success = 0;
 VAR_9->flush_timer = VAR_6;
 VAR_9->action_counter = 0;
}
