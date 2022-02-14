
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


 scalar_t__ FUNC_0 (struct rtc_device*) ;
 int VAR_0 ;
 int FUNC_1 (struct rtc_device*) ;
 int VAR_1 ;
 int FUNC_2 (int *,char*) ;
 struct rtc_device* FUNC_3 (int *,int ,int *,int ) ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct spi_device*,struct rtc_device*) ;
 int FUNC_5 (struct spi_device*) ;
 int FUNC_6 (struct spi_device*,int ) ;

__attribute__((used)) static int FUNC_7(struct spi_device *VAR_4)
{
 struct rtc_device *VAR_5;
 int VAR_6;

 VAR_4->bits_per_word = 8;
 FUNC_5(VAR_4);

 VAR_6 = FUNC_6(VAR_4, VAR_0);
 if (VAR_6 < 0) {
  FUNC_2(&VAR_4->dev, "not found.\n");
  return VAR_6;
 }

 VAR_5 = FUNC_3(&VAR_4->dev, VAR_2.driver.name,
     &VAR_3, VAR_1);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 FUNC_4(VAR_4, VAR_5);

 return 0;
}
