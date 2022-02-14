
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
 struct skge_port* FUNC_0 (struct net_device*) ;
 int* VAR_4 ;
 int FUNC_1 (struct skge_hw*,int) ;
 int FUNC_2 (struct skge_hw*,int ) ;
 int* VAR_5 ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_6,
        struct ethtool_coalesce *VAR_7)
{
 struct skge_port *VAR_8 = FUNC_0(VAR_6);
 struct skge_hw *VAR_9 = VAR_8->hw;
 int VAR_10 = VAR_8->port;

 VAR_7->rx_coalesce_usecs = 0;
 VAR_7->tx_coalesce_usecs = 0;

 if (FUNC_2(VAR_9, VAR_0) & VAR_3) {
  u32 VAR_11 = FUNC_1(VAR_9, FUNC_2(VAR_9, VAR_1));
  u32 VAR_12 = FUNC_2(VAR_9, VAR_2);

  if (VAR_12 & VAR_4[VAR_10])
   VAR_7->rx_coalesce_usecs = VAR_11;
  if (VAR_12 & VAR_5[VAR_10])
   VAR_7->tx_coalesce_usecs = VAR_11;
 }

 return 0;
}
