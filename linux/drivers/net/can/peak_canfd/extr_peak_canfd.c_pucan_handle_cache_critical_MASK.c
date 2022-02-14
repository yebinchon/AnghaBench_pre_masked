
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_3__ {int rxerr; int txerr; } ;
struct peak_canfd_priv {TYPE_1__ bec; TYPE_2__* ndev; } ;
struct net_device_stats {int rx_packets; int rx_bytes; int rx_dropped; int rx_errors; int rx_over_errors; } ;
struct can_frame {scalar_t__ can_dlc; int * data; int can_id; } ;
struct TYPE_4__ {struct net_device_stats stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (TYPE_2__*,struct can_frame**) ;
 int FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_2(struct peak_canfd_priv *VAR_3)
{
 struct net_device_stats *VAR_4 = &VAR_3->ndev->stats;
 struct can_frame *VAR_5;
 struct sk_buff *VAR_6;

 VAR_4->rx_over_errors++;
 VAR_4->rx_errors++;

 VAR_6 = FUNC_0(VAR_3->ndev, &VAR_5);
 if (!VAR_6) {
  VAR_4->rx_dropped++;
  return -VAR_2;
 }

 VAR_5->can_id |= VAR_0;
 VAR_5->data[1] = VAR_1;

 VAR_5->data[6] = VAR_3->bec.txerr;
 VAR_5->data[7] = VAR_3->bec.rxerr;

 VAR_4->rx_bytes += VAR_5->can_dlc;
 VAR_4->rx_packets++;
 FUNC_1(VAR_6);

 return 0;
}
