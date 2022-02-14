
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct i40e_pf {scalar_t__ service_timer_period; int service_timer; } ;


 struct i40e_pf* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (struct i40e_pf*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *,int ) ;
 struct i40e_pf* VAR_1 ;
 int FUNC_3 (scalar_t__) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_3)
{
 struct i40e_pf *VAR_4 = FUNC_0(VAR_4, VAR_3, VAR_2);

 FUNC_2(&VAR_4->service_timer,
    FUNC_3(VAR_0 + VAR_4->service_timer_period));
 FUNC_1(VAR_4);
}
