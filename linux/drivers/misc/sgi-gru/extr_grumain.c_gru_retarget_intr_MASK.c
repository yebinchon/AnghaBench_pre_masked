
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gru_thread_state {scalar_t__ ts_tlb_int_select; } ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct gru_thread_state*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(struct gru_thread_state *VAR_1)
{
 if (VAR_1->ts_tlb_int_select < 0
     || VAR_1->ts_tlb_int_select == FUNC_0())
  return 0;

 FUNC_1(VAR_0, "retarget from %d to %d\n", VAR_1->ts_tlb_int_select,
  FUNC_0());
 return FUNC_2(VAR_1);
}
