
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct b43legacy_wldev {scalar_t__ mac_suspended; int irq_mask; TYPE_1__* wl; } ;
struct TYPE_2__ {int irq_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct b43legacy_wldev*,int,int) ;
 int FUNC_2 (struct b43legacy_wldev*,int ) ;
 int FUNC_3 (struct b43legacy_wldev*,int ,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct b43legacy_wldev *VAR_5)
{
 VAR_5->mac_suspended--;
 FUNC_0(VAR_5->mac_suspended < 0);
 FUNC_0(FUNC_4());
 if (VAR_5->mac_suspended == 0) {
  FUNC_3(VAR_5, VAR_4,
      FUNC_2(VAR_5,
      VAR_4)
      | VAR_1);
  FUNC_3(VAR_5, VAR_3,
      VAR_0);

  FUNC_2(VAR_5, VAR_4);
  FUNC_2(VAR_5, VAR_3);
  FUNC_1(VAR_5, -1, -1);


  FUNC_5(&VAR_5->wl->irq_lock);
  FUNC_3(VAR_5, VAR_2,
      VAR_5->irq_mask);
  FUNC_6(&VAR_5->wl->irq_lock);
 }
}
