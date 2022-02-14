
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_ringparam {int rx_pending; int tx_pending; scalar_t__ rx_jumbo_pending; scalar_t__ rx_mini_pending; } ;
struct emac_adapter {void* rx_desc_cnt; void* tx_desc_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct emac_adapter*) ;
 struct emac_adapter* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_5,
         struct ethtool_ringparam *VAR_6)
{
 struct emac_adapter *VAR_7 = FUNC_2(VAR_5);




 if (VAR_6->rx_mini_pending || VAR_6->rx_jumbo_pending)
  return -VAR_0;

 VAR_7->tx_desc_cnt =
  FUNC_0(VAR_6->tx_pending, VAR_4, VAR_2);

 VAR_7->rx_desc_cnt =
  FUNC_0(VAR_6->rx_pending, VAR_3, VAR_1);

 if (FUNC_3(VAR_5))
  return FUNC_1(VAR_7);

 return 0;
}
