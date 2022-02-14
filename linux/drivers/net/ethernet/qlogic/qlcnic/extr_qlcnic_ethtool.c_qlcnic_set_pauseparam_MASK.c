
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_adapter {TYPE_1__* ahw; } ;
struct net_device {int dev; } ;
struct ethtool_pauseparam {scalar_t__ tx_pause; scalar_t__ autoneg; scalar_t__ rx_pause; } ;
typedef int __u32 ;
struct TYPE_2__ {int physical_port; scalar_t__ port_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct qlcnic_adapter*,int ,int*) ;
 int FUNC_2 (struct qlcnic_adapter*,int ,int ) ;
 int FUNC_3 (int *,char*,scalar_t__) ;
 struct qlcnic_adapter* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct qlcnic_adapter*) ;
 int FUNC_6 (struct qlcnic_adapter*,struct ethtool_pauseparam*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;

__attribute__((used)) static int
FUNC_21(struct net_device *VAR_8,
     struct ethtool_pauseparam *VAR_9)
{
 struct qlcnic_adapter *VAR_10 = FUNC_4(VAR_8);
 int VAR_11 = VAR_10->ahw->physical_port;
 int VAR_12 = 0;
 __u32 VAR_13;

 if (FUNC_5(VAR_10))
  return FUNC_6(VAR_10, VAR_9);


 if (VAR_10->ahw->port_type == VAR_2) {
  if ((VAR_11 < 0) || (VAR_11 > VAR_4))
   return -VAR_0;

  VAR_13 = FUNC_1(VAR_10, FUNC_0(VAR_11), &VAR_12);
  if (VAR_12 == -VAR_0)
   return VAR_12;

  if (VAR_9->rx_pause)
   FUNC_7(VAR_13);
  else
   FUNC_16(VAR_13);

  FUNC_2(VAR_10, FUNC_0(VAR_11),
    VAR_13);
  FUNC_2(VAR_10, FUNC_0(VAR_11), VAR_13);

  VAR_13 = FUNC_1(VAR_10, VAR_3, &VAR_12);
  if (VAR_12 == -VAR_0)
   return VAR_12;
  switch (VAR_11) {
  case 0:
   if (VAR_9->tx_pause)
    FUNC_12(VAR_13);
   else
    FUNC_8(VAR_13);
   break;
  case 1:
   if (VAR_9->tx_pause)
    FUNC_13(VAR_13);
   else
    FUNC_9(VAR_13);
   break;
  case 2:
   if (VAR_9->tx_pause)
    FUNC_14(VAR_13);
   else
    FUNC_10(VAR_13);
   break;
  case 3:
  default:
   if (VAR_9->tx_pause)
    FUNC_15(VAR_13);
   else
    FUNC_11(VAR_13);
   break;
  }
  FUNC_2(VAR_10, VAR_3, VAR_13);
 } else if (VAR_10->ahw->port_type == VAR_7) {
  if (!VAR_9->rx_pause || VAR_9->autoneg)
   return -VAR_1;

  if ((VAR_11 < 0) || (VAR_11 > VAR_5))
   return -VAR_0;

  VAR_13 = FUNC_1(VAR_10, VAR_6, &VAR_12);
  if (VAR_12 == -VAR_0)
   return VAR_12;
  if (VAR_11 == 0) {
   if (VAR_9->tx_pause)
    FUNC_19(VAR_13);
   else
    FUNC_17(VAR_13);
  } else {
   if (VAR_9->tx_pause)
    FUNC_20(VAR_13);
   else
    FUNC_18(VAR_13);
  }
  FUNC_2(VAR_10, VAR_6, VAR_13);
 } else {
  FUNC_3(&VAR_8->dev, "Unknown board type: %x\n",
    VAR_10->ahw->port_type);
 }
 return 0;
}
