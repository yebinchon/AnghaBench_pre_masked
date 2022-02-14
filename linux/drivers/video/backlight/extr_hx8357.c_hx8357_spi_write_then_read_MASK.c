
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfer ;
typedef int u8 ;
typedef int u16 ;
struct spi_transfer {int len; int bits_per_word; int* tx_buf; int* rx_buf; } ;
struct spi_message {int dummy; } ;
struct lcd_device {int dev; } ;
struct hx8357_data {int spi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int* FUNC_1 (int,int,int ) ;
 int FUNC_2 (int*) ;
 struct hx8357_data* FUNC_3 (struct lcd_device*) ;
 int FUNC_4 (struct spi_transfer*,int ,int) ;
 int FUNC_5 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_6 (struct spi_message*) ;
 int FUNC_7 (int ,struct spi_message*) ;

__attribute__((used)) static int FUNC_8(struct lcd_device *VAR_2,
    u8 *VAR_3, u16 VAR_4,
    u8 *VAR_5, u16 VAR_6)
{
 struct hx8357_data *VAR_7 = FUNC_3(VAR_2);
 struct spi_message VAR_8;
 struct spi_transfer VAR_9[2];
 u16 *VAR_10 = ((void*)0);
 int VAR_11 = 0;

 FUNC_4(VAR_9, 0, sizeof(VAR_9));
 FUNC_6(&VAR_8);

 if (VAR_4) {
  int VAR_12;

  VAR_10 = FUNC_1(VAR_4, sizeof(*VAR_10), VAR_1);

  if (!VAR_10)
   return -VAR_0;

  for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++) {
   VAR_10[VAR_12] = VAR_3[VAR_12];
   if (VAR_12 > 0)
    VAR_10[VAR_12] |= 1 << 8;
  }

  VAR_9[0].len = 2 * VAR_4;
  VAR_9[0].bits_per_word = 9;
  VAR_9[0].tx_buf = VAR_10;
  FUNC_5(&VAR_9[0], &VAR_8);
 }

 if (VAR_6) {
  VAR_9[1].len = VAR_6;
  VAR_9[1].bits_per_word = 8;
  VAR_9[1].rx_buf = VAR_5;
  FUNC_5(&VAR_9[1], &VAR_8);
 }

 VAR_11 = FUNC_7(VAR_7->spi, &VAR_8);
 if (VAR_11 < 0)
  FUNC_0(&VAR_2->dev, "Couldn't send SPI data\n");

 if (VAR_4)
  FUNC_2(VAR_10);

 return VAR_11;
}
