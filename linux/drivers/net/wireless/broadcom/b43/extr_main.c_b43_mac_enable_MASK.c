
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct b43_wldev {scalar_t__ mac_suspended; int wl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct b43_wldev*,int ) ;
 int FUNC_2 (struct b43_wldev*,int ,int ,int ) ;
 int FUNC_3 (struct b43_wldev*,int ) ;
 int FUNC_4 (struct b43_wldev*,int ) ;
 scalar_t__ FUNC_5 (struct b43_wldev*,int ,int ) ;
 int FUNC_6 (struct b43_wldev*,int ,int ) ;
 int FUNC_7 (int ,char*,scalar_t__) ;

void FUNC_8(struct b43_wldev *VAR_9)
{
 if (FUNC_1(VAR_9, VAR_0)) {
  u16 VAR_10;

  VAR_10 = FUNC_5(VAR_9, VAR_5,
      VAR_6);
  if ((VAR_10 != VAR_8) &&
      (VAR_10 != VAR_7)) {
   FUNC_7(VAR_9->wl, "b43_mac_enable(): The firmware "
          "should be suspended, but current state is %u\n",
          VAR_10);
  }
 }

 VAR_9->mac_suspended--;
 FUNC_0(VAR_9->mac_suspended < 0);
 if (VAR_9->mac_suspended == 0) {
  FUNC_2(VAR_9, VAR_4, ~0, VAR_2);
  FUNC_6(VAR_9, VAR_3,
       VAR_1);

  FUNC_4(VAR_9, VAR_4);
  FUNC_4(VAR_9, VAR_3);
  FUNC_3(VAR_9, 0);
 }
}
