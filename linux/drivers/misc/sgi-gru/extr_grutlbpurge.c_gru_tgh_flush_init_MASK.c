
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gru_state {int gs_tgh_local_shift; int gs_tgh_first_remote; int gs_blade_id; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct gru_state *VAR_1)
{
 int VAR_2, VAR_3 = 0, VAR_4;

 VAR_2 = FUNC_2(VAR_1->gs_blade_id);


 if (VAR_2) {
  VAR_4 = 1 << FUNC_0(VAR_2 - 1);







  VAR_3 = FUNC_1(0, FUNC_0(VAR_4 - 1) - FUNC_0(VAR_0 - 1));
 }
 VAR_1->gs_tgh_local_shift = VAR_3;


 VAR_1->gs_tgh_first_remote = (VAR_2 + (1 << VAR_3) - 1) >> VAR_3;

}
