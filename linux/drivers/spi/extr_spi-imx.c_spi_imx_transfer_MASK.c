
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_transfer {int dummy; } ;
struct spi_imx_data {scalar_t__ usedma; scalar_t__ slave_mode; scalar_t__ base; TYPE_1__* devtype_data; } ;
struct spi_device {int master; } ;
struct TYPE_2__ {scalar_t__ (* rx_available ) (struct spi_imx_data*) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct spi_imx_data*,struct spi_transfer*) ;
 int FUNC_2 (struct spi_device*,struct spi_transfer*) ;
 int FUNC_3 (struct spi_device*,struct spi_transfer*) ;
 struct spi_imx_data* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct spi_imx_data*) ;

__attribute__((used)) static int FUNC_6(struct spi_device *VAR_1,
    struct spi_transfer *VAR_2)
{
 struct spi_imx_data *VAR_3 = FUNC_4(VAR_1->master);


 while (VAR_3->devtype_data->rx_available(VAR_3))
  FUNC_0(VAR_3->base + VAR_0);

 if (VAR_3->slave_mode)
  return FUNC_3(VAR_1, VAR_2);

 if (VAR_3->usedma)
  return FUNC_1(VAR_3, VAR_2);
 else
  return FUNC_2(VAR_1, VAR_2);
}
