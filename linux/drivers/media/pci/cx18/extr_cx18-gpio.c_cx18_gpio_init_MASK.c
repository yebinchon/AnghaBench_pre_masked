
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct cx18 {int gpio_dir; int gpio_val; int gpio_lock; TYPE_3__* card; } ;
struct TYPE_4__ {int direction; int initial_value; } ;
struct TYPE_6__ {int xceive_pin; TYPE_2__* tuners; TYPE_1__ gpio_init; } ;
struct TYPE_5__ {scalar_t__ tuner; } ;


 int FUNC_0 (char*,int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct cx18*,int ) ;
 int FUNC_2 (struct cx18*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct cx18 *VAR_5)
{
 FUNC_3(&VAR_5->gpio_lock);
 VAR_5->gpio_dir = VAR_5->card->gpio_init.direction;
 VAR_5->gpio_val = VAR_5->card->gpio_init.initial_value;

 if (VAR_5->card->tuners[0].tuner == VAR_4) {
  VAR_5->gpio_dir |= 1 << VAR_5->card->xceive_pin;
  VAR_5->gpio_val |= 1 << VAR_5->card->xceive_pin;
 }

 if (VAR_5->gpio_dir == 0) {
  FUNC_4(&VAR_5->gpio_lock);
  return;
 }

 FUNC_0("GPIO initial dir: %08x/%08x out: %08x/%08x\n",
   FUNC_1(VAR_5, VAR_0),
   FUNC_1(VAR_5, VAR_1),
   FUNC_1(VAR_5, VAR_2),
   FUNC_1(VAR_5, VAR_3));

 FUNC_2(VAR_5);
 FUNC_4(&VAR_5->gpio_lock);
}
