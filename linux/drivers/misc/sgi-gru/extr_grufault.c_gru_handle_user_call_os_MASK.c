
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gru_tlb_fault_handle {int dummy; } ;
struct gru_thread_state {int ts_cbr_au_count; int ts_ctxnum; TYPE_1__* ts_gru; scalar_t__ ts_force_cch_reload; } ;
struct TYPE_2__ {int gs_gid; int gs_gru_base_vaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int ,int ,int) ;
 struct gru_tlb_fault_handle* FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (struct gru_thread_state*) ;
 int FUNC_5 (int ,char*,unsigned long,int,struct gru_thread_state*) ;
 struct gru_thread_state* FUNC_6 (unsigned long) ;
 int FUNC_7 (struct gru_thread_state*) ;
 int FUNC_8 (struct gru_thread_state*) ;
 int FUNC_9 (struct gru_thread_state*,struct gru_tlb_fault_handle*,void*) ;
 int VAR_6 ;
 int FUNC_10 (struct gru_thread_state*,int) ;

int FUNC_11(unsigned long VAR_7)
{
 struct gru_tlb_fault_handle *VAR_8;
 struct gru_thread_state *VAR_9;
 void *VAR_10;
 int VAR_11, VAR_12, VAR_13 = -VAR_1;

 FUNC_0(VAR_5);


 VAR_11 = FUNC_1((void *)VAR_7);
 if ((VAR_7 & (VAR_3 - 1)) || VAR_11 >= VAR_4)
  return -VAR_1;

 VAR_9 = FUNC_6(VAR_7);
 if (!VAR_9)
  return -VAR_1;
 FUNC_5(VAR_6, "address 0x%lx, gid %d, gts 0x%p\n", VAR_7, VAR_9->ts_gru ? VAR_9->ts_gru->gs_gid : -1, VAR_9);

 if (VAR_11 >= VAR_9->ts_cbr_au_count * VAR_2)
  goto exit;

 FUNC_4(VAR_9);




 if (VAR_9->ts_gru && VAR_9->ts_force_cch_reload) {
  VAR_9->ts_force_cch_reload = 0;
  FUNC_8(VAR_9);
 }

 VAR_13 = -VAR_0;
 VAR_12 = FUNC_10(VAR_9, VAR_11);
 if (VAR_9->ts_gru) {
  VAR_8 = FUNC_3(VAR_9->ts_gru, VAR_12);
  VAR_10 = FUNC_2(VAR_9->ts_gru->gs_gru_base_vaddr,
    VAR_9->ts_ctxnum, VAR_11);
  VAR_13 = FUNC_9(VAR_9, VAR_8, VAR_10);
 }
exit:
 FUNC_7(VAR_9);
 return VAR_13;
}
