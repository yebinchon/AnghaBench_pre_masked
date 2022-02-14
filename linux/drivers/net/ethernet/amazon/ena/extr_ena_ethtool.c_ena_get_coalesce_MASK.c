
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_coalesce {int tx_coalesce_usecs; int rx_coalesce_usecs; scalar_t__ use_adaptive_rx_coalesce; } ;
struct ena_com_dev {int intr_delay_resolution; } ;
struct ena_adapter {struct ena_com_dev* ena_dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ena_com_dev*) ;
 int FUNC_1 (struct ena_com_dev*) ;
 int FUNC_2 (struct ena_com_dev*) ;
 int FUNC_3 (struct ena_com_dev*) ;
 struct ena_adapter* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1,
       struct ethtool_coalesce *VAR_2)
{
 struct ena_adapter *VAR_3 = FUNC_4(VAR_1);
 struct ena_com_dev *VAR_4 = VAR_3->ena_dev;

 if (!FUNC_3(VAR_4)) {

  return -VAR_0;
 }

 VAR_2->tx_coalesce_usecs =
  FUNC_2(VAR_4) *
   VAR_4->intr_delay_resolution;

 if (!FUNC_0(VAR_4))
  VAR_2->rx_coalesce_usecs =
   FUNC_1(VAR_4)
   * VAR_4->intr_delay_resolution;

 VAR_2->use_adaptive_rx_coalesce =
  FUNC_0(VAR_4);

 return 0;
}
