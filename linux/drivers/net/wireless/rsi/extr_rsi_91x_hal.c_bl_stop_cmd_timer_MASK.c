
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsi_hw {int blcmd_timer_expired; int bl_cmd_timer; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct rsi_hw *VAR_0)
{
 VAR_0->blcmd_timer_expired = 0;
 if (FUNC_1(&VAR_0->bl_cmd_timer))
  FUNC_0(&VAR_0->bl_cmd_timer);

 return 0;
}
