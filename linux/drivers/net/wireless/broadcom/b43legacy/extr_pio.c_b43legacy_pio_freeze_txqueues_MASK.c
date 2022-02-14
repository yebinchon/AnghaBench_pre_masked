
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct b43legacy_pio {TYPE_4__* queue3; TYPE_3__* queue2; TYPE_2__* queue1; TYPE_1__* queue0; } ;
struct b43legacy_wldev {struct b43legacy_pio pio; } ;
struct TYPE_8__ {int tx_frozen; } ;
struct TYPE_7__ {int tx_frozen; } ;
struct TYPE_6__ {int tx_frozen; } ;
struct TYPE_5__ {int tx_frozen; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct b43legacy_wldev*) ;

void FUNC_2(struct b43legacy_wldev *VAR_0)
{
 struct b43legacy_pio *VAR_1;

 FUNC_0(!FUNC_1(VAR_0));
 VAR_1 = &VAR_0->pio;
 VAR_1->queue0->tx_frozen = 1;
 VAR_1->queue1->tx_frozen = 1;
 VAR_1->queue2->tx_frozen = 1;
 VAR_1->queue3->tx_frozen = 1;
}
