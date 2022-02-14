
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gru_thread_state {int ts_ctxlock; } ;
struct gru_blade_state {int bs_kgts_sema; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct gru_thread_state*) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct gru_thread_state *VAR_2,
  struct gru_blade_state *VAR_3)
{
 if (FUNC_1(VAR_2)) {
  FUNC_3(&VAR_3->bs_kgts_sema);
  FUNC_0(VAR_0);
 } else {
  FUNC_2(&VAR_2->ts_ctxlock);
  FUNC_0(VAR_1);
 }
}
