
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
typedef int t ;
struct tps6524x {int dev; int spi; } ;
struct spi_transfer {int* tx_buf; int len; int bits_per_word; int* rx_buf; } ;
struct spi_message {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,int,int,int) ;
 int FUNC_2 (struct spi_transfer*,int ,int) ;
 int FUNC_3 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_4 (struct spi_message*) ;
 int FUNC_5 (int ,struct spi_message*) ;

__attribute__((used)) static int FUNC_6(struct tps6524x *VAR_5, int VAR_6)
{
 int VAR_7 = 0;
 u16 VAR_8 = FUNC_0(VAR_6), VAR_9;
 u8 VAR_10;
 struct spi_message VAR_11;
 struct spi_transfer VAR_12[3];

 FUNC_4(&VAR_11);
 FUNC_2(VAR_12, 0, sizeof(VAR_12));

 VAR_12[0].tx_buf = &VAR_8;
 VAR_12[0].len = 2;
 VAR_12[0].bits_per_word = 12;
 FUNC_3(&VAR_12[0], &VAR_11);

 VAR_12[1].rx_buf = &VAR_9;
 VAR_12[1].len = 2;
 VAR_12[1].bits_per_word = 16;
 FUNC_3(&VAR_12[1], &VAR_11);

 VAR_12[2].rx_buf = &VAR_10;
 VAR_12[2].len = 1;
 VAR_12[2].bits_per_word = 4;
 FUNC_3(&VAR_12[2], &VAR_11);

 VAR_7 = FUNC_5(VAR_5->spi, &VAR_11);
 if (VAR_7 < 0)
  return VAR_7;

 FUNC_1(VAR_5->dev, "read reg %d, data %x, status %x\n",
  VAR_6, VAR_9, VAR_10);

 if (!(VAR_10 & VAR_2) || (VAR_10 & VAR_4))
  return -VAR_1;

 if (VAR_10 & VAR_3)
  return -VAR_0;

 return VAR_9;
}
