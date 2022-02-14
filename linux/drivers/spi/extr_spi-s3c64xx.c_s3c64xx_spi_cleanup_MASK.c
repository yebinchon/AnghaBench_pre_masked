
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ of_node; } ;
struct spi_device {int cs_gpio; TYPE_1__ dev; } ;
struct s3c64xx_spi_csinfo {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct s3c64xx_spi_csinfo*) ;
 struct s3c64xx_spi_csinfo* FUNC_3 (struct spi_device*) ;
 int FUNC_4 (struct spi_device*,int *) ;

__attribute__((used)) static void FUNC_5(struct spi_device *VAR_1)
{
 struct s3c64xx_spi_csinfo *VAR_2 = FUNC_3(VAR_1);

 if (FUNC_1(VAR_1->cs_gpio)) {
  FUNC_0(VAR_1->cs_gpio);
  if (VAR_1->dev.of_node)
   FUNC_2(VAR_2);
  else {





   VAR_1->cs_gpio = -VAR_0;
  }
 }

 FUNC_4(VAR_1, ((void*)0));
}
