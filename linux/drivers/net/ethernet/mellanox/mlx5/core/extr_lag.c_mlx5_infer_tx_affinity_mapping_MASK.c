
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct lag_tracker {TYPE_1__* netdev_state; } ;
struct TYPE_2__ {int link_up; int tx_enabled; } ;



__attribute__((used)) static void FUNC_0(struct lag_tracker *VAR_0,
        u8 *VAR_1, u8 *VAR_2)
{
 *VAR_1 = 1;
 *VAR_2 = 2;
 if (!VAR_0->netdev_state[0].tx_enabled ||
     !VAR_0->netdev_state[0].link_up) {
  *VAR_1 = 2;
  return;
 }

 if (!VAR_0->netdev_state[1].tx_enabled ||
     !VAR_0->netdev_state[1].link_up)
  *VAR_2 = 1;
}
