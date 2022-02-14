
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {scalar_t__ tx_nbits; scalar_t__ rx_nbits; } ;
struct spi_device {int mode; } ;
struct spi_controller {int dummy; } ;
struct rspi_data {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct rspi_data*,struct spi_transfer*) ;
 int FUNC_1 (struct rspi_data*,struct spi_transfer*) ;
 int FUNC_2 (struct rspi_data*,struct spi_transfer*) ;
 struct rspi_data* FUNC_3 (struct spi_controller*) ;

__attribute__((used)) static int FUNC_4(struct spi_controller *VAR_2,
        struct spi_device *VAR_3, struct spi_transfer *VAR_4)
{
 struct rspi_data *VAR_5 = FUNC_3(VAR_2);

 if (VAR_3->mode & VAR_0) {
  return FUNC_2(VAR_5, VAR_4);
 } else if (VAR_4->tx_nbits > VAR_1) {

  return FUNC_1(VAR_5, VAR_4);
 } else if (VAR_4->rx_nbits > VAR_1) {

  return FUNC_0(VAR_5, VAR_4);
 } else {

  return FUNC_2(VAR_5, VAR_4);
 }
}
