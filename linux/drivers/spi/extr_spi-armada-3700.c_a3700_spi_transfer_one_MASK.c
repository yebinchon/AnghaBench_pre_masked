
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {scalar_t__ rx_buf; scalar_t__ tx_buf; } ;
struct spi_master {int dummy; } ;
struct spi_device {int dummy; } ;


 int FUNC_0 (struct spi_master*,struct spi_device*,struct spi_transfer*) ;
 int FUNC_1 (struct spi_master*,struct spi_device*,struct spi_transfer*) ;
 int FUNC_2 (struct spi_device*,struct spi_transfer*) ;

__attribute__((used)) static int FUNC_3(struct spi_master *VAR_0,
      struct spi_device *VAR_1,
      struct spi_transfer *VAR_2)
{
 FUNC_2(VAR_1, VAR_2);

 if (VAR_2->tx_buf && VAR_2->rx_buf)
  return FUNC_1(VAR_0, VAR_1, VAR_2);

 return FUNC_0(VAR_0, VAR_1, VAR_2);
}
