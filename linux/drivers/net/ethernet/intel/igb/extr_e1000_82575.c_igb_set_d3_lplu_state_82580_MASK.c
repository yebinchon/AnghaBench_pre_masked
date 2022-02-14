
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct e1000_phy_info {scalar_t__ smart_speed; scalar_t__ autoneg_advertised; } ;
struct e1000_hw {struct e1000_phy_info phy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static s32 FUNC_2(struct e1000_hw *VAR_8, bool VAR_9)
{
 struct e1000_phy_info *VAR_10 = &VAR_8->phy;
 u16 VAR_11;

 VAR_11 = FUNC_0(VAR_0);

 if (!VAR_9) {
  VAR_11 &= ~VAR_1;





  if (VAR_10->smart_speed == VAR_7)
   VAR_11 |= VAR_2;
  else if (VAR_10->smart_speed == VAR_6)
   VAR_11 &= ~VAR_2;
 } else if ((VAR_10->autoneg_advertised == VAR_5) ||
     (VAR_10->autoneg_advertised == VAR_4) ||
     (VAR_10->autoneg_advertised == VAR_3)) {
  VAR_11 |= VAR_1;

  VAR_11 &= ~VAR_2;
 }

 FUNC_1(VAR_0, VAR_11);
 return 0;
}
