
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wsm_suspend_resume {scalar_t__ stop; int link_id; scalar_t__ multicast; } ;
struct cw1200_common {int tx_multicast; int join_dtim_period; int beacon_int; int ps_state_lock; int mcast_timeout; scalar_t__ buffered_multicasts; scalar_t__ aid0_bit_set; int pm_state; } ;


 int VAR_0 ;
 int FUNC_0 (struct cw1200_common*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct cw1200_common*,int ,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char*,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct cw1200_common *VAR_1,
     struct wsm_suspend_resume *VAR_2)
{
 FUNC_4("[AP] %s: %s\n",
   VAR_2->stop ? "stop" : "start",
   VAR_2->multicast ? "broadcast" : "unicast");

 if (VAR_2->multicast) {
  bool VAR_3 = 0;
  FUNC_5(&VAR_1->ps_state_lock);
  if (VAR_2->stop) {
   VAR_1->tx_multicast = 0;
  } else {





   FUNC_1(&VAR_1->pm_state,
          VAR_1->join_dtim_period *
          (VAR_1->beacon_int + 20) * VAR_0 / 1024);
   VAR_1->tx_multicast = (VAR_1->aid0_bit_set &&
           VAR_1->buffered_multicasts);
   if (VAR_1->tx_multicast) {
    VAR_3 = 1;
    FUNC_0(VAR_1);
   }
  }
  FUNC_6(&VAR_1->ps_state_lock);
  if (VAR_3)
   FUNC_3(&VAR_1->mcast_timeout);
 } else {
  FUNC_5(&VAR_1->ps_state_lock);
  FUNC_2(VAR_1, VAR_2->link_id, VAR_2->stop);
  FUNC_6(&VAR_1->ps_state_lock);
  if (!VAR_2->stop)
   FUNC_0(VAR_1);
 }
 return;
}
