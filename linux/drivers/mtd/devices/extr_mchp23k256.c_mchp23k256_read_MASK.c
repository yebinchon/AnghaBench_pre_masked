
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int transfer ;
struct spi_transfer {unsigned char* tx_buf; size_t len; unsigned char* rx_buf; } ;
struct spi_message {int actual_length; } ;
struct mtd_info {int dummy; } ;
struct mchp23k256_flash {int lock; int spi; } ;
typedef int loff_t ;
typedef int command ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_0 (struct mchp23k256_flash*,int ,unsigned char*) ;
 size_t FUNC_1 (struct mchp23k256_flash*) ;
 int FUNC_2 (struct spi_transfer**,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_6 (struct spi_message*) ;
 int FUNC_7 (int ,struct spi_message*) ;
 struct mchp23k256_flash* FUNC_8 (struct mtd_info*) ;

__attribute__((used)) static int FUNC_9(struct mtd_info *VAR_2, loff_t VAR_3, size_t VAR_4,
      size_t *VAR_5, unsigned char *VAR_6)
{
 struct mchp23k256_flash *VAR_7 = FUNC_8(VAR_2);
 struct spi_transfer VAR_8[2] = {};
 struct spi_message VAR_9;
 unsigned char VAR_10[VAR_0];
 int VAR_11;

 FUNC_6(&VAR_9);

 FUNC_2(&VAR_8, 0, sizeof(VAR_8));
 VAR_10[0] = VAR_1;
 FUNC_0(VAR_7, VAR_3, VAR_10);

 VAR_8[0].tx_buf = VAR_10;
 VAR_8[0].len = FUNC_1(VAR_7);
 FUNC_5(&VAR_8[0], &VAR_9);

 VAR_8[1].rx_buf = VAR_6;
 VAR_8[1].len = VAR_4;
 FUNC_5(&VAR_8[1], &VAR_9);

 FUNC_3(&VAR_7->lock);

 VAR_11 = FUNC_7(VAR_7->spi, &VAR_9);

 FUNC_4(&VAR_7->lock);

 if (VAR_11)
  return VAR_11;

 if (VAR_5 && VAR_9.actual_length > sizeof(VAR_10))
  *VAR_5 += VAR_9.actual_length - sizeof(VAR_10);

 return 0;
}
