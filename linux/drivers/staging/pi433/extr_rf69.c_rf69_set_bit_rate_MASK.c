
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct spi_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct spi_device*,int ,int) ;

int FUNC_2(struct spi_device *VAR_4, u16 VAR_5)
{
 int VAR_6;
 u32 VAR_7;
 u32 VAR_8;
 u8 VAR_9;
 u8 VAR_10;


 VAR_7 = VAR_1 / 8388608;
 if (VAR_5 < VAR_7) {
  FUNC_0(&VAR_4->dev, "setBitRate: illegal input param");
  return -VAR_0;
 }


 VAR_8 = (VAR_1 / VAR_5);

 VAR_9 = (VAR_8 & 0xff00) >> 8;
 VAR_10 = (VAR_8 & 0xff);


 VAR_6 = FUNC_1(VAR_4, VAR_3, VAR_9);
 if (VAR_6)
  return VAR_6;
 VAR_6 = FUNC_1(VAR_4, VAR_2, VAR_10);
 if (VAR_6)
  return VAR_6;

 return 0;
}
