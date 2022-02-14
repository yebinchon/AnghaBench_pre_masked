
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct spi_transfer {unsigned char* tx_buf; unsigned char* rx_buf; int cs_change; int bits_per_word; int len; } ;
struct spi_message {int dummy; } ;
struct spi_device {int dev; } ;


 int FUNC_0 (struct spi_device*,struct spi_transfer*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,char*,int) ;
 int VAR_4 ;
 int FUNC_3 (struct spi_transfer*,int ,int) ;
 unsigned char FUNC_4 (int) ;
 int FUNC_5 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_6 (struct spi_message*) ;
 int FUNC_7 (struct spi_device*,struct spi_message*) ;

__attribute__((used)) static int FUNC_8(struct spi_device *VAR_5, u8 VAR_6, u16 VAR_7)
{
 struct spi_message VAR_8;
 struct spi_transfer VAR_9, VAR_10;
 unsigned char VAR_11[VAR_0];
 unsigned char VAR_12[VAR_0];
 int VAR_13;

 FUNC_3(&VAR_9, 0, sizeof(struct spi_transfer));
 FUNC_3(&VAR_10, 0, sizeof(struct spi_transfer));

 FUNC_6(&VAR_8);
 VAR_9.tx_buf = VAR_11;
 VAR_9.rx_buf = VAR_12;
 VAR_9.cs_change = 1;
 FUNC_0(VAR_5, &VAR_9);

 VAR_11[0] = FUNC_4(FUNC_1(VAR_4, VAR_1,
      VAR_3));
 VAR_11[1] = FUNC_4(0);
 VAR_11[2] = FUNC_4(VAR_6);
 VAR_9.bits_per_word = 8;
 VAR_9.len = 3;
 FUNC_5(&VAR_9, &VAR_8);

 VAR_13 = FUNC_7(VAR_5, &VAR_8);

 FUNC_6(&VAR_8);
 VAR_11[0] = FUNC_4(FUNC_1(VAR_4, VAR_2,
      VAR_3));
 VAR_11[1] = FUNC_4((VAR_7 & 0xFF00) >> 8);
 VAR_11[2] = FUNC_4(VAR_7 & 0x00FF);

 VAR_10.cs_change = 1;
 VAR_10.len = 3;
 VAR_10.tx_buf = VAR_11;
 VAR_10.rx_buf = VAR_12;
 FUNC_0(VAR_5, &VAR_10);

 FUNC_5(&VAR_10, &VAR_8);

 VAR_13 = FUNC_7(VAR_5, &VAR_8);
 if (VAR_13 < 0) {
  FUNC_2(&VAR_5->dev, "Error sending SPI message 0x%x", VAR_13);
  return VAR_13;
 }
 return 0;
}
