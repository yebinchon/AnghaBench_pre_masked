
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* u8 ;
typedef scalar_t__ u64 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct TYPE_10__ {int autoneg_wait_to_complete; int autoneg_advertised; } ;
struct TYPE_9__ {void* autoneg; void* forced_speed_duplex; } ;
struct TYPE_7__ {scalar_t__ mas_capable; } ;
struct TYPE_8__ {TYPE_1__ _82575; } ;
struct TYPE_11__ {TYPE_4__ phy; TYPE_3__ mac; TYPE_2__ dev_spec; } ;
struct igb_adapter {int state; TYPE_6__* pdev; TYPE_5__ hw; } ;
struct ethtool_test {int flags; } ;
struct TYPE_12__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct igb_adapter*,scalar_t__*) ;
 scalar_t__ FUNC_4 (struct igb_adapter*,scalar_t__*) ;
 scalar_t__ FUNC_5 (struct igb_adapter*,scalar_t__*) ;
 scalar_t__ FUNC_6 (struct igb_adapter*,scalar_t__*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct igb_adapter*) ;
 scalar_t__ FUNC_9 (struct igb_adapter*,scalar_t__*) ;
 int FUNC_10 (struct igb_adapter*) ;
 int FUNC_11 (int) ;
 struct igb_adapter* FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct net_device*) ;
 int FUNC_14 (int ,int *) ;

__attribute__((used)) static void FUNC_15(struct net_device *VAR_8,
     struct ethtool_test *VAR_9, u64 *VAR_10)
{
 struct igb_adapter *VAR_11 = FUNC_12(VAR_8);
 u16 VAR_12;
 u8 VAR_13, VAR_14;
 bool VAR_15 = FUNC_13(VAR_8);

 FUNC_14(VAR_7, &VAR_11->state);


 if (VAR_11->hw.dev_spec._82575.mas_capable)
  VAR_9->flags &= ~VAR_1;
 if (VAR_9->flags == VAR_1) {



  VAR_12 = VAR_11->hw.phy.autoneg_advertised;
  VAR_13 = VAR_11->hw.mac.forced_speed_duplex;
  VAR_14 = VAR_11->hw.mac.autoneg;

  FUNC_1(&VAR_11->pdev->dev, "offline testing starting\n");


  FUNC_8(VAR_11);




  if (FUNC_5(VAR_11, &VAR_10[VAR_4]))
   VAR_9->flags |= VAR_0;

  if (VAR_15)

   FUNC_2(VAR_8);
  else
   FUNC_10(VAR_11);

  if (FUNC_9(VAR_11, &VAR_10[VAR_6]))
   VAR_9->flags |= VAR_0;

  FUNC_10(VAR_11);
  if (FUNC_3(VAR_11, &VAR_10[VAR_2]))
   VAR_9->flags |= VAR_0;

  FUNC_10(VAR_11);
  if (FUNC_4(VAR_11, &VAR_10[VAR_3]))
   VAR_9->flags |= VAR_0;

  FUNC_10(VAR_11);

  FUNC_8(VAR_11);
  if (FUNC_6(VAR_11, &VAR_10[VAR_5]))
   VAR_9->flags |= VAR_0;


  VAR_11->hw.phy.autoneg_advertised = VAR_12;
  VAR_11->hw.mac.forced_speed_duplex = VAR_13;
  VAR_11->hw.mac.autoneg = VAR_14;


  VAR_11->hw.phy.autoneg_wait_to_complete = 1;
  FUNC_10(VAR_11);
  VAR_11->hw.phy.autoneg_wait_to_complete = 0;

  FUNC_0(VAR_7, &VAR_11->state);
  if (VAR_15)
   FUNC_7(VAR_8);
 } else {
  FUNC_1(&VAR_11->pdev->dev, "online testing starting\n");


  if (VAR_15 && FUNC_5(VAR_11, &VAR_10[VAR_4]))
   VAR_9->flags |= VAR_0;
  else
   VAR_10[VAR_4] = 0;


  VAR_10[VAR_6] = 0;
  VAR_10[VAR_2] = 0;
  VAR_10[VAR_3] = 0;
  VAR_10[VAR_5] = 0;

  FUNC_0(VAR_7, &VAR_11->state);
 }
 FUNC_11(4 * 1000);
}
