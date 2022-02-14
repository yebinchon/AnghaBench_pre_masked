
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct b43_wldev {TYPE_1__* wl; } ;
struct b43_leds {int stop; int work; } ;
struct TYPE_2__ {struct b43_leds leds; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct b43_wldev *VAR_0)
{
 struct b43_leds *VAR_1 = &VAR_0->wl->leds;

 VAR_1->stop = 1;
 FUNC_0(&VAR_1->work);
}
