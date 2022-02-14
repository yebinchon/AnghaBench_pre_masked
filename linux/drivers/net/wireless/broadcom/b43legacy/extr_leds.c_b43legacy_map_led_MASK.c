
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ieee80211_hw {int wiphy; } ;
struct TYPE_3__ {int radio_on; } ;
struct b43legacy_wldev {TYPE_2__* wl; int led_assoc; TYPE_1__ phy; int led_radio; int led_rx; int led_tx; } ;
typedef int name ;
typedef enum b43legacy_led_behaviour { ____Placeholder_b43legacy_led_behaviour } b43legacy_led_behaviour ;
struct TYPE_4__ {struct ieee80211_hw* hw; } ;






 int VAR_0 ;
 int FUNC_0 (struct b43legacy_wldev*) ;
 int FUNC_1 (struct b43legacy_wldev*,int ,int) ;
 int FUNC_2 (struct b43legacy_wldev*,int ,int) ;
 int FUNC_3 (struct b43legacy_wldev*,int *,char*,int ,int ,int) ;
 int FUNC_4 (TYPE_2__*,char*,int) ;
 int FUNC_5 (struct ieee80211_hw*) ;
 int FUNC_6 (struct ieee80211_hw*) ;
 int FUNC_7 (struct ieee80211_hw*) ;
 int FUNC_8 (struct ieee80211_hw*) ;
 int FUNC_9 (char*,int,char*,char*) ;
 char* FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(struct b43legacy_wldev *VAR_1,
   u8 VAR_2,
   enum b43legacy_led_behaviour VAR_3,
   bool VAR_4)
{
 struct ieee80211_hw *VAR_5 = VAR_1->wl->hw;
 char VAR_6[VAR_0 + 1];



 switch (VAR_3) {
 case 136:
  break;
 case 134:
  FUNC_1(VAR_1, VAR_2, VAR_4);
  break;
 case 133:
  FUNC_2(VAR_1, VAR_2, VAR_4);
  break;
 case 139:
 case 129:
 case 138:
  FUNC_9(VAR_6, sizeof(VAR_6),
    "b43legacy-%s::tx", FUNC_10(VAR_5->wiphy));
  FUNC_3(VAR_1, &VAR_1->led_tx, VAR_6,
     FUNC_8(VAR_5),
     VAR_2, VAR_4);
  FUNC_9(VAR_6, sizeof(VAR_6),
    "b43legacy-%s::rx", FUNC_10(VAR_5->wiphy));
  FUNC_3(VAR_1, &VAR_1->led_rx, VAR_6,
     FUNC_7(VAR_5),
     VAR_2, VAR_4);
  break;
 case 131:
 case 132:
 case 130:
 case 135:
  FUNC_9(VAR_6, sizeof(VAR_6),
    "b43legacy-%s::radio", FUNC_10(VAR_5->wiphy));
  FUNC_3(VAR_1, &VAR_1->led_radio, VAR_6,
     FUNC_6(VAR_5),
     VAR_2, VAR_4);

  if (VAR_1->phy.radio_on && FUNC_0(VAR_1))
   FUNC_2(VAR_1, VAR_2, VAR_4);
  break;
 case 128:
 case 137:
  FUNC_9(VAR_6, sizeof(VAR_6),
    "b43legacy-%s::assoc", FUNC_10(VAR_5->wiphy));
  FUNC_3(VAR_1, &VAR_1->led_assoc, VAR_6,
     FUNC_5(VAR_5),
     VAR_2, VAR_4);
  break;
 default:
  FUNC_4(VAR_1->wl, "LEDs: Unknown behaviour 0x%02X\n",
   VAR_3);
  break;
 }
}
