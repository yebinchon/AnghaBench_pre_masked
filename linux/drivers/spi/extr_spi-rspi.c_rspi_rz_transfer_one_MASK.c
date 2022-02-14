
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {int dummy; } ;
struct spi_device {int dummy; } ;
struct spi_controller {int dummy; } ;
struct rspi_data {int dummy; } ;


 int FUNC_0 (struct rspi_data*,struct spi_transfer*) ;
 int FUNC_1 (struct rspi_data*) ;
 struct rspi_data* FUNC_2 (struct spi_controller*) ;

__attribute__((used)) static int FUNC_3(struct spi_controller *VAR_0,
    struct spi_device *VAR_1,
    struct spi_transfer *VAR_2)
{
 struct rspi_data *VAR_3 = FUNC_2(VAR_0);

 FUNC_1(VAR_3);

 return FUNC_0(VAR_3, VAR_2);
}
