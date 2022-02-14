
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mediatek_dwmac_plat_data {int rmii_rxc; int phy_mode; int peri_regmap; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;






 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct mediatek_dwmac_plat_data *VAR_6)
{
 int VAR_7 = VAR_6->rmii_rxc ? VAR_5 : 0;
 u32 VAR_8 = 0;


 switch (VAR_6->phy_mode) {
 case 133:
  VAR_8 |= VAR_2;
  break;
 case 128:
  VAR_8 |= (VAR_4 | VAR_7);
  break;
 case 132:
 case 129:
 case 130:
 case 131:
  VAR_8 |= VAR_3;
  break;
 default:
  FUNC_0(VAR_6->dev, "phy interface not supported\n");
  return -VAR_0;
 }

 FUNC_1(VAR_6->peri_regmap, VAR_1, VAR_8);

 return 0;
}
