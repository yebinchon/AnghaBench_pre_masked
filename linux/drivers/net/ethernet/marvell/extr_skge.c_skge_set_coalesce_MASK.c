
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct skge_port {int port; struct skge_hw* hw; } ;
struct skge_hw {int dummy; } ;
struct net_device {int dummy; } ;
struct ethtool_coalesce {int rx_coalesce_usecs; int tx_coalesce_usecs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int) ;
 struct skge_port* FUNC_1 (struct net_device*) ;
 int* VAR_6 ;
 int FUNC_2 (struct skge_hw*,int ) ;
 int FUNC_3 (struct skge_hw*,int) ;
 int FUNC_4 (struct skge_hw*,int ,int) ;
 int* VAR_7 ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_8,
        struct ethtool_coalesce *VAR_9)
{
 struct skge_port *VAR_10 = FUNC_1(VAR_8);
 struct skge_hw *VAR_11 = VAR_10->hw;
 int VAR_12 = VAR_10->port;
 u32 VAR_13 = FUNC_2(VAR_11, VAR_2);
 u32 VAR_14 = 25;

 if (VAR_9->rx_coalesce_usecs == 0)
  VAR_13 &= ~VAR_6[VAR_12];
 else if (VAR_9->rx_coalesce_usecs < 25 ||
   VAR_9->rx_coalesce_usecs > 33333)
  return -VAR_3;
 else {
  VAR_13 |= VAR_6[VAR_12];
  VAR_14 = VAR_9->rx_coalesce_usecs;
 }

 if (VAR_9->tx_coalesce_usecs == 0)
  VAR_13 &= ~VAR_7[VAR_12];
 else if (VAR_9->tx_coalesce_usecs < 25 ||
   VAR_9->tx_coalesce_usecs > 33333)
  return -VAR_3;
 else {
  VAR_13 |= VAR_7[VAR_12];
  VAR_14 = FUNC_0(VAR_14, VAR_9->rx_coalesce_usecs);
 }

 FUNC_4(VAR_11, VAR_2, VAR_13);
 if (VAR_13 == 0)
  FUNC_4(VAR_11, VAR_0, VAR_5);
 else {
  FUNC_4(VAR_11, VAR_1, FUNC_3(VAR_11, VAR_14));
  FUNC_4(VAR_11, VAR_0, VAR_4);
 }
 return 0;
}
