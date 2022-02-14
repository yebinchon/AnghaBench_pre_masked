
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct e1000_phy_info {scalar_t__ smart_speed; } ;
struct e1000_hw {struct e1000_phy_info phy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static s32 FUNC_2(struct e1000_hw *VAR_5, bool VAR_6)
{
 struct e1000_phy_info *VAR_7 = &VAR_5->phy;
 u16 VAR_8;

 VAR_8 = FUNC_0(VAR_0);

 if (VAR_6) {
  VAR_8 |= VAR_1;


  VAR_8 &= ~VAR_2;
 } else {
  VAR_8 &= ~VAR_1;






  if (VAR_7->smart_speed == VAR_4)
   VAR_8 |= VAR_2;
  else if (VAR_7->smart_speed == VAR_3)
   VAR_8 &= ~VAR_2; }

 FUNC_1(VAR_0, VAR_8);
 return 0;
}
