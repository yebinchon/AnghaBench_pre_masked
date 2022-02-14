
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct il_scale_tbl_info {int * win; } ;
struct il_priv {int dummy; } ;
struct il_lq_sta {int active_tbl; scalar_t__ total_failed; scalar_t__ max_failure_limit; scalar_t__ total_success; scalar_t__ max_success_limit; scalar_t__ table_count; scalar_t__ table_count_limit; scalar_t__ stay_in_tbl; scalar_t__ flush_timer; int search_better_tbl; struct il_scale_tbl_info* lq_info; struct il_priv* drv; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (int ,unsigned long) ;

__attribute__((used)) static void
FUNC_3(struct il_lq_sta *VAR_3, bool VAR_4)
{
 struct il_scale_tbl_info *VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8 = 0;
 struct il_priv *VAR_9;

 VAR_9 = VAR_3->drv;
 VAR_7 = VAR_3->active_tbl;

 VAR_5 = &(VAR_3->lq_info[VAR_7]);


 if (VAR_3->stay_in_tbl) {


  if (VAR_3->flush_timer)
   VAR_8 =
       FUNC_2(VAR_2,
           (unsigned long)(VAR_3->flush_timer +
             VAR_1));
  if (VAR_4 ||
      VAR_3->total_failed > VAR_3->max_failure_limit ||
      VAR_3->total_success > VAR_3->max_success_limit ||
      (!VAR_3->search_better_tbl && VAR_3->flush_timer &&
       VAR_8)) {
   FUNC_0("LQ: stay is expired %d %d %d\n",
          VAR_3->total_failed, VAR_3->total_success,
          VAR_8);


   VAR_3->stay_in_tbl = 0;
   VAR_3->total_failed = 0;
   VAR_3->total_success = 0;
   VAR_3->flush_timer = 0;







  } else {
   VAR_3->table_count++;
   if (VAR_3->table_count >= VAR_3->table_count_limit) {
    VAR_3->table_count = 0;

    FUNC_0("LQ: stay in table clear win\n");
    for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
     FUNC_1(&
               (VAR_5->
         win
         [VAR_6]));
   }
  }




  if (!VAR_3->stay_in_tbl) {
   for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
    FUNC_1(&(VAR_5->win[VAR_6]));
  }
 }
}
