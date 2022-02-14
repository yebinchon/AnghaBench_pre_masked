
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcan4x5x_priv {int mcan_dev; int power; } ;
struct spi_device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct tcan4x5x_priv* FUNC_1 (struct spi_device*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct spi_device *VAR_0)
{
 struct tcan4x5x_priv *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(VAR_1->power, 0);

 FUNC_0(VAR_1->mcan_dev);

 return 0;
}
