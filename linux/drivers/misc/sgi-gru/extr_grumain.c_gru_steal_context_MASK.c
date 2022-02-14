
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int context_stolen; } ;
struct gru_thread_state {int ts_user_blade_id; int ts_cbr_au_count; int ts_dsr_au_count; int ts_steal_jiffies; TYPE_1__ ustats; } ;
struct gru_state {int gs_dsr_map; int gs_cbr_map; int gs_gid; int gs_lock; struct gru_thread_state** gs_gts; } ;
struct gru_blade_state {int bs_lru_ctxnum; int bs_lock; struct gru_state* bs_lru_gru; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct gru_state*,int,int,int) ;
 struct gru_blade_state** VAR_1 ;
 scalar_t__ FUNC_2 (struct gru_state*,struct gru_thread_state*) ;
 int FUNC_3 (int ,char*,int ,int,struct gru_thread_state*,int,int,int ,int ) ;
 int FUNC_4 (struct gru_thread_state*,int) ;
 int VAR_2 ;
 int FUNC_5 (struct gru_thread_state*,struct gru_blade_state*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct gru_thread_state*,struct gru_blade_state*) ;
 scalar_t__ FUNC_8 (struct gru_thread_state*) ;
 int VAR_3 ;
 int FUNC_9 (int) ;
 struct gru_state* FUNC_10 (struct gru_blade_state*,struct gru_state*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int VAR_4 ;
 int FUNC_13 () ;

void FUNC_14(struct gru_thread_state *VAR_5)
{
 struct gru_blade_state *VAR_6;
 struct gru_state *VAR_7, *VAR_8;
 struct gru_thread_state *VAR_9 = ((void*)0);
 int VAR_10, VAR_11, VAR_12 = 0, VAR_13, VAR_14;
 int VAR_15;

 VAR_15 = VAR_5->ts_user_blade_id;
 if (VAR_15 < 0)
  VAR_15 = FUNC_13();
 VAR_13 = VAR_5->ts_cbr_au_count;
 VAR_14 = VAR_5->ts_dsr_au_count;

 VAR_6 = VAR_1[VAR_15];
 FUNC_11(&VAR_6->bs_lock);

 VAR_10 = FUNC_9(VAR_6->bs_lru_ctxnum);
 VAR_7 = VAR_6->bs_lru_gru;
 if (VAR_10 == 0)
  VAR_7 = FUNC_10(VAR_6, VAR_7);
 VAR_6->bs_lru_gru = VAR_7;
 VAR_6->bs_lru_ctxnum = VAR_10;
 VAR_11 = VAR_10;
 VAR_8 = VAR_7;
 while (1) {
  if (FUNC_2(VAR_7, VAR_5)) {
   if (FUNC_1(VAR_7, VAR_13, VAR_14, VAR_0))
    break;
   FUNC_11(&VAR_7->gs_lock);
   for (; VAR_10 < VAR_0; VAR_10++) {
    if (VAR_12 && VAR_7 == VAR_8 && VAR_10 == VAR_11)
     break;
    VAR_9 = VAR_7->gs_gts[VAR_10];






    if (VAR_9 && FUNC_7(VAR_9, VAR_6))
     break;
    VAR_9 = ((void*)0);
   }
   FUNC_12(&VAR_7->gs_lock);
   if (VAR_9 || (VAR_12 && VAR_7 == VAR_8 && VAR_10 == VAR_11))
    break;
  }
  if (VAR_12 && VAR_7 == VAR_8)
   break;
  VAR_12 = 1;
  VAR_10 = 0;
  VAR_7 = FUNC_10(VAR_6, VAR_7);
 }
 FUNC_12(&VAR_6->bs_lock);

 if (VAR_9) {
  VAR_5->ustats.context_stolen++;
  VAR_9->ts_steal_jiffies = VAR_3;
  FUNC_4(VAR_9, FUNC_8(VAR_9) ? 0 : 1);
  FUNC_5(VAR_9, VAR_6);
 } else {
  FUNC_0(VAR_4);
 }
 FUNC_3(VAR_2,
  "stole gid %d, ctxnum %d from gts %p. Need cb %d, ds %d;"
  " avail cb %ld, ds %ld\n",
  VAR_7->gs_gid, VAR_10, VAR_9, VAR_13, VAR_14, FUNC_6(VAR_7->gs_cbr_map),
  FUNC_6(VAR_7->gs_dsr_map));
}
