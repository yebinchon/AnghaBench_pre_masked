
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {scalar_t__ len; scalar_t__ rx_buf; scalar_t__ tx_buf; } ;
struct spi_master {int dummy; } ;
struct spi_device {int dummy; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct spi_master *VAR_1,
       struct spi_device *VAR_2,
       struct spi_transfer *VAR_3)
{

 return (VAR_3->len > VAR_0 &&
  (unsigned long)VAR_3->tx_buf % 4 == 0 &&
  (unsigned long)VAR_3->rx_buf % 4 == 0);
}
