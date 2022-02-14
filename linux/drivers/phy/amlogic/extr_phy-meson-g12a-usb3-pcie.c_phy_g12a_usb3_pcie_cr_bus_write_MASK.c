
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_g12a_usb3_pcie_priv {int regmap; } ;


 unsigned int FUNC_0 (int ,unsigned int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_1 (struct phy_g12a_usb3_pcie_priv*,unsigned int) ;
 int FUNC_2 (int ,int ,unsigned int,int,int,int) ;
 int FUNC_3 (int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_4(void *VAR_6, unsigned int VAR_7,
        unsigned int VAR_8)
{
 struct phy_g12a_usb3_pcie_priv *VAR_9 = VAR_6;
 unsigned int VAR_10, VAR_11;
 int VAR_12;

 VAR_12 = FUNC_1(VAR_9, VAR_7);
 if (VAR_12)
  return VAR_12;

 VAR_11 = FUNC_0(VAR_2, VAR_8);

 FUNC_3(VAR_9->regmap, VAR_0, VAR_11);
 FUNC_3(VAR_9->regmap, VAR_0, VAR_11);

 FUNC_3(VAR_9->regmap, VAR_0, VAR_11 | VAR_1);

 VAR_12 = FUNC_2(VAR_9->regmap, VAR_4, VAR_10,
           (VAR_10 & VAR_5),
           5, 1000);
 if (VAR_12)
  return VAR_12;

 FUNC_3(VAR_9->regmap, VAR_0, VAR_11);

 VAR_12 = FUNC_2(VAR_9->regmap, VAR_4, VAR_10,
           (VAR_10 & VAR_5) == 0,
           5, 1000);
 if (VAR_12)
  return VAR_12;

 FUNC_3(VAR_9->regmap, VAR_0, VAR_11);

 FUNC_3(VAR_9->regmap, VAR_0, VAR_11 | VAR_3);

 VAR_12 = FUNC_2(VAR_9->regmap, VAR_4, VAR_10,
           (VAR_10 & VAR_5),
           5, 1000);
 if (VAR_12)
  return VAR_12;

 FUNC_3(VAR_9->regmap, VAR_0, VAR_11);

 VAR_12 = FUNC_2(VAR_9->regmap, VAR_4, VAR_10,
           (VAR_10 & VAR_5) == 0,
           5, 1000);
 if (VAR_12)
  return VAR_12;

 return 0;
}
