
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {int len; } ;
struct spi_master {int dummy; } ;
struct spi_device {int dummy; } ;
struct s3c64xx_spi_driver_data {int dummy; } ;


 int FUNC_0 (struct s3c64xx_spi_driver_data*) ;
 struct s3c64xx_spi_driver_data* FUNC_1 (struct spi_master*) ;

__attribute__((used)) static bool FUNC_2(struct spi_master *VAR_0,
    struct spi_device *VAR_1,
    struct spi_transfer *VAR_2)
{
 struct s3c64xx_spi_driver_data *VAR_3 = FUNC_1(VAR_0);

 return VAR_2->len > (FUNC_0(VAR_3) >> 1) + 1;
}
