
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e1000_hw {scalar_t__ mac_type; int phy_id; int phy_type; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static s32 FUNC_0(struct e1000_hw *VAR_12)
{
 if (VAR_12->mac_type == VAR_11)
  return -VAR_0;

 switch (VAR_12->phy_id) {
 case 134:
 case 133:
 case 132:
 case 131:
 case 130:
  VAR_12->phy_type = VAR_9;
  break;
 case 135:
  if (VAR_12->mac_type == VAR_2 ||
      VAR_12->mac_type == VAR_3 ||
      VAR_12->mac_type == VAR_4 ||
      VAR_12->mac_type == VAR_5)
   VAR_12->phy_type = VAR_8;
  break;
 case 128:
  VAR_12->phy_type = VAR_7;
  break;
 case 129:
  VAR_12->phy_type = VAR_6;
  break;
 default:

  VAR_12->phy_type = VAR_10;
  return -VAR_0;
 }

 return VAR_1;
}
