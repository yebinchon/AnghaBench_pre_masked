
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int*,int*,unsigned int) ;
 int FUNC_2 (struct spi_device*,int*,unsigned int) ;

int FUNC_3(struct spi_device *VAR_4, u8 *VAR_5, unsigned int VAR_6)
{



 u8 VAR_7[VAR_1 + 1];

 if (VAR_6 > VAR_1) {
  FUNC_0(&VAR_4->dev,
   "read fifo: passed in buffer bigger then internal buffer\n");
  return -VAR_0;
 }

 VAR_7[0] = VAR_2 | VAR_3;
 FUNC_1(&VAR_7[1], VAR_5, VAR_6);






 return FUNC_2(VAR_4, VAR_7, VAR_6 + 1);
}
