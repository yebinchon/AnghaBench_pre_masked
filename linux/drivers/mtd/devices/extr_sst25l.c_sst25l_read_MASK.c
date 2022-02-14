
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int transfer ;
struct sst25l_flash {int lock; int spi; } ;
struct spi_transfer {unsigned char* tx_buf; int len; unsigned char* rx_buf; } ;
struct spi_message {int actual_length; } ;
struct mtd_info {int dummy; } ;
typedef int loff_t ;
typedef int command ;


 unsigned char VAR_0 ;
 int FUNC_0 (struct spi_transfer**,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_4 (struct spi_message*) ;
 int FUNC_5 (int ,struct spi_message*) ;
 int FUNC_6 (struct sst25l_flash*) ;
 struct sst25l_flash* FUNC_7 (struct mtd_info*) ;

__attribute__((used)) static int FUNC_8(struct mtd_info *VAR_1, loff_t VAR_2, size_t VAR_3,
         size_t *VAR_4, unsigned char *VAR_5)
{
 struct sst25l_flash *VAR_6 = FUNC_7(VAR_1);
 struct spi_transfer VAR_7[2];
 struct spi_message VAR_8;
 unsigned char VAR_9[4];
 int VAR_10;

 FUNC_4(&VAR_8);
 FUNC_0(&VAR_7, 0, sizeof(VAR_7));

 VAR_9[0] = VAR_0;
 VAR_9[1] = VAR_2 >> 16;
 VAR_9[2] = VAR_2 >> 8;
 VAR_9[3] = VAR_2;

 VAR_7[0].tx_buf = VAR_9;
 VAR_7[0].len = sizeof(VAR_9);
 FUNC_3(&VAR_7[0], &VAR_8);

 VAR_7[1].rx_buf = VAR_5;
 VAR_7[1].len = VAR_3;
 FUNC_3(&VAR_7[1], &VAR_8);

 FUNC_1(&VAR_6->lock);


 VAR_10 = FUNC_6(VAR_6);
 if (VAR_10) {
  FUNC_2(&VAR_6->lock);
  return VAR_10;
 }

 FUNC_5(VAR_6->spi, &VAR_8);

 if (VAR_4 && VAR_8.actual_length > sizeof(VAR_9))
  *VAR_4 += VAR_8.actual_length - sizeof(VAR_9);

 FUNC_2(&VAR_6->lock);
 return 0;
}
