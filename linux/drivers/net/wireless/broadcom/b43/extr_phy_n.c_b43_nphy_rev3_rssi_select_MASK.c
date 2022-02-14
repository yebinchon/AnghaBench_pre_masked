
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int rev; } ;
struct b43_wldev {TYPE_1__ phy; int wl; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
typedef enum n_rssi_type { ____Placeholder_n_rssi_type } n_rssi_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct b43_wldev*) ;
 int FUNC_2 (struct b43_wldev*,int,int) ;
 int FUNC_3 (struct b43_wldev*,int,int,int) ;
 int FUNC_4 (struct b43_wldev*,int,int) ;
 int FUNC_5 (struct b43_wldev*,int,int) ;

__attribute__((used)) static void FUNC_6(struct b43_wldev *VAR_17, u8 VAR_18,
          enum n_rssi_type VAR_19)
{
 u8 VAR_20;
 u16 VAR_21, VAR_22;

 if (VAR_18 == 0) {
  FUNC_2(VAR_17, VAR_6, 0xFDFF);
  FUNC_2(VAR_17, VAR_5, 0xFDFF);
  FUNC_2(VAR_17, VAR_3, 0xFCFF);
  FUNC_2(VAR_17, VAR_4, 0xFCFF);
  FUNC_2(VAR_17, VAR_9, 0xFFDF);
  FUNC_2(VAR_17, VAR_10, 0xFFDF);
  FUNC_2(VAR_17, VAR_7, 0xFFC3);
  FUNC_2(VAR_17, VAR_8, 0xFFC3);
 } else {
  for (VAR_20 = 0; VAR_20 < 2; VAR_20++) {
   if ((VAR_18 == 1 && VAR_20 == 1) || (VAR_18 == 2 && !VAR_20))
    continue;

   VAR_21 = (VAR_20 == 0) ?
    VAR_6 : VAR_5;
   FUNC_3(VAR_17, VAR_21, 0xFDFF, 0x0200);

   if (VAR_19 == VAR_15 ||
       VAR_19 == VAR_16 ||
       VAR_19 == VAR_13) {
    VAR_21 = (VAR_20 == 0) ?
     VAR_3 :
     VAR_4;
    FUNC_3(VAR_17, VAR_21, 0xFCFF, 0);

    VAR_21 = (VAR_20 == 0) ?
     VAR_7 :
     VAR_8;
    FUNC_3(VAR_17, VAR_21, 0xFFC3, 0);

    if (VAR_19 == VAR_15)
     VAR_22 = (FUNC_0(VAR_17->wl) == VAR_11) ? 4 : 8;
    else if (VAR_19 == VAR_16)
     VAR_22 = 16;
    else
     VAR_22 = 32;
    FUNC_4(VAR_17, VAR_21, VAR_22);

    VAR_21 = (VAR_20 == 0) ?
     VAR_9 :
     VAR_10;
    FUNC_4(VAR_17, VAR_21, 0x0020);
   } else {
    if (VAR_19 == VAR_14)
     VAR_22 = 0x0100;
    else if (VAR_19 == VAR_12)
     VAR_22 = 0x0200;
    else
     VAR_22 = 0x0300;

    VAR_21 = (VAR_20 == 0) ?
     VAR_3 :
     VAR_4;

    FUNC_3(VAR_17, VAR_21, 0xFCFF, VAR_22);
    FUNC_3(VAR_17, VAR_21, 0xF3FF, VAR_22 << 2);

    if (VAR_19 != VAR_12 &&
        VAR_19 != VAR_14) {
     enum nl80211_band VAR_23 =
      FUNC_0(VAR_17->wl);

     if (VAR_17->phy.rev < 7) {
      if (FUNC_1(VAR_17))
       VAR_22 = (VAR_23 == VAR_11) ? 0xC : 0xE;
      else
       VAR_22 = 0x11;
      VAR_21 = (VAR_20 == 0) ? VAR_0 : VAR_1;
      VAR_21 |= VAR_2;
      FUNC_5(VAR_17, VAR_21, VAR_22);
     }

     VAR_21 = (VAR_20 == 0) ?
      VAR_6 :
      VAR_5;
     FUNC_4(VAR_17, VAR_21, 0x0200);
    }
   }
  }
 }
}
