
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int bits_per_word; int dev; int mode; } ;
struct rtc_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct rtc_device*) ;
 int VAR_0 ;
 int FUNC_1 (struct rtc_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct rtc_device* FUNC_2 (int *,char*,int *,int ) ;
 int FUNC_3 (int *,int ,unsigned char*) ;
 int VAR_3 ;
 int FUNC_4 (struct spi_device*,struct rtc_device*) ;
 int FUNC_5 (struct spi_device*) ;

__attribute__((used)) static int FUNC_6(struct spi_device *VAR_4)
{
 struct rtc_device *VAR_5;
 unsigned char VAR_6;
 int VAR_7;

 VAR_4->mode = VAR_1;
 VAR_4->bits_per_word = 8;
 FUNC_5(VAR_4);

 VAR_7 = FUNC_3(&VAR_4->dev, VAR_0, &VAR_6);
 if (VAR_7 != 0)
  return VAR_7;

 VAR_5 = FUNC_2(&VAR_4->dev, "max6902",
    &VAR_3, VAR_2);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 FUNC_4(VAR_4, VAR_5);
 return 0;
}
