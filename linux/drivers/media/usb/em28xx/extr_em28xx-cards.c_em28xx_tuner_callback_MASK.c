
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct em28xx_i2c_bus {struct em28xx* dev; } ;
struct TYPE_2__ {int tuner_gpio; } ;
struct em28xx {scalar_t__ tuner_type; TYPE_1__ board; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct em28xx*,int ) ;

int FUNC_1(void *VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 struct em28xx_i2c_bus *VAR_8 = VAR_4;
 struct em28xx *VAR_9 = VAR_8->dev;
 int VAR_10 = 0;

 if (VAR_9->tuner_type != VAR_0 && VAR_9->tuner_type != VAR_1)
  return 0;

 if (VAR_6 != VAR_2 && VAR_6 != VAR_3)
  return 0;

 VAR_10 = FUNC_0(VAR_9, VAR_9->board.tuner_gpio);

 return VAR_10;
}
