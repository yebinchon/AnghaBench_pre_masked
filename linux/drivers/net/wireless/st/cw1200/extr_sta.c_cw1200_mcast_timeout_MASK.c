
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct cw1200_common {int tx_multicast; int ps_state_lock; scalar_t__ buffered_multicasts; scalar_t__ aid0_bit_set; TYPE_1__* hw; } ;
struct TYPE_2__ {int wiphy; } ;


 int FUNC_0 (struct cw1200_common*) ;
 struct cw1200_common* FUNC_1 (int ,struct timer_list*,int ) ;
 int VAR_0 ;
 struct cw1200_common* VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*) ;

void FUNC_5(struct timer_list *VAR_2)
{
 struct cw1200_common *VAR_3 = FUNC_1(VAR_3, VAR_2, VAR_0);

 FUNC_4(VAR_3->hw->wiphy,
     "Multicast delivery timeout.\n");
 FUNC_2(&VAR_3->ps_state_lock);
 VAR_3->tx_multicast = VAR_3->aid0_bit_set &&
   VAR_3->buffered_multicasts;
 if (VAR_3->tx_multicast)
  FUNC_0(VAR_3);
 FUNC_3(&VAR_3->ps_state_lock);
}
