
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int transfer ;
struct spi_transfer {unsigned int len; int * rx_buf; int * tx_buf; } ;
struct spi_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,int *,unsigned int) ;
 int FUNC_2 (struct spi_transfer*,int ,int) ;
 int FUNC_3 (struct spi_device*,struct spi_transfer*,int) ;

int FUNC_4(struct spi_device *VAR_3, u8 *VAR_4, unsigned int VAR_5)
{



 struct spi_transfer VAR_6;
 u8 VAR_7[VAR_1 + 1];
 int VAR_8;

 if (VAR_5 > VAR_1) {
  FUNC_0(&VAR_3->dev,
   "read fifo: passed in buffer bigger then internal buffer\n");
  return -VAR_0;
 }


 VAR_7[0] = VAR_2;
 FUNC_2(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.tx_buf = VAR_7;
 VAR_6.rx_buf = VAR_7;
 VAR_6.len = VAR_5 + 1;

 VAR_8 = FUNC_3(VAR_3, &VAR_6, 1);






 FUNC_1(VAR_4, &VAR_7[1], VAR_5);

 return VAR_8;
}
