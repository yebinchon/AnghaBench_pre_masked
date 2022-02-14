
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u16 ;
struct spi_transfer {unsigned char* tx_buf; unsigned char* rx_buf; int cs_change; int bits_per_word; int len; } ;
struct spi_message {int dummy; } ;
struct spi_device {int dev; } ;


 int FUNC_0 (struct spi_device*,struct spi_transfer*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,char*,int) ;
 int VAR_3 ;
 int FUNC_3 (struct spi_transfer*,int ,int) ;
 unsigned char FUNC_4 (int ) ;
 int FUNC_5 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_6 (struct spi_message*) ;
 int FUNC_7 (struct spi_device*,struct spi_message*) ;

__attribute__((used)) static int FUNC_8(struct spi_device *VAR_4, u16 *VAR_5)
{
 struct spi_message VAR_6;
 struct spi_transfer VAR_7;
 unsigned char VAR_8[VAR_0];
 unsigned char VAR_9[VAR_0];
 int VAR_10, VAR_11;

 FUNC_3(&VAR_7, 0, sizeof(struct spi_transfer));
 FUNC_6(&VAR_6);
 VAR_7.tx_buf = VAR_8;
 VAR_7.rx_buf = VAR_9;
 VAR_7.cs_change = 1;
 FUNC_0(VAR_4, &VAR_7);

 VAR_8[0] = FUNC_4(FUNC_1(VAR_3, VAR_1,
      VAR_2));




 for (VAR_11 = 1; VAR_11 < 4; VAR_11++)
  VAR_8[VAR_11] = FUNC_4(0);

 VAR_7.bits_per_word = 8;
 VAR_7.len = 4;
 FUNC_5(&VAR_7, &VAR_6);
 VAR_10 = FUNC_7(VAR_4, &VAR_6);
 if (VAR_10 < 0) {
  FUNC_2(&VAR_4->dev, "Error sending SPI message 0x%x", VAR_10);
  return VAR_10;
 }

 *VAR_5 = (VAR_9[2] << 8) + VAR_9[3];
 return 0;
}
