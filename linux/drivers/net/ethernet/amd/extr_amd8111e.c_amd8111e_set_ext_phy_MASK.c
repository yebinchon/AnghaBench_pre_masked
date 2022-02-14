
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct amd8111e_priv {int ext_phy_option; int ext_phy_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;





 int FUNC_0 (struct net_device*,int ,int ) ;
 int FUNC_1 (struct net_device*,int ,int ,int) ;
 struct amd8111e_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_10)
{
 struct amd8111e_priv *VAR_11 = FUNC_2(VAR_10);
 u32 VAR_12,VAR_13,VAR_14;


 VAR_13 = FUNC_0(VAR_10, VAR_11->ext_phy_addr, VAR_8);
 VAR_14 = VAR_13 & ~(VAR_5 | VAR_0);
 switch (VAR_11->ext_phy_option){

  default:
  case 128:
   VAR_14 |= ( VAR_4|VAR_3|
    VAR_2|VAR_1) ;
   break;
  case 129:
   VAR_14 |= VAR_4;
   break;
  case 130:
   VAR_14 |= VAR_3;
   break;
  case 131:
   VAR_14 |= VAR_2;
   break;
  case 132:
   VAR_14 |= VAR_1;
   break;
 }

 if(VAR_13 != VAR_14)
  FUNC_1(VAR_10, VAR_11->ext_phy_addr, VAR_8, VAR_14);

 VAR_12 = FUNC_0(VAR_10, VAR_11->ext_phy_addr, VAR_9);
 VAR_12 |= (VAR_6 | VAR_7);
 FUNC_1(VAR_10, VAR_11->ext_phy_addr, VAR_9, VAR_12);

}
