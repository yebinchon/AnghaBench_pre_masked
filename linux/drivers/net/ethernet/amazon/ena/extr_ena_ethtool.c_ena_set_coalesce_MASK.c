
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_coalesce {scalar_t__ use_adaptive_rx_coalesce; int rx_coalesce_usecs; int tx_coalesce_usecs; } ;
struct ena_com_dev {int dummy; } ;
struct ena_adapter {struct ena_com_dev* ena_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct ena_com_dev*) ;
 int FUNC_1 (struct ena_com_dev*) ;
 scalar_t__ FUNC_2 (struct ena_com_dev*) ;
 int FUNC_3 (struct ena_com_dev*) ;
 int FUNC_4 (struct ena_com_dev*,int ) ;
 int FUNC_5 (struct ena_com_dev*,int ) ;
 int FUNC_6 (struct ena_adapter*) ;
 int FUNC_7 (struct ena_adapter*) ;
 struct ena_adapter* FUNC_8 (struct net_device*) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_1,
       struct ethtool_coalesce *VAR_2)
{
 struct ena_adapter *VAR_3 = FUNC_8(VAR_1);
 struct ena_com_dev *VAR_4 = VAR_3->ena_dev;
 int VAR_5;

 if (!FUNC_3(VAR_4)) {

  return -VAR_0;
 }

 VAR_5 = FUNC_5(VAR_4,
              VAR_2->tx_coalesce_usecs);
 if (VAR_5)
  return VAR_5;

 FUNC_7(VAR_3);

 if (VAR_2->use_adaptive_rx_coalesce) {
  if (!FUNC_2(VAR_4))
   FUNC_1(VAR_4);
  return 0;
 }

 VAR_5 = FUNC_4(VAR_4,
              VAR_2->rx_coalesce_usecs);
 if (VAR_5)
  return VAR_5;

 FUNC_6(VAR_3);

 if (!VAR_2->use_adaptive_rx_coalesce) {
  if (FUNC_2(VAR_4))
   FUNC_0(VAR_4);
 }

 return 0;
}
