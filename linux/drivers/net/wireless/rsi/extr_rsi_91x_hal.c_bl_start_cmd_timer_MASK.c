
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {scalar_t__ expires; } ;
struct rsi_hw {int blcmd_timer_expired; TYPE_1__ bl_cmd_timer; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct rsi_hw *VAR_2, u32 VAR_3)
{
 FUNC_2(&VAR_2->bl_cmd_timer, VAR_0, 0);
 VAR_2->bl_cmd_timer.expires = (FUNC_1(VAR_3) + VAR_1);

 VAR_2->blcmd_timer_expired = 0;
 FUNC_0(&VAR_2->bl_cmd_timer);

 return 0;
}
