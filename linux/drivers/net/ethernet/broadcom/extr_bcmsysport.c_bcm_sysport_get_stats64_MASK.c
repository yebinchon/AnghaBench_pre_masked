
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtnl_link_stats64 {int rx_bytes; int rx_packets; int tx_packets; int tx_bytes; } ;
struct net_device {int stats; } ;
struct bcm_sysport_stats64 {int rx_bytes; int rx_packets; } ;
struct bcm_sysport_priv {int syncp; struct bcm_sysport_stats64 stats64; } ;


 int FUNC_0 (struct bcm_sysport_priv*,int *,int *) ;
 struct bcm_sysport_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct rtnl_link_stats64*,int *) ;
 unsigned int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_0,
        struct rtnl_link_stats64 *VAR_1)
{
 struct bcm_sysport_priv *VAR_2 = FUNC_1(VAR_0);
 struct bcm_sysport_stats64 *VAR_3 = &VAR_2->stats64;
 unsigned int VAR_4;

 FUNC_2(VAR_1, &VAR_0->stats);

 FUNC_0(VAR_2, &VAR_1->tx_bytes,
        &VAR_1->tx_packets);

 do {
  VAR_4 = FUNC_3(&VAR_2->syncp);
  VAR_1->rx_packets = VAR_3->rx_packets;
  VAR_1->rx_bytes = VAR_3->rx_bytes;
 } while (FUNC_4(&VAR_2->syncp, VAR_4));
}
