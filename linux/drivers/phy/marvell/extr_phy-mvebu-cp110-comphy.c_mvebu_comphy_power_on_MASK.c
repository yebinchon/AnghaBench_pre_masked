
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phy {int dummy; } ;
struct mvebu_comphy_priv {int dev; int cp_phys; } ;
struct mvebu_comphy_lane {int mode; int id; int submode; int port; struct mvebu_comphy_priv* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ,int) ;
 int FUNC_2 (int,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,char*,int ,...) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ,char*,int ,int,int) ;
 int FUNC_6 (int ,int ,int,int ) ;
 int FUNC_7 (struct phy*) ;
 int FUNC_8 (int ,int ,int ,int ) ;
 struct mvebu_comphy_lane* FUNC_9 (struct phy*) ;

__attribute__((used)) static int FUNC_10(struct phy *VAR_6)
{
 struct mvebu_comphy_lane *VAR_7 = FUNC_9(VAR_6);
 struct mvebu_comphy_priv *VAR_8 = VAR_7->priv;
 int VAR_9, VAR_10;
 u32 VAR_11 = 0;
 int VAR_12;

 VAR_9 = FUNC_6(VAR_7->id, VAR_7->port,
        VAR_7->mode, VAR_7->submode);
 if (VAR_9 < 0)
  goto try_legacy;


 switch (VAR_7->mode) {
 case 132:
  switch (VAR_7->submode) {
  case 134:
   FUNC_3(VAR_8->dev, "set lane %d to RXAUI mode\n",
    VAR_7->id);
   VAR_10 = 0;
   break;
  case 133:
   FUNC_3(VAR_8->dev, "set lane %d to 1000BASE-X mode\n",
    VAR_7->id);
   VAR_10 = VAR_2;
   break;
  case 135:
   FUNC_3(VAR_8->dev, "set lane %d to 2500BASE-X mode\n",
    VAR_7->id);
   VAR_10 = VAR_3;
   break;
  case 136:
   FUNC_3(VAR_8->dev, "set lane %d to 10G-KR mode\n",
    VAR_7->id);
   VAR_10 = VAR_1;
   break;
  default:
   FUNC_4(VAR_8->dev, "unsupported Ethernet mode (%d)\n",
    VAR_7->submode);
   return -VAR_5;
  }
  VAR_11 = FUNC_1(VAR_9, VAR_7->port, VAR_10);
  break;
 case 128:
 case 129:
  FUNC_3(VAR_8->dev, "set lane %d to USB3 mode\n", VAR_7->id);
  VAR_11 = FUNC_0(VAR_9, VAR_7->port);
  break;
 case 130:
  FUNC_3(VAR_8->dev, "set lane %d to SATA mode\n", VAR_7->id);
  VAR_11 = FUNC_0(VAR_9, VAR_7->port);
  break;
 case 131:
  FUNC_3(VAR_8->dev, "set lane %d to PCIe mode (x%d)\n", VAR_7->id,
   VAR_7->submode);
  VAR_11 = FUNC_2(VAR_9, VAR_7->port,
      VAR_7->submode);
  break;
 default:
  FUNC_4(VAR_8->dev, "unsupported PHY mode (%d)\n", VAR_7->mode);
  return -VAR_5;
 }

 VAR_12 = FUNC_8(VAR_4, VAR_8->cp_phys, VAR_7->id,
          VAR_11);
 if (!VAR_12)
  return VAR_12;

 if (VAR_12 == VAR_0)
  FUNC_4(VAR_8->dev,
   "unsupported SMC call, try updating your firmware\n");

 FUNC_5(VAR_8->dev,
   "Firmware could not configure PHY %d with mode %d (ret: %d), trying legacy method\n",
   VAR_7->id, VAR_7->mode, VAR_12);

try_legacy:

 return FUNC_7(VAR_6);
}
