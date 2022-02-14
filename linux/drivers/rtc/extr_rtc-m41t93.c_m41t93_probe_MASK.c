
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spi_device {int bits_per_word; int dev; } ;
struct rtc_device {int dummy; } ;
struct TYPE_3__ {int name; } ;
struct TYPE_4__ {TYPE_1__ driver; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rtc_device*) ;
 int VAR_1 ;
 int FUNC_1 (struct rtc_device*) ;
 int VAR_2 ;
 int FUNC_2 (int *,char*,int) ;
 struct rtc_device* FUNC_3 (int *,int ,int *,int ) ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct spi_device*,struct rtc_device*) ;
 int FUNC_5 (struct spi_device*) ;
 int FUNC_6 (struct spi_device*,int ) ;

__attribute__((used)) static int FUNC_7(struct spi_device *VAR_5)
{
 struct rtc_device *VAR_6;
 int VAR_7;

 VAR_5->bits_per_word = 8;
 FUNC_5(VAR_5);

 VAR_7 = FUNC_6(VAR_5, VAR_1);
 if (VAR_7 < 0 || (VAR_7 & 0xf8) != 0) {
  FUNC_2(&VAR_5->dev, "not found 0x%x.\n", VAR_7);
  return -VAR_0;
 }

 VAR_6 = FUNC_3(&VAR_5->dev, VAR_3.driver.name,
     &VAR_4, VAR_2);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 FUNC_4(VAR_5, VAR_6);

 return 0;
}
