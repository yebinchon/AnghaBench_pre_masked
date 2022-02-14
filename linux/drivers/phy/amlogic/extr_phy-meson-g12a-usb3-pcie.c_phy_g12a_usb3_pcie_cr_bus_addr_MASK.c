
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_g12a_usb3_pcie_priv {int regmap; } ;


 unsigned int FUNC_0 (int ,unsigned int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_1 (int ,int ,unsigned int,int,int,int) ;
 int FUNC_2 (int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct phy_g12a_usb3_pcie_priv *VAR_5,
       unsigned int VAR_6)
{
 unsigned int VAR_7, VAR_8;
 int VAR_9;

 VAR_8 = FUNC_0(VAR_2, VAR_6);

 FUNC_2(VAR_5->regmap, VAR_0, VAR_8);
 FUNC_2(VAR_5->regmap, VAR_0, VAR_8);

 FUNC_2(VAR_5->regmap, VAR_0, VAR_8 | VAR_1);

 VAR_9 = FUNC_1(VAR_5->regmap, VAR_3, VAR_7,
           (VAR_7 & VAR_4),
           5, 1000);
 if (VAR_9)
  return VAR_9;

 FUNC_2(VAR_5->regmap, VAR_0, VAR_8);

 VAR_9 = FUNC_1(VAR_5->regmap, VAR_3, VAR_7,
           !(VAR_7 & VAR_4),
           5, 1000);
 if (VAR_9)
  return VAR_9;

 return 0;
}
