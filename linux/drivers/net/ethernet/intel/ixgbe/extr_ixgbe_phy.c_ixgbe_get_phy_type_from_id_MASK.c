
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum ixgbe_phy_type { ____Placeholder_ixgbe_phy_type } ixgbe_phy_type ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static enum ixgbe_phy_type FUNC_0(u32 VAR_6)
{
 enum ixgbe_phy_type VAR_7;

 switch (VAR_6) {
 case 133:
  VAR_7 = VAR_3;
  break;
 case 131:
 case 130:
 case 132:
  VAR_7 = VAR_0;
  break;
 case 134:
  VAR_7 = VAR_2;
  break;
 case 135:
  VAR_7 = VAR_1;
  break;
 case 129:
 case 128:
  VAR_7 = VAR_5;
  break;
 default:
  VAR_7 = VAR_4;
  break;
 }

 return VAR_7;
}
