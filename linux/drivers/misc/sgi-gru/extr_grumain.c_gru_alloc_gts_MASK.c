
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
struct gru_thread_state {int ts_cbr_au_count; int ts_dsr_au_count; unsigned char ts_tlb_preload_count; int ts_user_options; int ts_user_blade_id; int ts_user_chiplet_id; int ts_tsid; int ts_tlb_int_select; int ts_cch_req_slice; struct gru_mm_struct* ts_gms; struct vm_area_struct* ts_vma; int ts_mm; int ts_sizeavail; int ts_ctxnum; int ts_ctxlock; int ts_refcnt; } ;
struct gru_mm_struct {int dummy; } ;
struct TYPE_2__ {int mm; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 struct gru_thread_state* FUNC_2 (struct gru_mm_struct*) ;
 struct gru_thread_state* FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct gru_mm_struct*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int) ;
 TYPE_1__* VAR_4 ;
 int FUNC_8 (int ,char*,struct gru_thread_state*) ;
 struct gru_mm_struct* FUNC_9 () ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (struct gru_thread_state*) ;
 struct gru_thread_state* FUNC_11 (int,int ) ;
 int FUNC_12 (struct gru_thread_state*,int ,int) ;
 int FUNC_13 (int *) ;

struct gru_thread_state *FUNC_14(struct vm_area_struct *VAR_7,
  int VAR_8, int VAR_9,
  unsigned char VAR_10, int VAR_11, int VAR_12)
{
 struct gru_thread_state *VAR_13;
 struct gru_mm_struct *VAR_14;
 int VAR_15;

 VAR_15 = FUNC_1(VAR_9) + FUNC_0(VAR_8);
 VAR_15 += sizeof(struct gru_thread_state);
 VAR_13 = FUNC_11(VAR_15, VAR_1);
 if (!VAR_13)
  return FUNC_3(-VAR_0);

 FUNC_6(VAR_6);
 FUNC_12(VAR_13, 0, sizeof(struct gru_thread_state));
 FUNC_7(&VAR_13->ts_refcnt, 1);
 FUNC_13(&VAR_13->ts_ctxlock);
 VAR_13->ts_cbr_au_count = VAR_8;
 VAR_13->ts_dsr_au_count = VAR_9;
 VAR_13->ts_tlb_preload_count = VAR_10;
 VAR_13->ts_user_options = VAR_11;
 VAR_13->ts_user_blade_id = -1;
 VAR_13->ts_user_chiplet_id = -1;
 VAR_13->ts_tsid = VAR_12;
 VAR_13->ts_ctxnum = VAR_2;
 VAR_13->ts_tlb_int_select = -1;
 VAR_13->ts_cch_req_slice = -1;
 VAR_13->ts_sizeavail = FUNC_4(VAR_3);
 if (VAR_7) {
  VAR_13->ts_mm = VAR_4->mm;
  VAR_13->ts_vma = VAR_7;
  VAR_14 = FUNC_9();
  if (FUNC_5(VAR_14))
   goto err;
  VAR_13->ts_gms = VAR_14;
 }

 FUNC_8(VAR_5, "alloc gts %p\n", VAR_13);
 return VAR_13;

err:
 FUNC_10(VAR_13);
 return FUNC_2(VAR_14);
}
