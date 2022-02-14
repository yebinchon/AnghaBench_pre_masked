
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucc_geth_private {struct ucc_geth_info* ug_info; } ;
struct ucc_geth_info {int* bdRingLenRx; int* bdRingLenTx; } ;
struct net_device {int dummy; } ;
struct ethtool_ringparam {int rx_pending; int tx_pending; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net_device*,char*,int) ;
 struct ucc_geth_private* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;

__attribute__((used)) static int
FUNC_3(struct net_device *VAR_5,
                    struct ethtool_ringparam *VAR_6)
{
 struct ucc_geth_private *VAR_7 = FUNC_1(VAR_5);
 struct ucc_geth_info *VAR_8 = VAR_7->ug_info;
 int VAR_9 = 0, VAR_10 = 0;

 if (VAR_6->rx_pending < VAR_3) {
  FUNC_0(VAR_5, "RxBD ring size must be no smaller than %d\n",
       VAR_3);
  return -VAR_1;
 }
 if (VAR_6->rx_pending % VAR_2) {
  FUNC_0(VAR_5, "RxBD ring size must be multiple of %d\n",
       VAR_2);
  return -VAR_1;
 }
 if (VAR_6->tx_pending < VAR_4) {
  FUNC_0(VAR_5, "TxBD ring size must be no smaller than %d\n",
       VAR_4);
  return -VAR_1;
 }

 if (FUNC_2(VAR_5))
  return -VAR_0;

 VAR_8->bdRingLenRx[VAR_9] = VAR_6->rx_pending;
 VAR_8->bdRingLenTx[VAR_9] = VAR_6->tx_pending;

 return VAR_10;
}
