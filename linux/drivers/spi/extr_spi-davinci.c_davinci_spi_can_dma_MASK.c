
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {scalar_t__ len; int tx_buf; int rx_buf; } ;
struct spi_master {int dummy; } ;
struct spi_device {struct davinci_spi_config* controller_data; } ;
struct davinci_spi_config {scalar_t__ io_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(struct spi_master *VAR_2,
    struct spi_device *VAR_3,
    struct spi_transfer *VAR_4)
{
 struct davinci_spi_config *VAR_5 = VAR_3->controller_data;
 bool VAR_6 = 0;

 if (VAR_5)
  VAR_6 = (VAR_5->io_type == VAR_1) &&
   (VAR_4->len >= VAR_0) &&
   !FUNC_0(VAR_4->rx_buf) &&
   !FUNC_0(VAR_4->tx_buf);

 return VAR_6;
}
