
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tuner_scl_gpio; int tuner_sda_gpio; } ;
struct cx231xx {int gpio_dir; int gpio_val; TYPE_1__ board; } ;


 int FUNC_0 (struct cx231xx*,int,int) ;

int FUNC_1(struct cx231xx *VAR_0)
{
 int VAR_1 = 0;


 VAR_0->gpio_dir |= 1 << VAR_0->board.tuner_scl_gpio;
 VAR_0->gpio_dir &= ~(1 << VAR_0->board.tuner_sda_gpio);
 VAR_1 = FUNC_0(VAR_0, VAR_0->gpio_dir, VAR_0->gpio_val);


 VAR_0->gpio_val &= ~(1 << VAR_0->board.tuner_scl_gpio);
 VAR_1 = FUNC_0(VAR_0, VAR_0->gpio_dir, VAR_0->gpio_val);


 VAR_0->gpio_val |= 1 << VAR_0->board.tuner_scl_gpio;
 VAR_1 = FUNC_0(VAR_0, VAR_0->gpio_dir, VAR_0->gpio_val);

 return VAR_1;
}
