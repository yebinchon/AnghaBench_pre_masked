
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct b43legacy_wldev {TYPE_1__* dev; int periodic_work; struct b43legacy_wl* wl; } ;
struct b43legacy_wl {int * tx_queue; int mutex; int tx_work; int irq_lock; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct b43legacy_wldev*) ;
 int FUNC_1 (struct b43legacy_wldev*,int ) ;
 int FUNC_2 (struct b43legacy_wldev*,int ) ;
 scalar_t__ FUNC_3 (struct b43legacy_wldev*) ;
 int FUNC_4 (struct b43legacy_wldev*) ;
 int FUNC_5 (struct b43legacy_wldev*,int ,int ) ;
 int FUNC_6 (struct b43legacy_wl*,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,struct b43legacy_wldev*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *) ;
 int FUNC_15 (int *,unsigned long) ;
 int FUNC_16 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_17(struct b43legacy_wldev *VAR_4)
{
 struct b43legacy_wl *VAR_5 = VAR_4->wl;
 unsigned long VAR_6;
 int VAR_7;

 if (FUNC_3(VAR_4) < VAR_3)
  return;




 FUNC_15(&VAR_5->irq_lock, VAR_6);
 FUNC_5(VAR_4, VAR_0, 0);
 FUNC_1(VAR_4, VAR_0);
 FUNC_16(&VAR_5->irq_lock, VAR_6);
 FUNC_4(VAR_4);

 FUNC_2(VAR_4, VAR_2);

 FUNC_12(&VAR_5->mutex);


 FUNC_7(&VAR_4->periodic_work);
 FUNC_8(&VAR_5->tx_work);
 FUNC_11(&VAR_5->mutex);


 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  while (FUNC_14(&VAR_5->tx_queue[VAR_7]))
   FUNC_9(FUNC_13(&VAR_5->tx_queue[VAR_7]));
 }

FUNC_0(VAR_4);
 FUNC_10(VAR_4->dev->irq, VAR_4);
 FUNC_6(VAR_5, "Wireless interface stopped\n");
}
