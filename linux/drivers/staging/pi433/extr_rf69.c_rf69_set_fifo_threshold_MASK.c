
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct spi_device*,int*,int) ;
 int FUNC_2 (struct spi_device*,int ,int ,int) ;

int FUNC_3(struct spi_device *VAR_3, u8 VAR_4)
{
 int VAR_5;


 if (VAR_4 & 0x80) {
  FUNC_0(&VAR_3->dev, "set: illegal input param");
  return -VAR_0;
 }


 VAR_5 = FUNC_2(VAR_3, VAR_2,
         VAR_1,
         VAR_4);
 if (VAR_5)
  return VAR_5;





 return FUNC_1(VAR_3, (u8 *)&VAR_5, 1);
}
