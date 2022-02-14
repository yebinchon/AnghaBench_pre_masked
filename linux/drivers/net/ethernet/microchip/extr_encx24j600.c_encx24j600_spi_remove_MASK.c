
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dev; } ;
struct encx24j600_priv {int ndev; } ;


 struct encx24j600_priv* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct spi_device *VAR_0)
{
 struct encx24j600_priv *VAR_1 = FUNC_0(&VAR_0->dev);

 FUNC_2(VAR_1->ndev);

 FUNC_1(VAR_1->ndev);

 return 0;
}
