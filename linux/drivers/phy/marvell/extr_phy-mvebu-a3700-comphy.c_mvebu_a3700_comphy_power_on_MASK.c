
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int bus_width; } ;
struct phy {TYPE_1__ attrs; } ;
struct mvebu_a3700_comphy_lane {int mode; int dev; int id; int port; int submode; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;






 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ,int ,int,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 struct mvebu_a3700_comphy_lane* FUNC_7 (struct phy*) ;

__attribute__((used)) static int FUNC_8(struct phy *VAR_6)
{
 struct mvebu_a3700_comphy_lane *VAR_7 = FUNC_7(VAR_6);
 u32 VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_9 = FUNC_5(VAR_7->id, VAR_7->port,
       VAR_7->mode, VAR_7->submode);
 if (VAR_9 < 0) {
  FUNC_4(VAR_7->dev, "invalid COMPHY mode\n");
  return VAR_9;
 }

 switch (VAR_7->mode) {
 case 128:
  FUNC_3(VAR_7->dev, "set lane %d to USB3 host mode\n", VAR_7->id);
  VAR_8 = FUNC_0(VAR_9);
  break;
 case 129:
  FUNC_3(VAR_7->dev, "set lane %d to SATA mode\n", VAR_7->id);
  VAR_8 = FUNC_0(VAR_9);
  break;
 case 131:
  switch (VAR_7->submode) {
  case 132:
   FUNC_3(VAR_7->dev, "set lane %d to SGMII mode\n",
    VAR_7->id);
   VAR_8 = FUNC_1(VAR_9, VAR_7->port,
       VAR_1);
   break;
  case 133:
   FUNC_3(VAR_7->dev, "set lane %d to HS SGMII mode\n",
    VAR_7->id);
   VAR_8 = FUNC_1(VAR_9, VAR_7->port,
       VAR_2);
   break;
  default:
   FUNC_4(VAR_7->dev, "unsupported PHY submode (%d)\n",
    VAR_7->submode);
   return -VAR_5;
  }
  break;
 case 130:
  FUNC_3(VAR_7->dev, "set lane %d to PCIe mode\n", VAR_7->id);
  VAR_8 = FUNC_2(VAR_9, VAR_7->port,
       VAR_3,
       VAR_6->attrs.bus_width);
  break;
 default:
  FUNC_4(VAR_7->dev, "unsupported PHY mode (%d)\n", VAR_7->mode);
  return -VAR_5;
 }

 VAR_10 = FUNC_6(VAR_4, VAR_7->id, VAR_8);
 if (VAR_10 == VAR_0)
  FUNC_4(VAR_7->dev,
   "unsupported SMC call, try updating your firmware\n");

 return VAR_10;
}
