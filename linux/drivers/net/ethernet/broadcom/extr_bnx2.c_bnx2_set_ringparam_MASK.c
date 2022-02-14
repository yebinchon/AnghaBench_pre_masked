
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_ringparam {int tx_pending; int rx_pending; } ;
struct bnx2 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bnx2*,int ,int ,int) ;
 struct bnx2* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_4, struct ethtool_ringparam *VAR_5)
{
 struct bnx2 *VAR_6 = FUNC_1(VAR_4);
 int VAR_7;

 if ((VAR_5->rx_pending > VAR_0) ||
  (VAR_5->tx_pending > VAR_1) ||
  (VAR_5->tx_pending <= VAR_3)) {

  return -VAR_2;
 }
 VAR_7 = FUNC_0(VAR_6, VAR_5->rx_pending, VAR_5->tx_pending,
       0);
 return VAR_7;
}
