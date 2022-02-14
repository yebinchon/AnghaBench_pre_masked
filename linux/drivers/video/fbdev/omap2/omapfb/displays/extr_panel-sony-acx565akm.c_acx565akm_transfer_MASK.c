
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfer ;
typedef int u8 ;
struct spi_transfer {int* tx_buf; int bits_per_word; int len; int* rx_buf; } ;
struct spi_message {int dummy; } ;
struct panel_drv_data {TYPE_1__* spi; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct spi_transfer*,int ,int) ;
 int FUNC_3 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_4 (struct spi_message*) ;
 int FUNC_5 (TYPE_1__*,struct spi_message*) ;

__attribute__((used)) static void FUNC_6(struct panel_drv_data *VAR_0, int VAR_1,
         const u8 *VAR_2, int VAR_3, u8 *VAR_4, int VAR_5)
{
 struct spi_message VAR_6;
 struct spi_transfer *VAR_7, VAR_8[5];
 int VAR_9;

 FUNC_0(VAR_0->spi == ((void*)0));

 FUNC_4(&VAR_6);

 FUNC_2(VAR_8, 0, sizeof(VAR_8));
 VAR_7 = &VAR_8[0];

 VAR_1 &= 0xff;
 VAR_7->tx_buf = &VAR_1;
 VAR_7->bits_per_word = 9;
 VAR_7->len = 2;

 if (VAR_5 > 1 && VAR_3 == 0) {





  VAR_7->bits_per_word = 10;
  VAR_1 <<= 1;
 }
 FUNC_3(VAR_7, &VAR_6);

 if (VAR_3) {
  VAR_7++;
  VAR_7->tx_buf = VAR_2;
  VAR_7->len = VAR_3;
  VAR_7->bits_per_word = 9;
  FUNC_3(VAR_7, &VAR_6);
 }

 if (VAR_5) {
  VAR_7++;
  VAR_7->rx_buf = VAR_4;
  VAR_7->len = VAR_5;
  FUNC_3(VAR_7, &VAR_6);
 }

 VAR_9 = FUNC_5(VAR_0->spi, &VAR_6);
 if (VAR_9 < 0)
  FUNC_1(&VAR_0->spi->dev, "spi_sync %d\n", VAR_9);
}
