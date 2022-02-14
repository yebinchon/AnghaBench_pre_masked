
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gru_thread_state {int ts_ctxnum; scalar_t__ ts_user_options; void* ts_tlb_int_select; int ts_sizeavail; struct gru_state* ts_gru; } ;
struct gru_state {struct gru_thread_state** gs_gts; int gs_gru_base_vaddr; } ;
struct gru_context_configuration_handle {scalar_t__ state; int tfm_fault_bit_enable; void* tlb_int_select; int * sizeavail; } ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct gru_context_configuration_handle*) ;
 scalar_t__ FUNC_2 (struct gru_context_configuration_handle*) ;
 struct gru_context_configuration_handle* FUNC_3 (int ,int) ;
 void* FUNC_4 () ;
 int FUNC_5 (struct gru_context_configuration_handle*) ;
 int FUNC_6 (struct gru_context_configuration_handle*) ;

int FUNC_7(struct gru_thread_state *VAR_3)
{
 struct gru_context_configuration_handle *VAR_4;
 struct gru_state *VAR_5 = VAR_3->ts_gru;
 int VAR_6, VAR_7 = VAR_3->ts_ctxnum, VAR_8 = 0;

 VAR_4 = FUNC_3(VAR_5->gs_gru_base_vaddr, VAR_7);

 FUNC_5(VAR_4);
 if (VAR_4->state == VAR_0) {
  if (VAR_5->gs_gts[VAR_3->ts_ctxnum] != VAR_3)
   goto exit;
  if (FUNC_1(VAR_4))
   FUNC_0();
  for (VAR_6 = 0; VAR_6 < 8; VAR_6++)
   VAR_4->sizeavail[VAR_6] = VAR_3->ts_sizeavail;
  VAR_3->ts_tlb_int_select = FUNC_4();
  VAR_4->tlb_int_select = FUNC_4();
  VAR_4->tfm_fault_bit_enable =
    (VAR_3->ts_user_options == VAR_2
      || VAR_3->ts_user_options == VAR_1);
  if (FUNC_2(VAR_4))
   FUNC_0();
  VAR_8 = 1;
 }
exit:
 FUNC_6(VAR_4);
 return VAR_8;
}
