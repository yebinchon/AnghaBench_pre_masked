
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct phy_device {int supported; } ;
struct net_device {struct phy_device* phydev; } ;
struct device {int dummy; } ;
struct bcmgenet_priv {int phy_interface; int ext_phy; scalar_t__ internal_phy; TYPE_1__* pdev; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct bcmgenet_priv*) ;
 scalar_t__ FUNC_2 (struct bcmgenet_priv*) ;
 scalar_t__ FUNC_3 (struct bcmgenet_priv*) ;
 int FUNC_4 (struct bcmgenet_priv*) ;
 int VAR_6 ;






 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_5 (struct bcmgenet_priv*,int ) ;
 int FUNC_6 (struct bcmgenet_priv*,int,int ) ;
 int FUNC_7 (struct bcmgenet_priv*) ;
 int FUNC_8 (struct bcmgenet_priv*,int,int ) ;
 int FUNC_9 (struct bcmgenet_priv*,int ) ;
 int FUNC_10 (struct bcmgenet_priv*,int,int ) ;
 int FUNC_11 (struct device*,char*,int const) ;
 int FUNC_12 (struct device*,char*,char const*) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (struct net_device*,char*) ;
 struct bcmgenet_priv* FUNC_15 (struct net_device*) ;
 int FUNC_16 (struct phy_device*,int ) ;
 int FUNC_17 (struct phy_device*,int ) ;
 int FUNC_18 (struct phy_device*,int ,int) ;
 int FUNC_19 (int) ;

int FUNC_20(struct net_device *VAR_18, bool VAR_19)
{
 struct bcmgenet_priv *VAR_20 = FUNC_15(VAR_18);
 struct phy_device *VAR_21 = VAR_18->phydev;
 struct device *VAR_22 = &VAR_20->pdev->dev;
 const char *VAR_23 = ((void*)0);
 u32 VAR_24 = 0;
 u32 VAR_25;
 int VAR_26 = -1;
 int VAR_27;
 u32 VAR_28;


 VAR_28 = FUNC_9(VAR_20, VAR_17);
 if (VAR_28 & VAR_2) {

  if (VAR_20->phy_interface == 132) {
   VAR_27 = FUNC_16(VAR_21, VAR_6);
   if (VAR_27 >= 0) {
    VAR_26 = VAR_27;
    VAR_27 = FUNC_18(VAR_21, VAR_6,
      VAR_26 | VAR_0);
   }
   if (VAR_27) {
    FUNC_14(VAR_18, "failed to isolate PHY\n");
    return VAR_27;
   }
  }

  FUNC_8(VAR_20, VAR_8, VAR_16);



  FUNC_19(4);
  VAR_28 &= ~(VAR_2 | VAR_1);
  FUNC_10(VAR_20, VAR_28, VAR_17);

  FUNC_19(2);
 }

 VAR_20->ext_phy = !VAR_20->internal_phy &&
   (VAR_20->phy_interface != 131);

 switch (VAR_20->phy_interface) {
 case 133:
 case 131:





  if (FUNC_4(VAR_20))
   VAR_25 = VAR_12;
  else
   VAR_25 = VAR_11;

  FUNC_8(VAR_20, VAR_25, VAR_16);

  if (VAR_20->internal_phy) {
   VAR_23 = "internal PHY";
  } else if (VAR_20->phy_interface == 131) {
   VAR_23 = "MoCA";
   FUNC_7(VAR_20);
  }
  break;

 case 132:
  VAR_23 = "external MII";
  FUNC_17(VAR_21, VAR_15);
  FUNC_8(VAR_20,
        VAR_7, VAR_16);

  if (VAR_26 >= 0)
   FUNC_18(VAR_21, VAR_6, VAR_26);
  break;

 case 130:
  VAR_23 = "external RvMII";





  if (FUNC_13(VAR_4,
          VAR_18->phydev->supported))
   VAR_25 = VAR_10;
  else
   VAR_25 = VAR_9;
  FUNC_8(VAR_20, VAR_25, VAR_16);
  break;

 case 129:






  VAR_24 = FUNC_0(16);

 case 128:
  if (VAR_24)
   VAR_23 = "external RGMII (no delay)";
  else
   VAR_23 = "external RGMII (TX delay)";
  FUNC_8(VAR_20,
        VAR_8, VAR_16);
  break;
 default:
  FUNC_11(VAR_22, "unknown phy mode: %d\n", VAR_20->phy_interface);
  return -VAR_3;
 }




 if (VAR_20->ext_phy) {
  VAR_28 = FUNC_5(VAR_20, VAR_5);
  VAR_28 |= VAR_24;
  if (FUNC_1(VAR_20) || FUNC_2(VAR_20) || FUNC_3(VAR_20))
   VAR_28 |= VAR_14;
  else
   VAR_28 |= VAR_13;
  FUNC_6(VAR_20, VAR_28, VAR_5);
 }

 if (VAR_19)
  FUNC_12(VAR_22, "configuring instance for %s\n", VAR_23);

 return 0;
}
