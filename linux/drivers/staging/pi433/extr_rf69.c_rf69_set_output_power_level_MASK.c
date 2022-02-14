
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
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct spi_device*,int ,int ,int) ;
 int FUNC_2 (struct spi_device*,int ) ;

int FUNC_3(struct spi_device *VAR_9, u8 VAR_10)
{
 u8 VAR_11, VAR_12, VAR_13, VAR_14;
 bool VAR_15, VAR_16, VAR_17, VAR_18;
 u8 VAR_19;


 VAR_11 = FUNC_2(VAR_9, VAR_6);
 VAR_15 = VAR_11 & VAR_2;
 VAR_16 = VAR_11 & VAR_3;
 VAR_17 = VAR_11 & VAR_4;


 VAR_12 = FUNC_2(VAR_9, VAR_5);
 VAR_13 = FUNC_2(VAR_9, VAR_7);
 VAR_14 = FUNC_2(VAR_9, VAR_8);
 VAR_18 = (VAR_12 == 0x0f) && (VAR_13 == 0x5d) && (VAR_14 == 0x7c);

 if (VAR_15 && !VAR_16 && !VAR_17) {
  VAR_10 += 18;
  VAR_19 = 0;
 } else if (!VAR_15 && VAR_16 && !VAR_17) {
  VAR_10 += 18;
  VAR_19 = 16;
 } else if (!VAR_15 && VAR_16 && VAR_17) {
  if (VAR_18)
   VAR_10 += 11;
  else
   VAR_10 += 14;
  VAR_19 = 16;
 } else {
  goto failed;
 }


 if (VAR_10 > 0x1f)
  goto failed;

 if (VAR_10 < VAR_19)
  goto failed;


 return FUNC_1(VAR_9, VAR_6, VAR_1,
       VAR_10);
failed:
 FUNC_0(&VAR_9->dev, "set: illegal input param");
 return -VAR_0;
}
