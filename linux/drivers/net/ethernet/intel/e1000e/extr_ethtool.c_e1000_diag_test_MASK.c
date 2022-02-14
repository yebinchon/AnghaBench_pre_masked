
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u8 ;
typedef int u64 ;
typedef int u16 ;
struct TYPE_8__ {int parent; } ;
struct net_device {TYPE_4__ dev; } ;
struct ethtool_test {int flags; } ;
struct TYPE_6__ {void* autoneg; void* forced_speed_duplex; } ;
struct TYPE_5__ {int autoneg_wait_to_complete; int autoneg_advertised; } ;
struct TYPE_7__ {TYPE_2__ mac; TYPE_1__ phy; } ;
struct e1000_adapter {int flags; int state; TYPE_3__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (struct e1000_adapter*,int *) ;
 scalar_t__ FUNC_2 (struct e1000_adapter*,int *) ;
 scalar_t__ FUNC_3 (struct e1000_adapter*,int *) ;
 scalar_t__ FUNC_4 (struct e1000_adapter*,int *) ;
 scalar_t__ FUNC_5 (struct e1000_adapter*,int *) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct e1000_adapter*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct e1000_adapter*) ;
 int FUNC_10 (struct e1000_adapter*) ;
 int FUNC_11 (struct e1000_adapter*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int) ;
 struct e1000_adapter* FUNC_14 (struct net_device*) ;
 int FUNC_15 (struct net_device*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,int *) ;

__attribute__((used)) static void FUNC_19(struct net_device *VAR_4,
       struct ethtool_test *VAR_5, u64 *VAR_6)
{
 struct e1000_adapter *VAR_7 = FUNC_14(VAR_4);
 u16 VAR_8;
 u8 VAR_9;
 u8 VAR_10;
 bool VAR_11 = FUNC_15(VAR_4);

 FUNC_16(VAR_4->dev.parent);

 FUNC_18(VAR_3, &VAR_7->state);

 if (!VAR_11) {

  if (VAR_7->flags & VAR_2)
   FUNC_7(VAR_7);

  FUNC_9(VAR_7);

  VAR_7->hw.phy.autoneg_wait_to_complete = 1;
  FUNC_11(VAR_7);
  VAR_7->hw.phy.autoneg_wait_to_complete = 0;
 }

 if (VAR_5->flags == VAR_1) {



  VAR_8 = VAR_7->hw.phy.autoneg_advertised;
  VAR_9 = VAR_7->hw.mac.forced_speed_duplex;
  VAR_10 = VAR_7->hw.mac.autoneg;

  FUNC_12("offline testing starting\n");

  if (VAR_11)

   FUNC_6(VAR_4);

  if (FUNC_5(VAR_7, &VAR_6[0]))
   VAR_5->flags |= VAR_0;

  FUNC_11(VAR_7);
  if (FUNC_1(VAR_7, &VAR_6[1]))
   VAR_5->flags |= VAR_0;

  FUNC_11(VAR_7);
  if (FUNC_2(VAR_7, &VAR_6[2]))
   VAR_5->flags |= VAR_0;

  FUNC_11(VAR_7);
  if (FUNC_4(VAR_7, &VAR_6[3]))
   VAR_5->flags |= VAR_0;


  VAR_7->hw.phy.autoneg_wait_to_complete = 1;
  FUNC_11(VAR_7);
  VAR_7->hw.phy.autoneg_wait_to_complete = 0;

  if (FUNC_3(VAR_7, &VAR_6[4]))
   VAR_5->flags |= VAR_0;


  VAR_7->hw.phy.autoneg_advertised = VAR_8;
  VAR_7->hw.mac.forced_speed_duplex = VAR_9;
  VAR_7->hw.mac.autoneg = VAR_10;
  FUNC_11(VAR_7);

  FUNC_0(VAR_3, &VAR_7->state);
  if (VAR_11)
   FUNC_8(VAR_4);
 } else {


  FUNC_12("online testing starting\n");


  VAR_6[0] = 0;
  VAR_6[1] = 0;
  VAR_6[2] = 0;
  VAR_6[3] = 0;

  if (FUNC_3(VAR_7, &VAR_6[4]))
   VAR_5->flags |= VAR_0;

  FUNC_0(VAR_3, &VAR_7->state);
 }

 if (!VAR_11) {
  FUNC_11(VAR_7);

  if (VAR_7->flags & VAR_2)
   FUNC_10(VAR_7);
 }

 FUNC_13(4 * 1000);

 FUNC_17(VAR_4->dev.parent);
}
