
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct spi_transfer {int* tx_buf; int* rx_buf; int len; } ;
struct spi_message {int dummy; } ;
struct max3100_port {int tx_empty; TYPE_1__* spi; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,char*,int,int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_5 (struct spi_message*) ;
 int FUNC_6 (TYPE_1__*,struct spi_message*) ;

__attribute__((used)) static int FUNC_7(struct max3100_port *VAR_2, u16 VAR_3, u16 *VAR_4)
{
 struct spi_message VAR_5;
 u16 VAR_6, VAR_7;
 int VAR_8;
 struct spi_transfer VAR_9 = {
  .tx_buf = &VAR_6,
  .rx_buf = &VAR_7,
  .len = 2,
 };

 VAR_6 = FUNC_1(VAR_3);
 FUNC_5(&VAR_5);
 FUNC_4(&VAR_9, &VAR_5);
 VAR_8 = FUNC_6(VAR_2->spi, &VAR_5);
 if (VAR_8) {
  FUNC_3(&VAR_2->spi->dev, "error while calling spi_sync\n");
  return -VAR_0;
 }
 *VAR_4 = FUNC_0(VAR_7);
 VAR_2->tx_empty = (*VAR_4 & VAR_1) > 0;
 FUNC_2(&VAR_2->spi->dev, "%04x - %04x\n", VAR_3, *VAR_4);
 return 0;
}
