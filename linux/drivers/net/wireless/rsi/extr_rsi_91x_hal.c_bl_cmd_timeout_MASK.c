
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct rsi_hw {int blcmd_timer_expired; int bl_cmd_timer; } ;


 struct rsi_hw* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct rsi_hw* FUNC_1 (int ,struct timer_list*,int ) ;

__attribute__((used)) static void FUNC_2(struct timer_list *VAR_2)
{
 struct rsi_hw *VAR_3 = FUNC_1(VAR_3, VAR_2, VAR_1);

 VAR_3->blcmd_timer_expired = 1;
 FUNC_0(&VAR_3->bl_cmd_timer);
}
