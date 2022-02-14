
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct b43_wldev {TYPE_4__* wl; } ;
struct TYPE_8__ {int activelow; int index; } ;
struct TYPE_7__ {int activelow; int index; } ;
struct TYPE_6__ {int activelow; int index; } ;
struct TYPE_10__ {int activelow; int index; } ;
struct b43_leds {TYPE_3__ led_radio; TYPE_2__ led_assoc; TYPE_1__ led_rx; TYPE_5__ led_tx; } ;
struct TYPE_9__ {struct b43_leds leds; } ;


 int FUNC_0 (struct b43_wldev*,int ,int ) ;

void FUNC_1(struct b43_wldev *VAR_0)
{
 struct b43_leds *VAR_1 = &VAR_0->wl->leds;

 FUNC_0(VAR_0, VAR_1->led_tx.index, VAR_1->led_tx.activelow);
 FUNC_0(VAR_0, VAR_1->led_rx.index, VAR_1->led_rx.activelow);
 FUNC_0(VAR_0, VAR_1->led_assoc.index, VAR_1->led_assoc.activelow);
 FUNC_0(VAR_0, VAR_1->led_radio.index, VAR_1->led_radio.activelow);
}
