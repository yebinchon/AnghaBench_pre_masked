
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ieee80211_channel {int band; } ;
struct b43_phy {int gmode; scalar_t__ type; int rev; scalar_t__ supports_5ghz; scalar_t__ supports_2ghz; } ;
struct b43_wldev {TYPE_1__* dev; int wl; struct b43_phy phy; } ;
struct TYPE_2__ {int bus_type; int sdev; int bdev; } ;


 int VAR_0 ;


 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;
 int FUNC_1 (struct b43_wldev*) ;
 int FUNC_2 (struct b43_wldev*) ;
 int FUNC_3 (struct b43_wldev*) ;
 int FUNC_4 (struct b43_wldev*,int) ;
 int FUNC_5 (struct b43_wldev*) ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (int ,char*,int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_13(struct b43_wldev *VAR_7,
      struct ieee80211_channel *VAR_8)
{
 struct b43_phy *VAR_9 = &VAR_7->phy;
 bool VAR_10;
 u32 VAR_11;

 switch (VAR_8->band) {
 case 128:
  VAR_10 = 0;
  break;
 case 129:
  VAR_10 = 1;
  break;
 default:
  FUNC_0(1);
  return -VAR_4;
 }

 if (!((VAR_10 && VAR_9->supports_2ghz) ||
       (!VAR_10 && VAR_9->supports_5ghz))) {
  FUNC_7(VAR_7->wl, "This device doesn't support %s-GHz band\n",
         FUNC_8(VAR_8->band));
  return -VAR_5;
 }

 if (!!VAR_9->gmode == !!VAR_10) {

  return 0;
 }

 FUNC_6(VAR_7->wl, "Switching to %s GHz band\n",
        FUNC_8(VAR_8->band));


 if (!(VAR_9->type == VAR_1 && VAR_9->rev >= 3))
  FUNC_4(VAR_7, 1);

 VAR_9->gmode = VAR_10;
 FUNC_2(VAR_7);
 switch (VAR_7->dev->bus_type) {
 }
 FUNC_3(VAR_7);

 FUNC_5(VAR_7);

 FUNC_1(VAR_7);

 return 0;
}
