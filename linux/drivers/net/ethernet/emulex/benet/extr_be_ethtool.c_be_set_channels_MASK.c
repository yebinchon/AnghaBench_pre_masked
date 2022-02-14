
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_channels {scalar_t__ combined_count; scalar_t__ rx_count; scalar_t__ tx_count; scalar_t__ other_count; } ;
struct be_adapter {scalar_t__ cfg_num_rx_irqs; scalar_t__ cfg_num_tx_irqs; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct be_adapter*) ;
 scalar_t__ FUNC_2 (struct be_adapter*) ;
 scalar_t__ FUNC_3 (struct be_adapter*) ;
 int FUNC_4 (struct be_adapter*) ;
 struct be_adapter* FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_1,
      struct ethtool_channels *VAR_2)
{
 struct be_adapter *VAR_3 = FUNC_5(VAR_1);
 int VAR_4;




 if (VAR_2->other_count || !VAR_2->combined_count ||
     (VAR_2->rx_count && VAR_2->tx_count))
  return -VAR_0;

 if (VAR_2->combined_count > FUNC_1(VAR_3) ||
     (VAR_2->rx_count &&
      (VAR_2->rx_count + VAR_2->combined_count) > FUNC_2(VAR_3)) ||
     (VAR_2->tx_count &&
      (VAR_2->tx_count + VAR_2->combined_count) > FUNC_3(VAR_3)))
  return -VAR_0;

 VAR_3->cfg_num_rx_irqs = VAR_2->combined_count + VAR_2->rx_count;
 VAR_3->cfg_num_tx_irqs = VAR_2->combined_count + VAR_2->tx_count;

 VAR_4 = FUNC_4(VAR_3);
 return FUNC_0(VAR_4);
}
