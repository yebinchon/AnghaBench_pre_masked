
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct mwifiex_uap_bss_param {int band_cfg; int channel; } ;
struct cfg80211_chan_def {int width; TYPE_1__* chan; int center_freq1; } ;
struct mwifiex_private {TYPE_2__* adapter; struct cfg80211_chan_def bss_chandef; } ;
struct TYPE_4__ {int config_bands; int wiphy; } ;
struct TYPE_3__ {scalar_t__ band; int center_freq; } ;


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
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int ,char*,int) ;
 int FUNC_2 (struct mwifiex_private*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

void FUNC_5(struct mwifiex_private *VAR_12,
        struct mwifiex_uap_bss_param *VAR_13,
        struct cfg80211_chan_def VAR_14)
{
 u8 VAR_15 = 0, VAR_16 = VAR_12->adapter->config_bands;

 VAR_12->bss_chandef = VAR_14;

 VAR_13->channel = FUNC_0(
           VAR_14.chan->center_freq);


 if (VAR_14.chan->band == VAR_10) {
  VAR_13->band_cfg = VAR_5;
  VAR_15 = VAR_3 | VAR_6;

  if (VAR_14.width > 132)
   VAR_15 |= VAR_7;
 } else {
  VAR_13->band_cfg = VAR_4;
  VAR_15 = VAR_0;

  if (VAR_14.width > 132)
   VAR_15 |= VAR_2;

  if (VAR_14.width > 131)
   VAR_15 |= VAR_1;
 }

 switch (VAR_14.width) {
 case 130:
 case 135:
 case 132:
 case 133:
  break;
 case 131:
  if (VAR_14.center_freq1 < VAR_14.chan->center_freq)
   VAR_13->band_cfg |= VAR_9;
  else
   VAR_13->band_cfg |= VAR_8;
  break;
 case 129:
 case 128:
 case 134:
  VAR_13->band_cfg |=
      FUNC_3(VAR_13->channel) << 4;
  break;
 default:
  FUNC_1(VAR_12->adapter,
       VAR_11, "Unknown channel width: %d\n",
       VAR_14.width);
  break;
 }

 VAR_12->adapter->config_bands = VAR_15;

 if (VAR_16 != VAR_15) {
  FUNC_4(VAR_12->adapter->wiphy);
  FUNC_2(VAR_12);
 }
}
