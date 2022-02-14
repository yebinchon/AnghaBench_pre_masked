
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gru_thread_state {scalar_t__ ts_gru; } ;
struct gru_blade_state {int bs_kgts_sema; struct gru_thread_state* bs_kgts; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 struct gru_blade_state** VAR_1 ;
 int FUNC_1 (struct gru_thread_state*,int ) ;
 int FUNC_2 (struct gru_thread_state*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(void)
{
 struct gru_blade_state *VAR_2;
 struct gru_thread_state *VAR_3;
 int VAR_4, VAR_5 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_2 = VAR_1[VAR_4];
  if (!VAR_2)
   continue;


  if (FUNC_0(&VAR_2->bs_kgts_sema)) {
   VAR_3 = VAR_2->bs_kgts;
   if (VAR_3 && VAR_3->ts_gru)
    FUNC_1(VAR_3, 0);
   VAR_2->bs_kgts = ((void*)0);
   FUNC_3(&VAR_2->bs_kgts_sema);
   FUNC_2(VAR_3);
  } else {
   VAR_5++;
  }
 }
 return VAR_5;
}
