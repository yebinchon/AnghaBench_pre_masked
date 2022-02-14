
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dev; } ;
struct rtc_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct rtc_device*) ;
 int FUNC_1 (struct rtc_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct rtc_device* FUNC_2 (int *,char*,int *,int ) ;
 int FUNC_3 (int *,int ,unsigned char*) ;
 int VAR_2 ;
 int FUNC_4 (struct spi_device*,struct rtc_device*) ;

__attribute__((used)) static int FUNC_5(struct spi_device *VAR_3)
{
 struct rtc_device *VAR_4;
 unsigned char VAR_5;
 int VAR_6;

 VAR_6 = FUNC_3(&VAR_3->dev, VAR_0, &VAR_5);
 if (VAR_6 != 0)
  return VAR_6;

 VAR_4 = FUNC_2(&VAR_3->dev, "rx4581",
    &VAR_2, VAR_1);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 FUNC_4(VAR_3, VAR_4);
 return 0;
}
