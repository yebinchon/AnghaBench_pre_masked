
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct net_device {int dummy; } ;
struct ethtool_ringparam {scalar_t__ rx_pending; scalar_t__ tx_pending; } ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct net_device*,char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_4,
           struct ethtool_ringparam *VAR_5)
{
 u16 VAR_6 = VAR_5->rx_pending;
 u16 VAR_7 = VAR_5->tx_pending;

 if (VAR_5->rx_pending == 0 || VAR_5->tx_pending == 0)
  return -VAR_0;

 if (VAR_5->rx_pending > VAR_1)
  VAR_6 = VAR_1;
 else if (!FUNC_1(VAR_5->rx_pending, 16))
  VAR_6 = FUNC_0(VAR_5->rx_pending, 16);

 if (VAR_5->tx_pending > VAR_3)
  VAR_7 = VAR_3;
 else if (!FUNC_1(VAR_5->tx_pending, 32))
  VAR_7 = FUNC_0(VAR_5->tx_pending, 32);




 if (VAR_7 < VAR_2)
  VAR_7 = FUNC_0(VAR_2, 32);

 if (VAR_5->rx_pending != VAR_6) {
  FUNC_2(VAR_4, "illegal Rx ring size value %d, round to %d\n",
       VAR_5->rx_pending, VAR_6);
  VAR_5->rx_pending = VAR_6;
 }

 if (VAR_5->tx_pending != VAR_7) {
  FUNC_2(VAR_4, "illegal Tx ring size value %d, round to %d\n",
       VAR_5->tx_pending, VAR_7);
  VAR_5->tx_pending = VAR_7;
 }

 return 0;
}
