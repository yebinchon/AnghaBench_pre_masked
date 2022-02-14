
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device_stats {int tx_errors; int tx_bytes; int tx_packets; } ;
struct net_device {struct net_device_stats stats; } ;
struct esd_usb2_net_priv {int active_tx_jobs; struct esd_tx_urb_context* tx_contexts; struct net_device* netdev; } ;
struct TYPE_3__ {int hnd; int status; } ;
struct TYPE_4__ {TYPE_1__ txdone; } ;
struct esd_usb2_msg {TYPE_2__ msg; } ;
struct esd_tx_urb_context {int echo_index; scalar_t__ dlc; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct net_device*,int) ;
 int FUNC_2 (struct net_device*,int) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static void FUNC_5(struct esd_usb2_net_priv *VAR_1,
     struct esd_usb2_msg *VAR_2)
{
 struct net_device_stats *VAR_3 = &VAR_1->netdev->stats;
 struct net_device *VAR_4 = VAR_1->netdev;
 struct esd_tx_urb_context *VAR_5;

 if (!FUNC_3(VAR_4))
  return;

 VAR_5 = &VAR_1->tx_contexts[VAR_2->msg.txdone.hnd & (VAR_0 - 1)];

 if (!VAR_2->msg.txdone.status) {
  VAR_3->tx_packets++;
  VAR_3->tx_bytes += VAR_5->dlc;
  FUNC_2(VAR_4, VAR_5->echo_index);
 } else {
  VAR_3->tx_errors++;
  FUNC_1(VAR_4, VAR_5->echo_index);
 }


 VAR_5->echo_index = VAR_0;
 FUNC_0(&VAR_1->active_tx_jobs);

 FUNC_4(VAR_4);
}
