
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int bits_per_word; int dev; int mode; } ;
struct rtc_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct rtc_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct rtc_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,char*,unsigned char) ;
 struct rtc_device* FUNC_3 (int *,char*,int *,int ) ;
 int FUNC_4 (int *,int ,unsigned char*) ;
 int VAR_5 ;
 int FUNC_5 (int *,int ,unsigned char) ;
 int FUNC_6 (struct spi_device*,struct rtc_device*) ;
 int FUNC_7 (struct spi_device*) ;

__attribute__((used)) static int FUNC_8(struct spi_device *VAR_6)
{
 struct rtc_device *VAR_7;
 unsigned char VAR_8;
 int VAR_9;


 VAR_6->mode = VAR_3;
 VAR_6->bits_per_word = 8;
 FUNC_7(VAR_6);


 VAR_9 = FUNC_4(&VAR_6->dev, VAR_1, &VAR_8);
 if (VAR_9)
  return VAR_9;


 FUNC_4(&VAR_6->dev, VAR_0, &VAR_8);
 VAR_8 = VAR_8 & ~(1 << 7);
 FUNC_5(&VAR_6->dev, VAR_0, VAR_8);


 FUNC_4(&VAR_6->dev, VAR_2, &VAR_8);
 VAR_8 = VAR_8 & 0x1B;
 FUNC_5(&VAR_6->dev, VAR_2, VAR_8);


 FUNC_4(&VAR_6->dev, VAR_0, &VAR_8);
 FUNC_2(&VAR_6->dev, "MAX6916 RTC CTRL Reg = 0x%02x\n", VAR_8);

 FUNC_4(&VAR_6->dev, VAR_2, &VAR_8);
 FUNC_2(&VAR_6->dev, "MAX6916 RTC Status Reg = 0x%02x\n", VAR_8);

 VAR_7 = FUNC_3(&VAR_6->dev, "max6916",
           &VAR_5, VAR_4);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 FUNC_6(VAR_6, VAR_7);

 return 0;
}
