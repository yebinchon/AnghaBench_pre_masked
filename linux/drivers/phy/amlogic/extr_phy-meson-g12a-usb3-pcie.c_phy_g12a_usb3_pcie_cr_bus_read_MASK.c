
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_g12a_usb3_pcie_priv {int regmap; } ;


 unsigned int FUNC_0 (int ,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct phy_g12a_usb3_pcie_priv*,unsigned int) ;
 int FUNC_2 (int ,int ,unsigned int,int,int,int) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(void *VAR_5, unsigned int VAR_6,
       unsigned int *VAR_7)
{
 struct phy_g12a_usb3_pcie_priv *VAR_8 = VAR_5;
 unsigned int VAR_9;
 int VAR_10;

 VAR_10 = FUNC_1(VAR_8, VAR_6);
 if (VAR_10)
  return VAR_10;

 FUNC_3(VAR_8->regmap, VAR_0, 0);
 FUNC_3(VAR_8->regmap, VAR_0, VAR_1);

 VAR_10 = FUNC_2(VAR_8->regmap, VAR_2, VAR_9,
           (VAR_9 & VAR_3),
           5, 1000);
 if (VAR_10)
  return VAR_10;

 *VAR_7 = FUNC_0(VAR_4, VAR_9);

 FUNC_3(VAR_8->regmap, VAR_0, 0);

 VAR_10 = FUNC_2(VAR_8->regmap, VAR_2, VAR_9,
           !(VAR_9 & VAR_3),
           5, 1000);
 if (VAR_10)
  return VAR_10;

 return 0;
}
