
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct sxgbe_priv_data {int eee_ctrl_timer; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct sxgbe_priv_data* FUNC_1 (int ,struct timer_list*,int ) ;
 int FUNC_2 (int *,int ) ;
 struct sxgbe_priv_data* VAR_2 ;
 int FUNC_3 (struct sxgbe_priv_data*) ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_3)
{
 struct sxgbe_priv_data *VAR_4 = FUNC_1(VAR_4, VAR_3, VAR_0);

 FUNC_3(VAR_4);
 FUNC_2(&VAR_4->eee_ctrl_timer, FUNC_0(VAR_1));
}
