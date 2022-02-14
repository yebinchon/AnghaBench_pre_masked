
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; int (* brightness_set ) (TYPE_1__*,int ) ;} ;
struct rt2x00_led {int flags; TYPE_1__ led_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_2(struct rt2x00_led *VAR_3)
{
 FUNC_0(&VAR_3->led_dev);







 if (!(VAR_3->led_dev.flags & VAR_2))
  VAR_3->led_dev.brightness_set(&VAR_3->led_dev, VAR_0);

 VAR_3->flags &= ~VAR_1;
}
