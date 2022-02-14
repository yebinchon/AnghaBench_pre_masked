
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct net_device {int dummy; } ;
struct ixgb_desc_ring {scalar_t__ count; } ;
struct TYPE_5__ {scalar_t__ type; } ;
struct TYPE_6__ {TYPE_1__ fc; scalar_t__ link_up; } ;
struct ixgb_adapter {int link_speed; int detect_tx_hung; int watchdog_timer; TYPE_2__ hw; int tx_timeout_task; scalar_t__ link_duplex; struct ixgb_desc_ring tx_ring; struct net_device* netdev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ixgb_desc_ring*) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 struct ixgb_adapter* VAR_4 ;
 struct ixgb_adapter* FUNC_2 (int ,struct timer_list*,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (struct ixgb_adapter*) ;
 scalar_t__ VAR_8 ;
 int FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (struct net_device*,char*,...) ;
 int FUNC_8 (struct net_device*) ;
 scalar_t__ FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (int *) ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_13(struct timer_list *VAR_10)
{
 struct ixgb_adapter *VAR_11 = FUNC_2(VAR_11, VAR_10, VAR_9);
 struct net_device *VAR_12 = VAR_11->netdev;
 struct ixgb_desc_ring *VAR_13 = &VAR_11->tx_ring;

 FUNC_4(&VAR_11->hw);

 if (FUNC_3(&VAR_11->hw)) {

  FUNC_11(VAR_12);
 }

 if (VAR_11->hw.link_up) {
  if (!FUNC_9(VAR_12)) {
   FUNC_7(VAR_12,
        "NIC Link is Up 10 Gbps Full Duplex, Flow Control: %s\n",
        (VAR_11->hw.fc.type == VAR_5) ?
        "RX/TX" :
        (VAR_11->hw.fc.type == VAR_6) ?
         "RX" :
        (VAR_11->hw.fc.type == VAR_7) ?
        "TX" : "None");
   VAR_11->link_speed = 10000;
   VAR_11->link_duplex = VAR_0;
   FUNC_10(VAR_12);
  }
 } else {
  if (FUNC_9(VAR_12)) {
   VAR_11->link_speed = 0;
   VAR_11->link_duplex = 0;
   FUNC_7(VAR_12, "NIC Link is Down\n");
   FUNC_8(VAR_12);
  }
 }

 FUNC_5(VAR_11);

 if (!FUNC_9(VAR_12)) {
  if (FUNC_0(VAR_13) + 1 < VAR_13->count) {




   FUNC_12(&VAR_11->tx_timeout_task);

   return;
  }
 }


 VAR_11->detect_tx_hung = 1;


 FUNC_1(&VAR_11->hw, VAR_2, VAR_3);


 FUNC_6(&VAR_11->watchdog_timer, VAR_8 + 2 * VAR_1);
}
