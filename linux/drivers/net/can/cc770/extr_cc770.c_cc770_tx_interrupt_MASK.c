
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct net_device_stats {int tx_packets; int tx_bytes; int rx_errors; int rx_over_errors; } ;
struct net_device {struct net_device_stats stats; } ;
struct cc770_priv {TYPE_2__* tx_skb; } ;
struct can_frame {scalar_t__ can_dlc; } ;
struct TYPE_4__ {scalar_t__ data; } ;
struct TYPE_3__ {int ctrl1; int ctrl0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (TYPE_2__*,struct net_device*,int ) ;
 int FUNC_2 (struct cc770_priv*,int ) ;
 int FUNC_3 (struct net_device*,unsigned int,int) ;
 int FUNC_4 (struct net_device*,unsigned int) ;
 int FUNC_5 (struct cc770_priv*,int ,int) ;
 TYPE_1__* VAR_10 ;
 int FUNC_6 (struct net_device*,char*) ;
 struct cc770_priv* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 unsigned int FUNC_9 (unsigned int) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(struct net_device *VAR_11, unsigned int VAR_12)
{
 struct cc770_priv *VAR_13 = FUNC_7(VAR_11);
 struct net_device_stats *VAR_14 = &VAR_11->stats;
 unsigned int VAR_15 = FUNC_9(VAR_12);
 struct can_frame *VAR_16;
 u8 VAR_17;

 VAR_17 = FUNC_2(VAR_13, VAR_10[VAR_15].ctrl1);

 FUNC_5(VAR_13, VAR_10[VAR_15].ctrl0,
   VAR_3 | VAR_8 | VAR_7 | VAR_0);
 FUNC_5(VAR_13, VAR_10[VAR_15].ctrl1,
   VAR_6 | VAR_9 | VAR_1 | VAR_4);

 if (FUNC_10(!VAR_13->tx_skb)) {
  FUNC_6(VAR_11, "missing tx skb in tx interrupt\n");
  return;
 }

 if (FUNC_10(VAR_17 & VAR_2)) {
  VAR_14->rx_over_errors++;
  VAR_14->rx_errors++;
 }







 if (FUNC_10(VAR_17 & VAR_5)) {
  FUNC_3(VAR_11, VAR_15, VAR_17);
  FUNC_4(VAR_11, VAR_15);
  return;
 }

 VAR_16 = (struct can_frame *)VAR_13->tx_skb->data;
 VAR_14->tx_bytes += VAR_16->can_dlc;
 VAR_14->tx_packets++;

 FUNC_1(VAR_13->tx_skb, VAR_11, 0);
 FUNC_0(VAR_11, 0);
 VAR_13->tx_skb = ((void*)0);

 FUNC_8(VAR_11);
}
