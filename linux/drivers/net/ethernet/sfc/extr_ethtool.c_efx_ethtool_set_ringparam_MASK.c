
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct ethtool_ringparam {scalar_t__ tx_pending; int rx_pending; scalar_t__ rx_jumbo_pending; scalar_t__ rx_mini_pending; } ;
struct efx_nic {int net_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct efx_nic*) ;
 int FUNC_1 (struct efx_nic*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct efx_nic*,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 struct efx_nic* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct efx_nic*,int ,int ,char*,int ) ;
 int FUNC_6 (struct efx_nic*,int ,int ,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_4,
         struct ethtool_ringparam *VAR_5)
{
 struct efx_nic *VAR_6 = FUNC_4(VAR_4);
 u32 VAR_7;

 if (VAR_5->rx_mini_pending || VAR_5->rx_jumbo_pending ||
     VAR_5->rx_pending > VAR_0 ||
     VAR_5->tx_pending > FUNC_0(VAR_6))
  return -VAR_2;

 if (VAR_5->rx_pending < VAR_1) {
  FUNC_5(VAR_6, VAR_3, VAR_6->net_dev,
     "RX queues cannot be smaller than %u\n",
     VAR_1);
  return -VAR_2;
 }

 VAR_7 = FUNC_3(VAR_5->tx_pending, FUNC_1(VAR_6));
 if (VAR_7 != VAR_5->tx_pending)
  FUNC_6(VAR_6, VAR_3, VAR_6->net_dev,
      "increasing TX queue size to minimum of %u\n",
      VAR_7);

 return FUNC_2(VAR_6, VAR_5->rx_pending, VAR_7);
}
