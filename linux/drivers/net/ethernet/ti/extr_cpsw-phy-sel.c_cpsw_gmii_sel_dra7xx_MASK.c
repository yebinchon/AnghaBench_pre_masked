
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cpsw_phy_sel_priv {int gmii_sel; int dev; scalar_t__ rmii_clock_external; } ;
typedef int phy_interface_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;






 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static void FUNC_5(struct cpsw_phy_sel_priv *VAR_4,
     phy_interface_t VAR_5, int VAR_6)
{
 u32 VAR_7;
 u32 VAR_8;
 u32 VAR_9 = 0;

 VAR_7 = FUNC_3(VAR_4->gmii_sel);

 switch (VAR_5) {
 case 128:
  VAR_9 = VAR_2;
  break;

 case 132:
 case 131:
 case 130:
 case 129:
  VAR_9 = VAR_1;
  break;

 default:
  FUNC_1(VAR_4->dev,
    "Unsupported PHY mode: \"%s\". Defaulting to MII.\n",
   FUNC_2(VAR_5));

 case 133:
  VAR_9 = VAR_0;
  break;
 }

 switch (VAR_6) {
 case 0:
  VAR_8 = VAR_3;
  break;
 case 1:
  VAR_8 = VAR_3 << 4;
  VAR_9 <<= 4;
  break;
 default:
  FUNC_0(VAR_4->dev, "invalid slave number...\n");
  return;
 }

 if (VAR_4->rmii_clock_external)
  FUNC_0(VAR_4->dev, "RMII External clock is not supported\n");

 VAR_7 &= ~VAR_8;
 VAR_7 |= VAR_9;

 FUNC_4(VAR_7, VAR_4->gmii_sel);
}
