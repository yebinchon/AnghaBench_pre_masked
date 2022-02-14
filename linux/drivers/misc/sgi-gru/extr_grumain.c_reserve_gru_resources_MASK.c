
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gru_thread_state {int ts_dsr_au_count; int ts_dsr_map; int ts_cbr_idx; int ts_cbr_au_count; int ts_cbr_map; } ;
struct gru_state {int gs_active_contexts; } ;


 int FUNC_0 (struct gru_state*,int ,int ) ;
 int FUNC_1 (struct gru_state*,int ,int *) ;

__attribute__((used)) static void FUNC_2(struct gru_state *VAR_0,
      struct gru_thread_state *VAR_1)
{
 VAR_0->gs_active_contexts++;
 VAR_1->ts_cbr_map =
     FUNC_0(VAR_0, VAR_1->ts_cbr_au_count,
         VAR_1->ts_cbr_idx);
 VAR_1->ts_dsr_map =
     FUNC_1(VAR_0, VAR_1->ts_dsr_au_count, ((void*)0));
}
