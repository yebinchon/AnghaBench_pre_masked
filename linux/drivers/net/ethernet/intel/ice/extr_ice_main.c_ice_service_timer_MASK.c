
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct ice_pf {scalar_t__ serv_tmr_period; int serv_tmr; } ;


 struct ice_pf* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (struct ice_pf*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *,int ) ;
 struct ice_pf* VAR_1 ;
 int FUNC_3 (scalar_t__) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_3)
{
 struct ice_pf *VAR_4 = FUNC_0(VAR_4, VAR_3, VAR_2);

 FUNC_2(&VAR_4->serv_tmr, FUNC_3(VAR_4->serv_tmr_period + VAR_0));
 FUNC_1(VAR_4);
}
