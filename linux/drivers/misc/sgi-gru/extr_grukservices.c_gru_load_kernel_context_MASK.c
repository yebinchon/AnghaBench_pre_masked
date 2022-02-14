
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gru_thread_state {int ts_user_blade_id; int ts_ctxnum; struct gru_state* ts_gru; int ts_dsr_au_count; int ts_cbr_au_count; } ;
struct gru_state {void* gs_gru_base_vaddr; } ;
struct gru_blade_state {int bs_kgts_sema; int kernel_dsr; int kernel_cb; struct gru_thread_state* bs_kgts; scalar_t__ bs_async_dsr_bytes; scalar_t__ bs_async_cbrs; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct gru_thread_state*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (void*,int,int ) ;
 int FUNC_7 (void*,int,int ) ;
 struct gru_thread_state* FUNC_8 (int *,int ,int ,int ,int ,int ) ;
 int FUNC_9 (struct gru_thread_state*) ;
 int FUNC_10 (struct gru_thread_state*) ;
 int FUNC_11 (struct gru_thread_state*) ;
 int VAR_2 ;
 int FUNC_12 (int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int) ;

__attribute__((used)) static void FUNC_15(struct gru_blade_state *VAR_3, int VAR_4)
{
 struct gru_state *VAR_5;
 struct gru_thread_state *VAR_6;
 void *VAR_7;
 int VAR_8, VAR_9;

 FUNC_13(&VAR_3->bs_kgts_sema);
 FUNC_4(&VAR_3->bs_kgts_sema);

 if (!VAR_3->bs_kgts) {
  do {
   VAR_3->bs_kgts = FUNC_8(((void*)0), 0, 0, 0, 0, 0);
   if (!FUNC_2(VAR_3->bs_kgts))
    break;
   FUNC_12(1);
  } while (1);
  VAR_3->bs_kgts->ts_user_blade_id = VAR_4;
 }
 VAR_6 = VAR_3->bs_kgts;

 if (!VAR_6->ts_gru) {
  FUNC_3(VAR_2);
  VAR_9 = FUNC_14(VAR_4);
  VAR_6->ts_cbr_au_count = FUNC_0(
   VAR_0 * VAR_9 + VAR_3->bs_async_cbrs);
  VAR_6->ts_dsr_au_count = FUNC_1(
   VAR_1 * VAR_9 +
    VAR_3->bs_async_dsr_bytes);
  while (!FUNC_9(VAR_6)) {
   FUNC_12(1);
   FUNC_11(VAR_6);
  }
  FUNC_10(VAR_6);
  VAR_5 = VAR_3->bs_kgts->ts_gru;
  VAR_7 = VAR_5->gs_gru_base_vaddr;
  VAR_8 = VAR_6->ts_ctxnum;
  VAR_3->kernel_cb = FUNC_6(VAR_7, VAR_8, 0);
  VAR_3->kernel_dsr = FUNC_7(VAR_7, VAR_8, 0);
 }
 FUNC_5(&VAR_3->bs_kgts_sema);
}
