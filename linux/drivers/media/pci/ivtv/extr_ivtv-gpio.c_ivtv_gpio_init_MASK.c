
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_11__ {TYPE_6__* ctrl_handler; int grp_id; int name; } ;
struct TYPE_12__ {char* name; } ;
struct TYPE_13__ {int error; } ;
struct ivtv {TYPE_3__ sd_gpio; TYPE_4__ v4l2_dev; TYPE_6__ hdl_gpio; TYPE_2__* card; } ;
struct TYPE_9__ {int direction; int initial_value; } ;
struct TYPE_10__ {int xceive_pin; TYPE_1__ gpio_init; } ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,char*,char*) ;
 int VAR_5 ;
 int FUNC_3 (TYPE_6__*,int) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_6__*,int *,int ,int ,int,int,int ) ;
 int FUNC_6 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*,int *) ;
 int FUNC_8 (int,int ) ;

int FUNC_9(struct ivtv *VAR_6)
{
 u16 VAR_7 = 0;

 if (VAR_6->card->xceive_pin)
  VAR_7 = 1 << VAR_6->card->xceive_pin;

 if ((VAR_6->card->gpio_init.direction | VAR_7) == 0)
  return 0;

 FUNC_0("GPIO initial dir: %08x out: %08x\n",
     FUNC_1(VAR_1), FUNC_1(VAR_2));


 FUNC_8(VAR_6->card->gpio_init.initial_value | VAR_7, VAR_2);
 FUNC_8(VAR_6->card->gpio_init.direction | VAR_7, VAR_1);
 FUNC_7(&VAR_6->sd_gpio, &VAR_5);
 FUNC_2(VAR_6->sd_gpio.name, sizeof(VAR_6->sd_gpio.name), "%s-gpio", VAR_6->v4l2_dev.name);
 VAR_6->sd_gpio.grp_id = VAR_0;
 FUNC_3(&VAR_6->hdl_gpio, 1);
 FUNC_5(&VAR_6->hdl_gpio, &VAR_4,
   VAR_3, 0, 1, 1, 0);
 if (VAR_6->hdl_gpio.error)
  return VAR_6->hdl_gpio.error;
 VAR_6->sd_gpio.ctrl_handler = &VAR_6->hdl_gpio;
 FUNC_4(&VAR_6->hdl_gpio);
 return FUNC_6(&VAR_6->v4l2_dev, &VAR_6->sd_gpio);
}
