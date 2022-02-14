
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gru_thread_state {scalar_t__ ts_gms; int ts_refcnt; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_3 (struct gru_thread_state*) ;

void FUNC_4(struct gru_thread_state *VAR_1)
{
 if (VAR_1 && FUNC_1(&VAR_1->ts_refcnt) == 0) {
  if (VAR_1->ts_gms)
   FUNC_2(VAR_1->ts_gms);
  FUNC_3(VAR_1);
  FUNC_0(VAR_0);
 }
}
