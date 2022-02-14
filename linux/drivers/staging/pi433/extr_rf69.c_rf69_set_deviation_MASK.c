
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct spi_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct spi_device*,int ,int) ;

int FUNC_3(struct spi_device *VAR_5, u32 VAR_6)
{
 int VAR_7;
 u64 VAR_8;
 u64 VAR_9;
 u8 VAR_10;
 u8 VAR_11;
 u64 VAR_12 = 1000000;


 if (VAR_6 < 600 || VAR_6 > 500000) {
  FUNC_0(&VAR_5->dev, "set_deviation: illegal input param");
  return -VAR_0;
 }


 VAR_9 = VAR_2 * VAR_12;
 FUNC_1(VAR_9, 524288);


 VAR_8 = VAR_6 * VAR_12;
 FUNC_1(VAR_8, VAR_9);

 VAR_10 = (VAR_8 & 0xff00) >> 8;
 VAR_11 = (VAR_8 & 0xff);


 if (VAR_10 & ~VAR_1) {
  FUNC_0(&VAR_5->dev, "set_deviation: err in calc of msb");
  return -VAR_0;
 }


 VAR_7 = FUNC_2(VAR_5, VAR_4, VAR_10);
 if (VAR_7)
  return VAR_7;
 VAR_7 = FUNC_2(VAR_5, VAR_3, VAR_11);
 if (VAR_7)
  return VAR_7;

 return 0;
}
