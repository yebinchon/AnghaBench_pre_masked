
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtnl_link_stats64 {int tx_packets; int tx_bytes; } ;
struct netdevsim {int tx_packets; int tx_bytes; int syncp; } ;
struct net_device {int dummy; } ;


 struct netdevsim* FUNC_0 (struct net_device*) ;
 unsigned int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,unsigned int) ;

__attribute__((used)) static void
FUNC_3(struct net_device *VAR_0, struct rtnl_link_stats64 *VAR_1)
{
 struct netdevsim *VAR_2 = FUNC_0(VAR_0);
 unsigned int VAR_3;

 do {
  VAR_3 = FUNC_1(&VAR_2->syncp);
  VAR_1->tx_bytes = VAR_2->tx_bytes;
  VAR_1->tx_packets = VAR_2->tx_packets;
 } while (FUNC_2(&VAR_2->syncp, VAR_3));
}
