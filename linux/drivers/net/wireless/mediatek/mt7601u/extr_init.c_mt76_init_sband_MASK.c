
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * chan; } ;
struct mt7601u_dev {TYPE_2__ chandef; int dev; } ;
struct TYPE_3__ {int* rx_mask; int tx_params; } ;
struct ieee80211_sta_ht_cap {int ht_supported; int cap; int ampdu_density; int ampdu_factor; TYPE_1__ mcs; } ;
struct ieee80211_supported_band {int n_channels; int n_bitrates; int * channels; struct ieee80211_sta_ht_cap ht_cap; struct ieee80211_rate* bitrates; } ;
struct ieee80211_rate {int dummy; } ;
struct ieee80211_channel {int dummy; } ;


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
 void* FUNC_0 (int ,struct ieee80211_channel const*,int,int ) ;

__attribute__((used)) static int
FUNC_1(struct mt7601u_dev *VAR_10, struct ieee80211_supported_band *VAR_11,
  const struct ieee80211_channel *VAR_12, int VAR_13,
  struct ieee80211_rate *VAR_14, int VAR_15)
{
 struct ieee80211_sta_ht_cap *VAR_16;
 void *VAR_17;
 int VAR_18;

 VAR_18 = VAR_13 * sizeof(*VAR_12);
 VAR_17 = FUNC_0(VAR_10->dev, VAR_12, VAR_18, VAR_1);
 if (!VAR_17)
  return -VAR_0;

 VAR_11->channels = VAR_17;
 VAR_11->n_channels = VAR_13;
 VAR_11->bitrates = VAR_14;
 VAR_11->n_bitrates = VAR_15;

 VAR_16 = &VAR_11->ht_cap;
 VAR_16->ht_supported = 1;
 VAR_16->cap = VAR_6 |
        VAR_2 |
        VAR_4 |
        VAR_5 |
        (1 << VAR_3);

 VAR_16->mcs.rx_mask[0] = 0xff;
 VAR_16->mcs.rx_mask[4] = 0x1;
 VAR_16->mcs.tx_params = VAR_8;
 VAR_16->ampdu_factor = VAR_7;
 VAR_16->ampdu_density = VAR_9;

 VAR_10->chandef.chan = &VAR_11->channels[0];

 return 0;
}
