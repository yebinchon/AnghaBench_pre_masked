
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stmmac_resources {int mac; } ;
struct regmap {int has_gmac; scalar_t__ interface; } ;
struct platform_device {int dev; } ;
struct plat_stmmacenet_data {int has_gmac; scalar_t__ interface; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct regmap*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct regmap*,int ,int ,int ) ;
 int FUNC_4 (int *,struct regmap*,struct stmmac_resources*) ;
 int FUNC_5 (struct platform_device*,struct stmmac_resources*) ;
 struct regmap* FUNC_6 (struct platform_device*,int *) ;
 int FUNC_7 (struct platform_device*,struct regmap*) ;
 struct regmap* FUNC_8 (char*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_7)
{
 struct plat_stmmacenet_data *VAR_8;
 struct stmmac_resources VAR_9;
 struct regmap *VAR_10;
 u8 VAR_11;
 int VAR_12;

 VAR_12 = FUNC_5(VAR_7, &VAR_9);
 if (VAR_12)
  return VAR_12;

 VAR_8 = FUNC_6(VAR_7, &VAR_9.mac);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 VAR_8->has_gmac = 1;

 VAR_10 = FUNC_8("nxp,lpc1850-creg");
 if (FUNC_0(VAR_10)) {
  FUNC_2(&VAR_7->dev, "syscon lookup failed\n");
  VAR_12 = FUNC_1(VAR_10);
  goto err_remove_config_dt;
 }

 if (VAR_8->interface == VAR_5) {
  VAR_11 = VAR_3;
 } else if (VAR_8->interface == VAR_6) {
  VAR_11 = VAR_4;
 } else {
  FUNC_2(&VAR_7->dev, "Only MII and RMII mode supported\n");
  VAR_12 = -VAR_0;
  goto err_remove_config_dt;
 }

 FUNC_3(VAR_10, VAR_1,
      VAR_2, VAR_11);

 VAR_12 = FUNC_4(&VAR_7->dev, VAR_8, &VAR_9);
 if (VAR_12)
  goto err_remove_config_dt;

 return 0;

err_remove_config_dt:
 FUNC_7(VAR_7, VAR_8);

 return VAR_12;
}
