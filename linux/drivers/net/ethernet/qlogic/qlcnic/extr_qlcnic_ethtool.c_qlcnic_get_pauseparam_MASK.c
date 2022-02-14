
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_adapter {TYPE_1__* ahw; } ;
struct net_device {int dev; } ;
struct ethtool_pauseparam {int rx_pause; int tx_pause; } ;
typedef int __u32 ;
struct TYPE_2__ {int physical_port; scalar_t__ port_type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct qlcnic_adapter*,int ,int*) ;
 int FUNC_2 (int *,char*,scalar_t__) ;
 struct qlcnic_adapter* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct qlcnic_adapter*) ;
 int FUNC_5 (struct qlcnic_adapter*,struct ethtool_pauseparam*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static void
FUNC_13(struct net_device *VAR_7,
     struct ethtool_pauseparam *VAR_8)
{
 struct qlcnic_adapter *VAR_9 = FUNC_3(VAR_7);
 int VAR_10 = VAR_9->ahw->physical_port;
 int VAR_11 = 0;
 __u32 VAR_12;

 if (FUNC_4(VAR_9)) {
  FUNC_5(VAR_9, VAR_8);
  return;
 }
 if (VAR_9->ahw->port_type == VAR_1) {
  if ((VAR_10 < 0) || (VAR_10 > VAR_3))
   return;

  VAR_12 = FUNC_1(VAR_9, FUNC_0(VAR_10), &VAR_11);
  if (VAR_11 == -VAR_0)
   return;
  VAR_8->rx_pause = FUNC_10(VAR_12);
  VAR_12 = FUNC_1(VAR_9, VAR_2, &VAR_11);
  if (VAR_11 == -VAR_0)
   return;
  switch (VAR_10) {
  case 0:
   VAR_8->tx_pause = !(FUNC_6(VAR_12));
   break;
  case 1:
   VAR_8->tx_pause = !(FUNC_7(VAR_12));
   break;
  case 2:
   VAR_8->tx_pause = !(FUNC_8(VAR_12));
   break;
  case 3:
  default:
   VAR_8->tx_pause = !(FUNC_9(VAR_12));
   break;
  }
 } else if (VAR_9->ahw->port_type == VAR_6) {
  if ((VAR_10 < 0) || (VAR_10 > VAR_4))
   return;
  VAR_8->rx_pause = 1;
  VAR_12 = FUNC_1(VAR_9, VAR_5, &VAR_11);
  if (VAR_11 == -VAR_0)
   return;
  if (VAR_10 == 0)
   VAR_8->tx_pause = !(FUNC_11(VAR_12));
  else
   VAR_8->tx_pause = !(FUNC_12(VAR_12));
 } else {
  FUNC_2(&VAR_7->dev, "Unknown board type: %x\n",
     VAR_9->ahw->port_type);
 }
}
