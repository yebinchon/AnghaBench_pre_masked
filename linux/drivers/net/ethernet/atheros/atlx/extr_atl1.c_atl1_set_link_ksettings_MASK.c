
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct TYPE_3__ {scalar_t__ autoneg; scalar_t__ speed; scalar_t__ duplex; } ;
struct ethtool_link_ksettings {TYPE_1__ base; } ;
struct atl1_hw {int media_type; } ;
struct atl1_adapter {TYPE_2__* pdev; int netdev; struct atl1_hw hw; } ;
struct TYPE_4__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (struct atl1_adapter*) ;
 scalar_t__ FUNC_1 (struct atl1_hw*) ;
 int FUNC_2 (struct atl1_adapter*) ;
 int FUNC_3 (struct atl1_adapter*) ;
 int FUNC_4 (struct atl1_hw*,int ,int) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*) ;
 struct atl1_adapter* FUNC_7 (struct net_device*) ;
 scalar_t__ FUNC_8 (struct atl1_adapter*) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_14,
       const struct ethtool_link_ksettings *VAR_15)
{
 struct atl1_adapter *VAR_16 = FUNC_7(VAR_14);
 struct atl1_hw *VAR_17 = &VAR_16->hw;
 u16 VAR_18;
 int VAR_19 = 0;
 u16 VAR_20 = VAR_17->media_type;

 if (FUNC_9(VAR_16->netdev)) {
  if (FUNC_8(VAR_16))
   FUNC_5(&VAR_16->pdev->dev,
    "ethtool shutting down adapter\n");
  FUNC_0(VAR_16);
 }

 if (VAR_15->base.autoneg == VAR_0)
  VAR_17->media_type = VAR_5;
 else {
  u32 VAR_21 = VAR_15->base.speed;
  if (VAR_21 == VAR_13) {
   if (VAR_15->base.duplex != VAR_1) {
    if (FUNC_8(VAR_16))
     FUNC_6(&VAR_16->pdev->dev,
      "1000M half is invalid\n");
    VAR_19 = -VAR_2;
    goto exit_sset;
   }
   VAR_17->media_type = VAR_3;
  } else if (VAR_21 == VAR_12) {
   if (VAR_15->base.duplex == VAR_1)
    VAR_17->media_type = 130;
   else
    VAR_17->media_type = 129;
  } else {
   if (VAR_15->base.duplex == VAR_1)
    VAR_17->media_type = 128;
   else
    VAR_17->media_type = VAR_4;
  }
 }

 if (FUNC_1(VAR_17)) {
  VAR_19 = -VAR_2;
  if (FUNC_8(VAR_16))
   FUNC_6(&VAR_16->pdev->dev,
    "invalid ethtool speed/duplex setting\n");
  goto exit_sset;
 }
 if (VAR_17->media_type == VAR_5 ||
     VAR_17->media_type == VAR_3)
  VAR_18 = VAR_9 | VAR_7;
 else {
  switch (VAR_17->media_type) {
  case 130:
   VAR_18 =
       VAR_8 | VAR_11 |
       VAR_9;
   break;
  case 129:
   VAR_18 = VAR_11 | VAR_9;
   break;
  case 128:
   VAR_18 =
       VAR_8 | VAR_10 | VAR_9;
   break;
  default:

   VAR_18 = VAR_10 | VAR_9;
   break;
  }
 }
 FUNC_4(VAR_17, VAR_6, VAR_18);
exit_sset:
 if (VAR_19)
  VAR_17->media_type = VAR_20;

 if (FUNC_9(VAR_16->netdev)) {
  if (FUNC_8(VAR_16))
   FUNC_5(&VAR_16->pdev->dev,
    "ethtool starting adapter\n");
  FUNC_3(VAR_16);
 } else if (!VAR_19) {
  if (FUNC_8(VAR_16))
   FUNC_5(&VAR_16->pdev->dev,
    "ethtool resetting adapter\n");
  FUNC_2(VAR_16);
 }
 return VAR_19;
}
