
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct wireless_dev {TYPE_3__* wiphy; } ;
struct net_device {int dummy; } ;
struct libipw_geo {int bg_channels; TYPE_1__* bg; } ;
struct ipw2100_priv {TYPE_2__* pci_dev; TYPE_5__* ieee; int mac_addr; } ;
struct ieee80211_supported_band {size_t band; int n_channels; int n_bitrates; int bitrates; TYPE_6__* channels; } ;
struct ieee80211_channel {int dummy; } ;
struct TYPE_11__ {size_t band; int flags; int max_power; int hw_value; int center_freq; } ;
struct TYPE_10__ {struct ieee80211_supported_band bg_band; struct wireless_dev wdev; } ;
struct TYPE_9__ {int n_cipher_suites; int cipher_suites; struct ieee80211_supported_band** bands; int perm_addr; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_7__ {int flags; int max_power; int channel; int freq; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct ipw2100_priv*) ;
 int VAR_12 ;
 TYPE_6__* FUNC_2 (int,int,int ) ;
 struct libipw_geo* FUNC_3 (TYPE_5__*) ;
 struct ipw2100_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (TYPE_3__*,int *) ;
 scalar_t__ FUNC_7 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_13)
{
 struct ipw2100_priv *VAR_14 = FUNC_4(VAR_13);
 const struct libipw_geo *VAR_15 = FUNC_3(VAR_14->ieee);
 struct wireless_dev *VAR_16 = &VAR_14->ieee->wdev;
 int VAR_17;

 FUNC_5(VAR_16->wiphy->perm_addr, VAR_14->mac_addr, VAR_2);


 if (VAR_15->bg_channels) {
  struct ieee80211_supported_band *VAR_18 = &VAR_14->ieee->bg_band;

  VAR_18->band = VAR_9;
  VAR_18->n_channels = VAR_15->bg_channels;
  VAR_18->channels = FUNC_2(VAR_15->bg_channels,
         sizeof(struct ieee80211_channel),
         VAR_3);
  if (!VAR_18->channels) {
   FUNC_1(VAR_14);
   return -VAR_1;
  }

  for (VAR_17 = 0; VAR_17 < VAR_15->bg_channels; VAR_17++) {
   VAR_18->channels[VAR_17].band = VAR_9;
   VAR_18->channels[VAR_17].center_freq = VAR_15->bg[VAR_17].freq;
   VAR_18->channels[VAR_17].hw_value = VAR_15->bg[VAR_17].channel;
   VAR_18->channels[VAR_17].max_power = VAR_15->bg[VAR_17].max_power;
   if (VAR_15->bg[VAR_17].flags & VAR_7)
    VAR_18->channels[VAR_17].flags |=
     VAR_4;
   if (VAR_15->bg[VAR_17].flags & VAR_6)
    VAR_18->channels[VAR_17].flags |=
     VAR_4;
   if (VAR_15->bg[VAR_17].flags & VAR_8)
    VAR_18->channels[VAR_17].flags |=
     VAR_5;



  }

  VAR_18->bitrates = VAR_11;
  VAR_18->n_bitrates = VAR_10;

  VAR_16->wiphy->bands[VAR_9] = VAR_18;
 }

 VAR_16->wiphy->cipher_suites = VAR_12;
 VAR_16->wiphy->n_cipher_suites = FUNC_0(VAR_12);

 FUNC_6(VAR_16->wiphy, &VAR_14->pci_dev->dev);
 if (FUNC_7(VAR_16->wiphy))
  return -VAR_0;
 return 0;
}
