
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int brightness; int (* brightness_set ) (TYPE_1__*,int ) ;} ;
struct rt2x00_led {TYPE_1__ led_dev; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static inline void FUNC_2(struct rt2x00_led *VAR_1)
{
 FUNC_0(&VAR_1->led_dev);


 VAR_1->led_dev.brightness_set(&VAR_1->led_dev, VAR_0);
 VAR_1->led_dev.brightness = VAR_0;
}
