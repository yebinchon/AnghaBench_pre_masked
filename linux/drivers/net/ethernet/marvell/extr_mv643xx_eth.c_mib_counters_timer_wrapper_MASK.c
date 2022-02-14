
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct mv643xx_eth_private {int mib_counters_timer; } ;


 int VAR_0 ;
 struct mv643xx_eth_private* FUNC_0 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct mv643xx_eth_private*) ;
 int FUNC_2 (int *,scalar_t__) ;
 struct mv643xx_eth_private* VAR_3 ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_4)
{
 struct mv643xx_eth_private *VAR_5 = FUNC_0(VAR_5, VAR_4, VAR_2);
 FUNC_1(VAR_5);
 FUNC_2(&VAR_5->mib_counters_timer, VAR_1 + 30 * VAR_0);
}
