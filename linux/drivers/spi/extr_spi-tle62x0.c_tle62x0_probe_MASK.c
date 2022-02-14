
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tle62x0_state {int nr_gpio; int lock; int gpio_state; struct spi_device* us; } ;
struct tle62x0_pdata {int gpio_count; int init_state; } ;
struct spi_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 struct tle62x0_pdata* FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int ** VAR_4 ;
 int FUNC_4 (struct tle62x0_state*) ;
 struct tle62x0_state* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct spi_device*,struct tle62x0_state*) ;

__attribute__((used)) static int FUNC_8(struct spi_device *VAR_5)
{
 struct tle62x0_state *VAR_6;
 struct tle62x0_pdata *VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_7 = FUNC_1(&VAR_5->dev);
 if (VAR_7 == ((void*)0)) {
  FUNC_0(&VAR_5->dev, "no device data specified\n");
  return -VAR_0;
 }

 VAR_6 = FUNC_5(sizeof(struct tle62x0_state), VAR_2);
 if (VAR_6 == ((void*)0))
  return -VAR_1;

 VAR_6->us = VAR_5;
 VAR_6->nr_gpio = VAR_7->gpio_count;
 VAR_6->gpio_state = VAR_7->init_state;

 FUNC_6(&VAR_6->lock);

 VAR_9 = FUNC_2(&VAR_5->dev, &VAR_3);
 if (VAR_9) {
  FUNC_0(&VAR_5->dev, "cannot create status attribute\n");
  goto err_status;
 }

 for (VAR_8 = 0; VAR_8 < VAR_7->gpio_count; VAR_8++) {
  VAR_9 = FUNC_2(&VAR_5->dev, VAR_4[VAR_8]);
  if (VAR_9) {
   FUNC_0(&VAR_5->dev, "cannot create gpio attribute\n");
   goto err_gpios;
  }
 }


 FUNC_7(VAR_5, VAR_6);
 return 0;

 err_gpios:
 while (--VAR_8 >= 0)
  FUNC_3(&VAR_5->dev, VAR_4[VAR_8]);

 FUNC_3(&VAR_5->dev, &VAR_3);

 err_status:
 FUNC_4(VAR_6);
 return VAR_9;
}
