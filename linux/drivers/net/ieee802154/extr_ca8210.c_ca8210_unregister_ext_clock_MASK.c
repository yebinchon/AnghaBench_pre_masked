
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int of_node; } ;
struct spi_device {TYPE_1__ dev; } ;
struct ca8210_priv {int clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 void FUNC_2 (int ) ;
 struct ca8210_priv* FUNC_3 (struct spi_device*) ;

__attribute__((used)) static void FUNC_4(struct spi_device *VAR_0)
{
 struct ca8210_priv *VAR_1 = FUNC_3(VAR_0);

 if (!VAR_1->clk)
  return

 FUNC_2(VAR_0->dev.of_node);
 FUNC_0(VAR_1->clk);
 FUNC_1(&VAR_0->dev, "External clock unregistered\n");
}
