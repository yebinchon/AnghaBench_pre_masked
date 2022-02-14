
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int dummy; } ;
struct fe_priv {scalar_t__ phy_oui; scalar_t__ phy_model; int phyaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct net_device*,int ,int ,int) ;
 struct fe_priv* FUNC_1 (struct net_device*) ;
 scalar_t__ VAR_13 ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_14)
{
 struct fe_priv *VAR_15 = FUNC_1(VAR_14);
 u16 VAR_16, VAR_17;

 if (VAR_15->phy_oui == VAR_6 &&
     VAR_15->phy_model == VAR_5 &&
     VAR_13 == VAR_4) {
  FUNC_0(VAR_14, VAR_15->phyaddr, VAR_11, VAR_8);
  VAR_16 = FUNC_0(VAR_14, VAR_15->phyaddr, VAR_12, VAR_3);
  VAR_16 &= ~VAR_10;
  VAR_16 |= VAR_9;
  FUNC_0(VAR_14, VAR_15->phyaddr, VAR_12, VAR_16);
  FUNC_0(VAR_14, VAR_15->phyaddr, VAR_11, VAR_7);


  VAR_17 = FUNC_0(VAR_14, VAR_15->phyaddr, VAR_2, VAR_3);
  VAR_17 |= (VAR_1 | VAR_0);
  FUNC_0(VAR_14, VAR_15->phyaddr, VAR_2, VAR_17);
 }
}
