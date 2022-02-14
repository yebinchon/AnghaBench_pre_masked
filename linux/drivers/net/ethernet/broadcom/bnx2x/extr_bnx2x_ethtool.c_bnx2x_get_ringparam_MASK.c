
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_ringparam {int rx_max_pending; int rx_pending; int tx_pending; int tx_max_pending; } ;
struct bnx2x {int rx_ring_size; int tx_ring_size; } ;


 int FUNC_0 (struct bnx2x*) ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct bnx2x* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_2,
    struct ethtool_ringparam *VAR_3)
{
 struct bnx2x *VAR_4 = FUNC_2(VAR_2);

 VAR_3->rx_max_pending = VAR_0;







 if (VAR_4->rx_ring_size)
  VAR_3->rx_pending = VAR_4->rx_ring_size;
 else if (FUNC_0(VAR_4))
  VAR_3->rx_pending = VAR_0 / FUNC_0(VAR_4);
 else
  VAR_3->rx_pending = VAR_0;

 VAR_3->tx_max_pending = FUNC_1(VAR_4) ? 0 : VAR_1;
 VAR_3->tx_pending = VAR_4->tx_ring_size;
}
