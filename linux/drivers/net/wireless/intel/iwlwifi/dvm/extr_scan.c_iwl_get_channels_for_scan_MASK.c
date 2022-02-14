
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct iwl_scan_channel {int type; int dsp_atten; int tx_gain; void* passive_dwell; void* active_dwell; void* channel; } ;
struct iwl_priv {TYPE_1__* scan_request; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_supported_band {int dummy; } ;
struct ieee80211_channel {int band; scalar_t__ hw_value; int flags; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_2__ {int n_channels; struct ieee80211_channel** channels; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_priv*,char*,int,...) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (struct iwl_priv*,int,scalar_t__) ;
 struct ieee80211_supported_band* FUNC_4 (struct iwl_priv*,int) ;
 scalar_t__ FUNC_5 (struct iwl_priv*,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct iwl_priv *VAR_4,
         struct ieee80211_vif *VAR_5,
         enum nl80211_band VAR_6,
         u8 VAR_7, u8 VAR_8,
         struct iwl_scan_channel *VAR_9)
{
 struct ieee80211_channel *VAR_10;
 const struct ieee80211_supported_band *VAR_11;
 u16 VAR_12 = 0;
 u16 VAR_13 = 0;
 int VAR_14, VAR_15;
 u16 VAR_16;

 VAR_11 = FUNC_4(VAR_4, VAR_6);
 if (!VAR_11)
  return 0;

 VAR_13 = FUNC_3(VAR_4, VAR_6, VAR_8);
 VAR_12 = FUNC_5(VAR_4, VAR_6);

 if (VAR_12 <= VAR_13)
  VAR_12 = VAR_13 + 1;

 for (VAR_15 = 0, VAR_14 = 0; VAR_15 < VAR_4->scan_request->n_channels; VAR_15++) {
  VAR_10 = VAR_4->scan_request->channels[VAR_15];

  if (VAR_10->band != VAR_6)
   continue;

  VAR_16 = VAR_10->hw_value;
  VAR_9->channel = FUNC_2(VAR_16);

  if (!VAR_7 || (VAR_10->flags & VAR_0))
   VAR_9->type = VAR_3;
  else
   VAR_9->type = VAR_2;

  if (VAR_8)
   VAR_9->type |= FUNC_1(VAR_8);

  VAR_9->active_dwell = FUNC_2(VAR_13);
  VAR_9->passive_dwell = FUNC_2(VAR_12);


  VAR_9->dsp_atten = 110;





  if (VAR_6 == VAR_1)
   VAR_9->tx_gain = ((1 << 5) | (3 << 3)) | 3;
  else
   VAR_9->tx_gain = ((1 << 5) | (5 << 3));

  FUNC_0(VAR_4, "Scanning ch=%d prob=0x%X [%s %d]\n",
          VAR_16, FUNC_6(VAR_9->type),
          (VAR_9->type & VAR_2) ?
    "ACTIVE" : "PASSIVE",
          (VAR_9->type & VAR_2) ?
          VAR_13 : VAR_12);

  VAR_9++;
  VAR_14++;
 }

 FUNC_0(VAR_4, "total channels to scan %d\n", VAR_14);
 return VAR_14;
}
