
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_9__ {scalar_t__ type; } ;
struct TYPE_7__ {int eee_disable; } ;
struct TYPE_8__ {TYPE_2__ _82575; } ;
struct TYPE_6__ {scalar_t__ media_type; } ;
struct e1000_hw {TYPE_4__ mac; TYPE_3__ dev_spec; TYPE_1__ phy; } ;
struct igb_adapter {TYPE_5__* pdev; int flags; int eee_advert; struct e1000_hw hw; } ;
struct ethtool_eee {scalar_t__ tx_lpi_enabled; int advertised; scalar_t__ eee_enabled; scalar_t__ tx_lpi_timer; } ;
typedef int s32 ;
struct TYPE_10__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct net_device*,struct ethtool_eee*) ;
 int FUNC_3 (struct igb_adapter*) ;
 int FUNC_4 (struct igb_adapter*) ;
 int FUNC_5 (struct e1000_hw*,int,int) ;
 int FUNC_6 (struct e1000_hw*,int,int) ;
 int FUNC_7 (struct ethtool_eee*,int ,int) ;
 struct igb_adapter* FUNC_8 (struct net_device*) ;
 scalar_t__ FUNC_9 (struct net_device*) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_8,
         struct ethtool_eee *VAR_9)
{
 struct igb_adapter *VAR_10 = FUNC_8(VAR_8);
 struct e1000_hw *VAR_11 = &VAR_10->hw;
 struct ethtool_eee VAR_12;
 bool VAR_13 = 1, VAR_14 = 1;
 s32 VAR_15;

 if ((VAR_11->mac.type < VAR_5) ||
     (VAR_11->phy.media_type != VAR_7))
  return -VAR_3;

 FUNC_7(&VAR_12, 0, sizeof(struct ethtool_eee));

 VAR_15 = FUNC_2(VAR_8, &VAR_12);
 if (VAR_15)
  return VAR_15;

 if (VAR_12.eee_enabled) {
  if (VAR_12.tx_lpi_enabled != VAR_9->tx_lpi_enabled) {
   FUNC_0(&VAR_10->pdev->dev,
    "Setting EEE tx-lpi is not supported\n");
   return -VAR_2;
  }


  if (VAR_9->tx_lpi_timer) {
   FUNC_0(&VAR_10->pdev->dev,
    "Setting EEE Tx LPI timer is not supported\n");
   return -VAR_2;
  }

  if (!VAR_9->advertised || (VAR_9->advertised &
      ~(VAR_1 | VAR_0))) {
   FUNC_0(&VAR_10->pdev->dev,
    "EEE Advertisement supports only 100Tx and/or 100T full duplex\n");
   return -VAR_2;
  }
  VAR_14 = !!(VAR_9->advertised & VAR_1);
  VAR_13 = !!(VAR_9->advertised & VAR_0);

 } else if (!VAR_9->eee_enabled) {
  FUNC_0(&VAR_10->pdev->dev,
   "Setting EEE options are not supported with EEE disabled\n");
  return -VAR_2;
 }

 VAR_10->eee_advert = FUNC_1(VAR_9->advertised);
 if (VAR_11->dev_spec._82575.eee_disable != !VAR_9->eee_enabled) {
  VAR_11->dev_spec._82575.eee_disable = !VAR_9->eee_enabled;
  VAR_10->flags |= VAR_4;


  if (FUNC_9(VAR_8))
   FUNC_3(VAR_10);
  else
   FUNC_4(VAR_10);
 }

 if (VAR_11->mac.type == VAR_6)
  VAR_15 = FUNC_6(VAR_11, VAR_13, VAR_14);
 else
  VAR_15 = FUNC_5(VAR_11, VAR_13, VAR_14);

 if (VAR_15) {
  FUNC_0(&VAR_10->pdev->dev,
   "Problem setting EEE advertisement options\n");
  return -VAR_2;
 }

 return 0;
}
