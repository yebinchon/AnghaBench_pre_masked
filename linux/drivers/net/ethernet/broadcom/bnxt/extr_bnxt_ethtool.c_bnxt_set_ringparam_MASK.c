
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_ringparam {scalar_t__ rx_pending; scalar_t__ tx_pending; } ;
struct bnxt {scalar_t__ rx_ring_size; scalar_t__ tx_ring_size; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct bnxt*,int,int) ;
 int FUNC_1 (struct bnxt*,int,int) ;
 int FUNC_2 (struct bnxt*) ;
 struct bnxt* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_4,
         struct ethtool_ringparam *VAR_5)
{
 struct bnxt *VAR_6 = FUNC_3(VAR_4);

 if ((VAR_5->rx_pending > VAR_0) ||
     (VAR_5->tx_pending > VAR_1) ||
     (VAR_5->tx_pending <= VAR_3))
  return -VAR_2;

 if (FUNC_4(VAR_4))
  FUNC_0(VAR_6, 0, 0);

 VAR_6->rx_ring_size = VAR_5->rx_pending;
 VAR_6->tx_ring_size = VAR_5->tx_pending;
 FUNC_2(VAR_6);

 if (FUNC_4(VAR_4))
  return FUNC_1(VAR_6, 0, 0);

 return 0;
}
