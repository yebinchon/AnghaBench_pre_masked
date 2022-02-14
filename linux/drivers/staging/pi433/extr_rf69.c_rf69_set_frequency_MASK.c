
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef scalar_t__ u32 ;
struct spi_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct spi_device*,int ,int) ;

int FUNC_4(struct spi_device *VAR_5, u32 VAR_6)
{
 int VAR_7;
 u32 VAR_8;
 u64 VAR_9;
 u64 VAR_10;
 u8 VAR_11;
 u8 VAR_12;
 u8 VAR_13;
 u64 VAR_14 = 1000000;


 VAR_10 = VAR_1 * VAR_14;
 FUNC_2(VAR_10, 524288);


 VAR_8 = FUNC_1(VAR_10 * 8388608, VAR_14);
 if (VAR_6 > VAR_8) {
  FUNC_0(&VAR_5->dev, "setFrequency: illegal input param");
  return -VAR_0;
 }


 VAR_9 = VAR_6 * VAR_14;
 FUNC_2(VAR_9, VAR_10);

 VAR_11 = (VAR_9 & 0xff0000) >> 16;
 VAR_12 = (VAR_9 & 0xff00) >> 8;
 VAR_13 = (VAR_9 & 0xff);


 VAR_7 = FUNC_3(VAR_5, VAR_4, VAR_11);
 if (VAR_7)
  return VAR_7;
 VAR_7 = FUNC_3(VAR_5, VAR_3, VAR_12);
 if (VAR_7)
  return VAR_7;
 VAR_7 = FUNC_3(VAR_5, VAR_2, VAR_13);
 if (VAR_7)
  return VAR_7;

 return 0;
}
