
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
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct spi_device*,int) ;
 int FUNC_2 (struct spi_device*,int,int) ;

int FUNC_3(struct spi_device *VAR_15, u8 VAR_16, u8 VAR_17)
{
 u8 VAR_18;
 u8 VAR_19;
 u8 VAR_20;
 u8 VAR_21;

 switch (VAR_16) {
 case 0:
  VAR_18 = VAR_1;
  VAR_19 = VAR_9;
  VAR_20 = VAR_7;
  break;
 case 1:
  VAR_18 = VAR_2;
  VAR_19 = VAR_10;
  VAR_20 = VAR_7;
  break;
 case 2:
  VAR_18 = VAR_3;
  VAR_19 = VAR_11;
  VAR_20 = VAR_7;
  break;
 case 3:
  VAR_18 = VAR_4;
  VAR_19 = VAR_12;
  VAR_20 = VAR_7;
  break;
 case 4:
  VAR_18 = VAR_5;
  VAR_19 = VAR_13;
  VAR_20 = VAR_8;
  break;
 case 5:
  VAR_18 = VAR_6;
  VAR_19 = VAR_14;
  VAR_20 = VAR_8;
  break;
 default:
 FUNC_0(&VAR_15->dev, "set: illegal input param");
  return -VAR_0;
 }


 VAR_21 = FUNC_1(VAR_15, VAR_20);

 VAR_21 = VAR_21 & ~VAR_18;

 VAR_21 = VAR_21 | VAR_17 << VAR_19;

 return FUNC_2(VAR_15, VAR_20, VAR_21);
}
