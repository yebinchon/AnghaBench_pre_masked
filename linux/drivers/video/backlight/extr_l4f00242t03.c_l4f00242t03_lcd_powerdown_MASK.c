
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dev; } ;
struct l4f00242t03_priv {int core_reg; int io_reg; } ;
struct l4f00242t03_pdata {int data_enable_gpio; } ;


 int FUNC_0 (int *,char*) ;
 struct l4f00242t03_pdata* FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 struct l4f00242t03_priv* FUNC_4 (struct spi_device*) ;

__attribute__((used)) static void FUNC_5(struct spi_device *VAR_0)
{
 struct l4f00242t03_pdata *VAR_1 = FUNC_1(&VAR_0->dev);
 struct l4f00242t03_priv *VAR_2 = FUNC_4(VAR_0);

 FUNC_0(&VAR_0->dev, "Powering down LCD\n");

 FUNC_2(VAR_1->data_enable_gpio, 0);

 FUNC_3(VAR_2->io_reg);
 FUNC_3(VAR_2->core_reg);
}
