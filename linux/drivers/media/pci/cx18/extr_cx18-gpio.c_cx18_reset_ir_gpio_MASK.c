
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_device {int dummy; } ;
struct cx18 {int sd_resetctrl; TYPE_2__* card; } ;
struct TYPE_3__ {scalar_t__ ir_reset_mask; } ;
struct TYPE_4__ {TYPE_1__ gpio_i2c_slave_reset; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct cx18* FUNC_1 (struct v4l2_device*) ;
 int FUNC_2 (int *,int ,int ,int ) ;

void FUNC_3(void *VAR_3)
{
 struct cx18 *VAR_4 = FUNC_1((struct v4l2_device *)VAR_3);

 if (VAR_4->card->gpio_i2c_slave_reset.ir_reset_mask == 0)
  return;

 FUNC_0("Resetting IR microcontroller\n");

 FUNC_2(&VAR_4->sd_resetctrl,
    VAR_1, VAR_2, VAR_0);
}
