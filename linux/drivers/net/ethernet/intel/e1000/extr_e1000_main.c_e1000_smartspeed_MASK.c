
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct e1000_hw {scalar_t__ phy_type; int autoneg_advertised; int autoneg; } ;
struct e1000_adapter {scalar_t__ smartspeed; struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (struct e1000_hw*) ;
 int FUNC_1 (struct e1000_hw*,int ,int*) ;
 int FUNC_2 (struct e1000_hw*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct e1000_adapter *VAR_11)
{
 struct e1000_hw *VAR_12 = &VAR_11->hw;
 u16 VAR_13;
 u16 VAR_14;

 if ((VAR_12->phy_type != VAR_10) || !VAR_12->autoneg ||
    !(VAR_12->autoneg_advertised & VAR_0))
  return;

 if (VAR_11->smartspeed == 0) {



  FUNC_1(VAR_12, VAR_7, &VAR_13);
  if (!(VAR_13 & VAR_9))
   return;
  FUNC_1(VAR_12, VAR_7, &VAR_13);
  if (!(VAR_13 & VAR_9))
   return;
  FUNC_1(VAR_12, VAR_6, &VAR_14);
  if (VAR_14 & VAR_1) {
   VAR_14 &= ~VAR_1;
   FUNC_2(VAR_12, VAR_6,
         VAR_14);
   VAR_11->smartspeed++;
   if (!FUNC_0(VAR_12) &&
      !FUNC_1(VAR_12, VAR_8,
            &VAR_14)) {
    VAR_14 |= (VAR_4 |
          VAR_5);
    FUNC_2(VAR_12, VAR_8,
          VAR_14);
   }
  }
  return;
 } else if (VAR_11->smartspeed == VAR_2) {

  FUNC_1(VAR_12, VAR_6, &VAR_14);
  VAR_14 |= VAR_1;
  FUNC_2(VAR_12, VAR_6, VAR_14);
  if (!FUNC_0(VAR_12) &&
     !FUNC_1(VAR_12, VAR_8, &VAR_14)) {
   VAR_14 |= (VAR_4 |
         VAR_5);
   FUNC_2(VAR_12, VAR_8, VAR_14);
  }
 }

 if (VAR_11->smartspeed++ == VAR_3)
  VAR_11->smartspeed = 0;
}
