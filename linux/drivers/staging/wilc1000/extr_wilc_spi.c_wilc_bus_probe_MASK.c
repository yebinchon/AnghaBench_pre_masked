
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wilc_spi {int dummy; } ;
struct wilc {struct gpio_desc* gpio_irq; struct wilc_spi* bus_data; int * dev; } ;
struct spi_device {int dev; } ;
struct gpio_desc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct gpio_desc*) ;
 int VAR_4 ;
 int FUNC_1 (int *,char*) ;
 struct gpio_desc* FUNC_2 (int ) ;
 struct gpio_desc* FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (struct wilc_spi*) ;
 struct wilc_spi* FUNC_5 (int,int ) ;
 int FUNC_6 (struct spi_device*,struct wilc*) ;
 int FUNC_7 (struct wilc**,int *,int ,int *) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_8(struct spi_device *VAR_6)
{
 int VAR_7;
 struct wilc *VAR_8;
 struct gpio_desc *VAR_9;
 struct wilc_spi *VAR_10;

 VAR_10 = FUNC_5(sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_9 = FUNC_3(&VAR_6->dev, "irq", VAR_2);
 if (FUNC_0(VAR_9)) {

  VAR_9 = FUNC_2(VAR_3);
  if (!VAR_9)
   FUNC_1(&VAR_6->dev, "failed to get the irq gpio\n");
 }

 VAR_7 = FUNC_7(&VAR_8, &VAR_6->dev, VAR_4, &VAR_5);
 if (VAR_7) {
  FUNC_4(VAR_10);
  return VAR_7;
 }

 FUNC_6(VAR_6, VAR_8);
 VAR_8->dev = &VAR_6->dev;
 VAR_8->bus_data = VAR_10;
 VAR_8->gpio_irq = VAR_9;

 return 0;
}
