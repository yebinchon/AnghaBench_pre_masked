
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ radio_on; } ;
struct b43_wldev {TYPE_3__* wl; TYPE_1__ phy; } ;
struct b43_led {unsigned int index; int activelow; int hw_state; int state; scalar_t__ wl; } ;
typedef enum b43_led_behaviour { ____Placeholder_b43_led_behaviour } b43_led_behaviour ;
struct TYPE_5__ {scalar_t__ stop; struct b43_led led_assoc; struct b43_led led_rx; struct b43_led led_tx; struct b43_led led_radio; } ;
struct TYPE_6__ {TYPE_2__ leds; } ;




 unsigned int VAR_0 ;
 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (struct b43_wldev*) ;
 int FUNC_2 (struct b43_wldev*,unsigned int,int*,int*) ;
 int FUNC_3 (struct b43_wldev*,unsigned int,int) ;
 int FUNC_4 (struct b43_wldev*,unsigned int,int) ;

void FUNC_5(struct b43_wldev *VAR_1)
{
 struct b43_led *VAR_2;
 unsigned int VAR_3;
 enum b43_led_behaviour VAR_4;
 bool VAR_5;


 VAR_2 = &VAR_1->wl->leds.led_radio;
 if (VAR_2->wl) {
  if (VAR_1->phy.radio_on && FUNC_1(VAR_1)) {
   FUNC_4(VAR_1, VAR_2->index, VAR_2->activelow);
   VAR_2->hw_state = 1;
   FUNC_0(&VAR_2->state, 1);
  } else {
   FUNC_3(VAR_1, VAR_2->index, VAR_2->activelow);
   VAR_2->hw_state = 0;
   FUNC_0(&VAR_2->state, 0);
  }
 }


 VAR_2 = &VAR_1->wl->leds.led_tx;
 if (VAR_2->wl) {
  FUNC_3(VAR_1, VAR_2->index, VAR_2->activelow);
  VAR_2->hw_state = 0;
  FUNC_0(&VAR_2->state, 0);
 }
 VAR_2 = &VAR_1->wl->leds.led_rx;
 if (VAR_2->wl) {
  FUNC_3(VAR_1, VAR_2->index, VAR_2->activelow);
  VAR_2->hw_state = 0;
  FUNC_0(&VAR_2->state, 0);
 }
 VAR_2 = &VAR_1->wl->leds.led_assoc;
 if (VAR_2->wl) {
  FUNC_3(VAR_1, VAR_2->index, VAR_2->activelow);
  VAR_2->hw_state = 0;
  FUNC_0(&VAR_2->state, 0);
 }


 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  FUNC_2(VAR_1, VAR_3, &VAR_4, &VAR_5);
  switch (VAR_4) {
  case 129:
   FUNC_3(VAR_1, VAR_3, VAR_5);
   break;
  case 128:
   FUNC_4(VAR_1, VAR_3, VAR_5);
   break;
  default:

   break;
  }
 }

 VAR_1->wl->leds.stop = 0;
}
