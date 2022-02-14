
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct b43_wldev {TYPE_2__* wl; } ;
typedef enum b43_led_behaviour { ____Placeholder_b43_led_behaviour } b43_led_behaviour ;
struct TYPE_3__ {int work; } ;
struct TYPE_4__ {TYPE_1__ leds; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct b43_wldev*,unsigned int,int*,int*) ;
 int VAR_1 ;
 int FUNC_2 (struct b43_wldev*,unsigned int,int,int) ;

void FUNC_3(struct b43_wldev *VAR_2)
{
 unsigned int VAR_3;
 enum b43_led_behaviour VAR_4;
 bool VAR_5;

 FUNC_0(&VAR_2->wl->leds.work, VAR_1);


 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  FUNC_1(VAR_2, VAR_3, &VAR_4, &VAR_5);
  FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5);
 }
}
