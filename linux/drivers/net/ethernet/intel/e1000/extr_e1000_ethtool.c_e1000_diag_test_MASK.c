
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u64 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct ethtool_test {int flags; } ;
struct e1000_hw {void* autoneg; void* forced_speed_duplex; int autoneg_advertised; } ;
struct e1000_adapter {int flags; struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct e1000_adapter*,int *) ;
 scalar_t__ FUNC_3 (struct e1000_adapter*,int *) ;
 scalar_t__ FUNC_4 (struct e1000_adapter*,int *) ;
 scalar_t__ FUNC_5 (struct e1000_adapter*,int *) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct e1000_adapter*) ;
 scalar_t__ FUNC_8 (struct e1000_adapter*,int *) ;
 int FUNC_9 (struct e1000_adapter*) ;
 int FUNC_10 (struct e1000_hw*,char*) ;
 int FUNC_11 (int) ;
 struct e1000_adapter* FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct net_device*) ;
 int FUNC_14 (int ,int *) ;

__attribute__((used)) static void FUNC_15(struct net_device *VAR_3,
       struct ethtool_test *VAR_4, u64 *VAR_5)
{
 struct e1000_adapter *VAR_6 = FUNC_12(VAR_3);
 struct e1000_hw *VAR_7 = &VAR_6->hw;
 bool VAR_8 = FUNC_13(VAR_3);

 FUNC_14(VAR_2, &VAR_6->flags);
 if (VAR_4->flags == VAR_1) {



  u16 VAR_9 = VAR_7->autoneg_advertised;
  u8 VAR_10 = VAR_7->forced_speed_duplex;
  u8 VAR_11 = VAR_7->autoneg;

  FUNC_10(VAR_7, "offline testing starting\n");




  if (FUNC_4(VAR_6, &VAR_5[4]))
   VAR_4->flags |= VAR_0;

  if (VAR_8)

   FUNC_1(VAR_3);
  else
   FUNC_9(VAR_6);

  if (FUNC_8(VAR_6, &VAR_5[0]))
   VAR_4->flags |= VAR_0;

  FUNC_9(VAR_6);
  if (FUNC_2(VAR_6, &VAR_5[1]))
   VAR_4->flags |= VAR_0;

  FUNC_9(VAR_6);
  if (FUNC_3(VAR_6, &VAR_5[2]))
   VAR_4->flags |= VAR_0;

  FUNC_9(VAR_6);

  FUNC_7(VAR_6);
  if (FUNC_5(VAR_6, &VAR_5[3]))
   VAR_4->flags |= VAR_0;


  VAR_7->autoneg_advertised = VAR_9;
  VAR_7->forced_speed_duplex = VAR_10;
  VAR_7->autoneg = VAR_11;

  FUNC_9(VAR_6);
  FUNC_0(VAR_2, &VAR_6->flags);
  if (VAR_8)
   FUNC_6(VAR_3);
 } else {
  FUNC_10(VAR_7, "online testing starting\n");

  if (FUNC_4(VAR_6, &VAR_5[4]))
   VAR_4->flags |= VAR_0;


  VAR_5[0] = 0;
  VAR_5[1] = 0;
  VAR_5[2] = 0;
  VAR_5[3] = 0;

  FUNC_0(VAR_2, &VAR_6->flags);
 }
 FUNC_11(4 * 1000);
}
