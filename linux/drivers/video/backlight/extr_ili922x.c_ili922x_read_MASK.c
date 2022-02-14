
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef unsigned char u16 ;
struct spi_transfer {unsigned char* tx_buf; unsigned char* rx_buf; int cs_change; int bits_per_word; int len; } ;
struct spi_message {int dummy; } ;
struct spi_device {int dev; } ;


 int FUNC_0 (struct spi_device*,struct spi_transfer*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,char*,int) ;
 int VAR_5 ;
 int FUNC_3 (struct spi_transfer*,int ,int) ;
 unsigned char FUNC_4 (int ) ;
 int FUNC_5 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_6 (struct spi_message*) ;
 int FUNC_7 (struct spi_device*,struct spi_message*) ;

__attribute__((used)) static int FUNC_8(struct spi_device *VAR_6, u8 VAR_7, u16 *VAR_8)
{
 struct spi_message VAR_9;
 struct spi_transfer VAR_10, VAR_11;
 unsigned char VAR_12[VAR_0];
 unsigned char VAR_13[VAR_0];
 int VAR_14, VAR_15 = 0, VAR_16;

 FUNC_3(&VAR_10, 0, sizeof(struct spi_transfer));
 FUNC_3(&VAR_11, 0, sizeof(struct spi_transfer));
 FUNC_6(&VAR_9);
 VAR_10.tx_buf = VAR_12;
 VAR_10.rx_buf = VAR_13;
 VAR_10.cs_change = 1;
 FUNC_0(VAR_6, &VAR_10);

 VAR_12[0] = FUNC_4(FUNC_1(VAR_5, VAR_1,
      VAR_4));
 VAR_12[1] = FUNC_4(0);
 VAR_12[2] = FUNC_4(VAR_7);
 VAR_10.bits_per_word = 8;
 VAR_15 = VAR_10.len = 3;
 FUNC_5(&VAR_10, &VAR_9);

 VAR_16 = VAR_15;

 VAR_12[VAR_15++] = FUNC_4(FUNC_1(VAR_5, VAR_2,
          VAR_3));
 VAR_12[VAR_15++] = FUNC_4(0);
 VAR_12[VAR_15] = FUNC_4(0);

 VAR_11.cs_change = 1;
 VAR_11.len = 3;
 VAR_11.tx_buf = &VAR_12[VAR_16];
 VAR_11.rx_buf = &VAR_13[VAR_16];
 FUNC_0(VAR_6, &VAR_11);

 FUNC_5(&VAR_11, &VAR_9);
 VAR_14 = FUNC_7(VAR_6, &VAR_9);
 if (VAR_14 < 0) {
  FUNC_2(&VAR_6->dev, "Error sending SPI message 0x%x", VAR_14);
  return VAR_14;
 }

 *VAR_8 = (VAR_13[1 + VAR_16] << 8) + VAR_13[2 + VAR_16];
 return 0;
}
