
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wilc_sdio {int dummy; } ;
struct wilc {struct gpio_desc* rtc_clk; struct gpio_desc* gpio_irq; int * dev; struct wilc_sdio* bus_data; } ;
struct sdio_func {int dev; TYPE_1__* card; } ;
struct sdio_device_id {int dummy; } ;
struct gpio_desc {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct gpio_desc*) ;
 int FUNC_2 (struct gpio_desc*) ;
 int VAR_6 ;
 int FUNC_3 (struct gpio_desc*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*) ;
 struct gpio_desc* FUNC_6 (int *,char*) ;
 struct gpio_desc* FUNC_7 (int ) ;
 struct gpio_desc* FUNC_8 (int *,char*,int ) ;
 int FUNC_9 (struct wilc_sdio*) ;
 struct wilc_sdio* FUNC_10 (int,int ) ;
 int FUNC_11 (struct sdio_func*,struct wilc*) ;
 int FUNC_12 (struct wilc**,int *,int ,int *) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_13(struct sdio_func *VAR_8,
      const struct sdio_device_id *VAR_9)
{
 struct wilc *VAR_10;
 int VAR_11;
 struct gpio_desc *VAR_12 = ((void*)0);
 struct wilc_sdio *VAR_13;

 VAR_13 = FUNC_10(sizeof(*VAR_13), VAR_3);
 if (!VAR_13)
  return -VAR_1;

 if (FUNC_0(VAR_0)) {
  VAR_12 = FUNC_8(&VAR_8->dev, "irq", VAR_4);
  if (FUNC_1(VAR_12)) {

   VAR_12 = FUNC_7(VAR_5);
   if (!VAR_12)
    FUNC_4(&VAR_8->dev, "failed to get irq gpio\n");
  }
 }

 VAR_11 = FUNC_12(&VAR_10, &VAR_8->dev, VAR_6,
     &VAR_7);
 if (VAR_11) {
  FUNC_9(VAR_13);
  return VAR_11;
 }
 FUNC_11(VAR_8, VAR_10);
 VAR_10->bus_data = VAR_13;
 VAR_10->dev = &VAR_8->dev;
 VAR_10->gpio_irq = VAR_12;

 VAR_10->rtc_clk = FUNC_6(&VAR_8->card->dev, "rtc_clk");
 if (FUNC_2(VAR_10->rtc_clk) == -VAR_2)
  return -VAR_2;
 else if (!FUNC_1(VAR_10->rtc_clk))
  FUNC_3(VAR_10->rtc_clk);

 FUNC_5(&VAR_8->dev, "Driver Initializing success\n");
 return 0;
}
