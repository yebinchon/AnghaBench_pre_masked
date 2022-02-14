
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {scalar_t__ len; } ;
struct spi_device {int dummy; } ;
struct spi_controller {int dummy; } ;
struct mtk_spi_slave {int slave_aborted; struct spi_transfer* cur_transfer; int xfer_done; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct spi_controller*,struct spi_device*,struct spi_transfer*) ;
 int FUNC_1 (struct spi_controller*,struct spi_device*,struct spi_transfer*) ;
 int FUNC_2 (int *) ;
 struct mtk_spi_slave* FUNC_3 (struct spi_controller*) ;

__attribute__((used)) static int FUNC_4(struct spi_controller *VAR_1,
          struct spi_device *VAR_2,
          struct spi_transfer *VAR_3)
{
 struct mtk_spi_slave *VAR_4 = FUNC_3(VAR_1);

 FUNC_2(&VAR_4->xfer_done);
 VAR_4->slave_aborted = 0;
 VAR_4->cur_transfer = VAR_3;

 if (VAR_3->len > VAR_0)
  return FUNC_0(VAR_1, VAR_2, VAR_3);
 else
  return FUNC_1(VAR_1, VAR_2, VAR_3);
}
