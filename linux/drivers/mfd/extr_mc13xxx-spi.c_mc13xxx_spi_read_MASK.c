
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {unsigned char* tx_buf; unsigned char* rx_buf; int len; } ;
struct spi_message {int dummy; } ;
struct spi_device {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,unsigned char*,int) ;
 int FUNC_1 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_2 (struct spi_message*) ;
 int FUNC_3 (struct spi_device*,struct spi_message*) ;
 struct spi_device* FUNC_4 (struct device*) ;

__attribute__((used)) static int FUNC_5(void *VAR_1, const void *VAR_2, size_t VAR_3,
    void *VAR_4, size_t VAR_5)
{
 unsigned char VAR_6[4] = { *((unsigned char *) VAR_2), 0, 0, 0};
 unsigned char VAR_7[4];
 unsigned char *VAR_8 = VAR_4;
 struct device *VAR_9 = VAR_1;
 struct spi_device *VAR_10 = FUNC_4(VAR_9);
 struct spi_transfer VAR_11 = {
  .tx_buf = VAR_6,
  .rx_buf = VAR_7,
  .len = 4,
 };

 struct spi_message VAR_12;
 int VAR_13;

 if (VAR_5 != 3 || VAR_3 != 1)
  return -VAR_0;

 FUNC_2(&VAR_12);
 FUNC_1(&VAR_11, &VAR_12);
 VAR_13 = FUNC_3(VAR_10, &VAR_12);

 FUNC_0(VAR_8, &VAR_7[1], 3);

 return VAR_13;
}
