
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmmac_resources {int mac; } ;
struct platform_device {int dev; } ;
struct plat_stmmacenet_data {struct plat_stmmacenet_data* bsp_priv; int exit; int (* init ) (struct platform_device*,struct plat_stmmacenet_data*) ;} ;
struct anarion_gmac {struct anarion_gmac* bsp_priv; int exit; int (* init ) (struct platform_device*,struct plat_stmmacenet_data*) ;} ;


 scalar_t__ FUNC_0 (struct plat_stmmacenet_data*) ;
 int FUNC_1 (struct plat_stmmacenet_data*) ;
 struct plat_stmmacenet_data* FUNC_2 (struct platform_device*) ;
 int VAR_0 ;
 int FUNC_3 (struct platform_device*,struct plat_stmmacenet_data*) ;
 int FUNC_4 (int *,struct plat_stmmacenet_data*,struct stmmac_resources*) ;
 int FUNC_5 (struct platform_device*,struct stmmac_resources*) ;
 struct plat_stmmacenet_data* FUNC_6 (struct platform_device*,int *) ;
 int FUNC_7 (struct platform_device*,struct plat_stmmacenet_data*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_1)
{
 int VAR_2;
 struct anarion_gmac *VAR_3;
 struct plat_stmmacenet_data *VAR_4;
 struct stmmac_resources VAR_5;

 VAR_2 = FUNC_5(VAR_1, &VAR_5);
 if (VAR_2)
  return VAR_2;

 VAR_3 = FUNC_2(VAR_1);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 VAR_4 = FUNC_6(VAR_1, &VAR_5.mac);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_4->init = FUNC_3;
 VAR_4->exit = VAR_0;
 FUNC_3(VAR_1, VAR_3);
 VAR_4->bsp_priv = VAR_3;

 VAR_2 = FUNC_4(&VAR_1->dev, VAR_4, &VAR_5);
 if (VAR_2) {
  FUNC_7(VAR_1, VAR_4);
  return VAR_2;
 }

 return 0;
}
