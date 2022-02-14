
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; int name; } ;
struct moxart_rtc {int gpio_data; int gpio_sclk; int gpio_reset; int rtc; int rtc_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*,char*,...) ;
 int FUNC_3 (TYPE_1__*,int,char*) ;
 int FUNC_4 (TYPE_1__*,int,int ,char*) ;
 struct moxart_rtc* FUNC_5 (TYPE_1__*,int,int ) ;
 int FUNC_6 (TYPE_1__*,int ,int *,int ) ;
 int FUNC_7 (int) ;
 int VAR_4 ;
 void* FUNC_8 (int ,char*,int ) ;
 int FUNC_9 (struct platform_device*,struct moxart_rtc*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_5)
{
 struct moxart_rtc *VAR_6;
 int VAR_7 = 0;

 VAR_6 = FUNC_5(&VAR_5->dev, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->gpio_data = FUNC_8(VAR_5->dev.of_node,
        "gpio-rtc-data", 0);
 if (!FUNC_7(VAR_6->gpio_data)) {
  FUNC_2(&VAR_5->dev, "invalid gpio (data): %d\n",
   VAR_6->gpio_data);
  return VAR_6->gpio_data;
 }

 VAR_6->gpio_sclk = FUNC_8(VAR_5->dev.of_node,
        "gpio-rtc-sclk", 0);
 if (!FUNC_7(VAR_6->gpio_sclk)) {
  FUNC_2(&VAR_5->dev, "invalid gpio (sclk): %d\n",
   VAR_6->gpio_sclk);
  return VAR_6->gpio_sclk;
 }

 VAR_6->gpio_reset = FUNC_8(VAR_5->dev.of_node,
         "gpio-rtc-reset", 0);
 if (!FUNC_7(VAR_6->gpio_reset)) {
  FUNC_2(&VAR_5->dev, "invalid gpio (reset): %d\n",
   VAR_6->gpio_reset);
  return VAR_6->gpio_reset;
 }

 FUNC_10(&VAR_6->rtc_lock);
 FUNC_9(VAR_5, VAR_6);

 VAR_7 = FUNC_3(&VAR_5->dev, VAR_6->gpio_data, "rtc_data");
 if (VAR_7) {
  FUNC_2(&VAR_5->dev, "can't get rtc_data gpio\n");
  return VAR_7;
 }

 VAR_7 = FUNC_4(&VAR_5->dev, VAR_6->gpio_sclk,
        VAR_2, "rtc_sclk");
 if (VAR_7) {
  FUNC_2(&VAR_5->dev, "can't get rtc_sclk gpio\n");
  return VAR_7;
 }

 VAR_7 = FUNC_4(&VAR_5->dev, VAR_6->gpio_reset,
        VAR_2, "rtc_reset");
 if (VAR_7) {
  FUNC_2(&VAR_5->dev, "can't get rtc_reset gpio\n");
  return VAR_7;
 }

 VAR_6->rtc = FUNC_6(&VAR_5->dev, VAR_5->name,
         &VAR_4,
         VAR_3);
 if (FUNC_0(VAR_6->rtc)) {
  FUNC_2(&VAR_5->dev, "devm_rtc_device_register failed\n");
  return FUNC_1(VAR_6->rtc);
 }

 return 0;
}
