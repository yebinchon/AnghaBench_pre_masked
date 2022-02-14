
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct mii_bus {struct fsl_pq_mdio_priv* priv; } ;
struct fsl_pq_mdio_priv {int map; } ;


 struct mii_bus* FUNC_0 (struct device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mii_bus*) ;
 int FUNC_3 (struct mii_bus*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct device *VAR_1 = &VAR_0->dev;
 struct mii_bus *VAR_2 = FUNC_0(VAR_1);
 struct fsl_pq_mdio_priv *VAR_3 = VAR_2->priv;

 FUNC_3(VAR_2);

 FUNC_1(VAR_3->map);
 FUNC_2(VAR_2);

 return 0;
}
