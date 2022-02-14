
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_2__ {int tuner_sda_gpio; int tuner_scl_gpio; } ;
struct cx231xx {int gpio_dir; int gpio_val; TYPE_1__ board; int dev; } ;


 int FUNC_0 (struct cx231xx*,int,int*) ;
 int FUNC_1 (struct cx231xx*,int,int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int) ;

int FUNC_4(struct cx231xx *VAR_0)
{
 int VAR_1 = 0;
 u32 VAR_2 = 0;
 int VAR_3 = 10;
 int VAR_4 = VAR_3;



 VAR_0->gpio_dir &= ~(1 << VAR_0->board.tuner_sda_gpio);
 VAR_0->gpio_dir &= ~(1 << VAR_0->board.tuner_scl_gpio);

 VAR_2 = VAR_0->gpio_val;
 VAR_1 = FUNC_1(VAR_0, VAR_0->gpio_dir, VAR_0->gpio_val);

 do {
  FUNC_3(2);
  VAR_1 = FUNC_0(VAR_0, VAR_0->gpio_dir,
           &VAR_0->gpio_val);
  VAR_3--;
 } while (((VAR_0->gpio_val &
     (1 << VAR_0->board.tuner_scl_gpio)) == 0) &&
    (VAR_3 > 0));

 if (VAR_3 == 0)
  FUNC_2(VAR_0->dev,
   "No ACK after %d msec -GPIO I2C failed!",
   VAR_4 * 10);






 VAR_1 = FUNC_0(VAR_0, VAR_0->gpio_dir, &VAR_0->gpio_val);

 if ((VAR_0->gpio_val & 1 << VAR_0->board.tuner_sda_gpio) == 0) {
  VAR_0->gpio_val = VAR_2;
  VAR_0->gpio_val &= ~(1 << VAR_0->board.tuner_sda_gpio);
  VAR_1 = 0;
 } else {
  VAR_0->gpio_val = VAR_2;
  VAR_0->gpio_val |= (1 << VAR_0->board.tuner_sda_gpio);
 }



 VAR_0->gpio_val = VAR_2;
 VAR_0->gpio_dir |= (1 << VAR_0->board.tuner_scl_gpio);
 VAR_0->gpio_val &= ~(1 << VAR_0->board.tuner_scl_gpio);
 VAR_1 = FUNC_1(VAR_0, VAR_0->gpio_dir, VAR_0->gpio_val);

 return VAR_1;
}
