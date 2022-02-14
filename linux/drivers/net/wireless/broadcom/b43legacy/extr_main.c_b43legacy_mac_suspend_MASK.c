
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct b43legacy_wldev {scalar_t__ mac_suspended; TYPE_1__* wl; } ;
struct TYPE_2__ {int irq_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct b43legacy_wldev*,int,int) ;
 int FUNC_2 (struct b43legacy_wldev*,int ) ;
 int FUNC_3 (struct b43legacy_wldev*) ;
 int FUNC_4 (struct b43legacy_wldev*,int ,int) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

void FUNC_11(struct b43legacy_wldev *VAR_5)
{
 int VAR_6;
 u32 VAR_7;

 FUNC_7();
 FUNC_0(FUNC_6());
 FUNC_0(VAR_5->mac_suspended < 0);

 if (VAR_5->mac_suspended == 0) {


  FUNC_9(&VAR_5->wl->irq_lock);
  FUNC_4(VAR_5, VAR_2, 0);
  FUNC_10(&VAR_5->wl->irq_lock);
  FUNC_3(VAR_5);

  FUNC_1(VAR_5, -1, 1);
  FUNC_4(VAR_5, VAR_4,
      FUNC_2(VAR_5,
      VAR_4)
      & ~VAR_1);
  FUNC_2(VAR_5, VAR_3);
  for (VAR_6 = 40; VAR_6; VAR_6--) {
   VAR_7 = FUNC_2(VAR_5,
            VAR_3);
   if (VAR_7 & VAR_0)
    goto out;
   FUNC_8(1);
  }
  FUNC_5(VAR_5->wl, "MAC suspend failed\n");
 }
out:
 VAR_5->mac_suspended++;
}
