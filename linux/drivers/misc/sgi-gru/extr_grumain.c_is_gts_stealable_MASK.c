
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gru_thread_state {int ts_ctxlock; } ;
struct gru_blade_state {int bs_kgts_sema; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct gru_thread_state*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct gru_thread_state *VAR_0,
  struct gru_blade_state *VAR_1)
{
 if (FUNC_1(VAR_0))
  return FUNC_0(&VAR_1->bs_kgts_sema);
 else
  return FUNC_2(&VAR_0->ts_ctxlock);
}
