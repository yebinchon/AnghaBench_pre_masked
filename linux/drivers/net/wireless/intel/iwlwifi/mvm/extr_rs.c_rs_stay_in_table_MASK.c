
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_scale_tbl_info {int column; } ;
struct iwl_mvm {int dummy; } ;
struct TYPE_2__ {struct iwl_mvm* drv; } ;
struct iwl_lq_sta {int active_tbl; scalar_t__ rs_state; scalar_t__ table_count; scalar_t__ table_count_limit; int visited_columns; scalar_t__ flush_timer; int total_success; int total_failed; int search_better_tbl; int max_success_limit; int max_failure_limit; struct iwl_scale_tbl_info* lq_info; TYPE_1__ pers; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct iwl_mvm*,char*,...) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct iwl_mvm*,struct iwl_scale_tbl_info*) ;
 int FUNC_3 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct iwl_lq_sta *VAR_5, bool VAR_6)
{
 struct iwl_scale_tbl_info *VAR_7;
 int VAR_8;
 int VAR_9 = 0;
 struct iwl_mvm *VAR_10;

 VAR_10 = VAR_5->pers.drv;
 VAR_8 = VAR_5->active_tbl;

 VAR_7 = &(VAR_5->lq_info[VAR_8]);


 if (VAR_5->rs_state == VAR_3) {

  if (VAR_5->flush_timer)
   VAR_9 =
    FUNC_3(VAR_4,
        (unsigned long)(VAR_5->flush_timer +
          (VAR_1 * VAR_0)));
  if (VAR_6 ||
      (VAR_5->total_failed > VAR_5->max_failure_limit) ||
      (VAR_5->total_success > VAR_5->max_success_limit) ||
      ((!VAR_5->search_better_tbl) &&
       (VAR_5->flush_timer) && (VAR_9))) {
   FUNC_1(VAR_10,
           "LQ: stay is expired %d %d %d\n",
         VAR_5->total_failed,
         VAR_5->total_success,
         VAR_9);


   VAR_5->rs_state = VAR_2;
   FUNC_1(VAR_10,
           "Moving to RS_STATE_SEARCH_CYCLE_STARTED\n");
   VAR_5->total_failed = 0;
   VAR_5->total_success = 0;
   VAR_5->flush_timer = 0;

   VAR_5->visited_columns = FUNC_0(VAR_7->column);






  } else {
   VAR_5->table_count++;
   if (VAR_5->table_count >=
       VAR_5->table_count_limit) {
    VAR_5->table_count = 0;

    FUNC_1(VAR_10,
            "LQ: stay in table clear win\n");
    FUNC_2(VAR_10, VAR_7);
   }
  }




  if (VAR_5->rs_state == VAR_2) {
   FUNC_2(VAR_10, VAR_7);
  }
 }
}
