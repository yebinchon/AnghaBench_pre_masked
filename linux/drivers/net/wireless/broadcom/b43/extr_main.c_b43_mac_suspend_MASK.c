
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct b43_wldev {scalar_t__ mac_suspended; int wl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct b43_wldev*,int ,int ,int ) ;
 int FUNC_2 (struct b43_wldev*,int ) ;
 int FUNC_3 (struct b43_wldev*,int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;

void FUNC_8(struct b43_wldev *VAR_5)
{
 int VAR_6;
 u32 VAR_7;

 FUNC_5();
 FUNC_0(VAR_5->mac_suspended < 0);

 if (VAR_5->mac_suspended == 0) {
  FUNC_2(VAR_5, VAR_4);
  FUNC_1(VAR_5, VAR_3, ~VAR_1, 0);

  FUNC_3(VAR_5, VAR_3);
  for (VAR_6 = 35; VAR_6; VAR_6--) {
   VAR_7 = FUNC_3(VAR_5, VAR_2);
   if (VAR_7 & VAR_0)
    goto out;
   FUNC_7(10);
  }

  for (VAR_6 = 40; VAR_6; VAR_6--) {
   VAR_7 = FUNC_3(VAR_5, VAR_2);
   if (VAR_7 & VAR_0)
    goto out;
   FUNC_6(1);
  }
  FUNC_4(VAR_5->wl, "MAC suspend failed\n");
 }
out:
 VAR_5->mac_suspended++;
}
