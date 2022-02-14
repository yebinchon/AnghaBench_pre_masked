
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cpsw_phy_sel_priv {int gmii_sel; scalar_t__ rmii_clock_external; int dev; } ;
typedef int phy_interface_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;






 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static void FUNC_5(struct cpsw_phy_sel_priv *VAR_8,
     phy_interface_t VAR_9, int VAR_10)
{
 u32 VAR_11;
 u32 VAR_12;
 u32 VAR_13 = 0;
 bool VAR_14 = 0;

 VAR_11 = FUNC_3(VAR_8->gmii_sel);

 switch (VAR_9) {
 case 128:
  VAR_13 = VAR_2;
  break;

 case 132:
  VAR_13 = VAR_1;
  break;

 case 131:
 case 130:
 case 129:
  VAR_13 = VAR_1;
  VAR_14 = 1;
  break;

 default:
  FUNC_1(VAR_8->dev,
    "Unsupported PHY mode: \"%s\". Defaulting to MII.\n",
   FUNC_2(VAR_9));

 case 133:
  VAR_13 = VAR_0;
  break;
 }

 VAR_12 = VAR_7 << (VAR_10 * 2) | FUNC_0(VAR_10 + 6);
 VAR_12 |= FUNC_0(VAR_10 + 4);
 VAR_13 <<= VAR_10 * 2;

 if (VAR_8->rmii_clock_external) {
  if (VAR_10 == 0)
   VAR_13 |= VAR_5;
  else
   VAR_13 |= VAR_6;
 }

 if (VAR_14) {
  if (VAR_10 == 0)
   VAR_13 |= VAR_3;
  else
   VAR_13 |= VAR_4;
 }

 VAR_11 &= ~VAR_12;
 VAR_11 |= VAR_13;

 FUNC_4(VAR_11, VAR_8->gmii_sel);
}
