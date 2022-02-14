
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_msiof_spi_priv {int dummy; } ;
struct platform_device {int dev; } ;


 struct sh_msiof_spi_priv* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sh_msiof_spi_priv*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct sh_msiof_spi_priv *VAR_1 = FUNC_0(VAR_0);

 FUNC_2(VAR_1);
 FUNC_1(&VAR_0->dev);
 return 0;
}
