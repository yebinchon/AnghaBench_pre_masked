
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_9__ {int extpa_gain; } ;
struct TYPE_8__ {int extpa_gain; } ;
struct TYPE_10__ {TYPE_4__ ghz2; TYPE_3__ ghz5; } ;
struct ssb_sprom {TYPE_5__ fem; } ;
struct b43_phy {int rev; TYPE_2__* n; } ;
struct b43_wldev {int wl; struct b43_phy phy; TYPE_1__* dev; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_7__ {scalar_t__ ipa5g_on; scalar_t__ ipa2g_on; } ;
struct TYPE_6__ {struct ssb_sprom* bus_sprom; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int const* FUNC_1 (struct b43_wldev*) ;
 int const* VAR_2 ;
 int const* VAR_3 ;
 int const* VAR_4 ;
 int const* VAR_5 ;
 int const* VAR_6 ;
 int const* VAR_7 ;
 int const* VAR_8 ;
 int FUNC_2 (int ,char*) ;

const u32 *FUNC_3(struct b43_wldev *VAR_9)
{
 struct b43_phy *VAR_10 = &VAR_9->phy;
 enum nl80211_band VAR_11 = FUNC_0(VAR_9->wl);
 struct ssb_sprom *VAR_12 = VAR_9->dev->bus_sprom;

 if (VAR_9->phy.rev < 3)
  return VAR_8;


 if ((VAR_9->phy.n->ipa2g_on && VAR_11 == VAR_0) ||
     (VAR_9->phy.n->ipa5g_on && VAR_11 == VAR_1)) {
  return FUNC_1(VAR_9);
 } else if (FUNC_0(VAR_9->wl) == VAR_1) {
  switch (VAR_10->rev) {
  case 6:
  case 5:
   return VAR_7;
  case 4:
   return VAR_12->fem.ghz5.extpa_gain == 3 ?
    VAR_5 :
    VAR_6;
  case 3:
   return VAR_3;
  default:
   FUNC_2(VAR_9->wl,
          "No 5GHz EPA gain table available for this device\n");
   return ((void*)0);
  }
 } else {
  switch (VAR_10->rev) {
  case 6:
  case 5:
   if (VAR_12->fem.ghz2.extpa_gain == 3)
    return VAR_4;

  case 4:
  case 3:
   return VAR_2;
  default:
   FUNC_2(VAR_9->wl,
          "No 2GHz EPA gain table available for this device\n");
   return ((void*)0);
  }
 }
}
