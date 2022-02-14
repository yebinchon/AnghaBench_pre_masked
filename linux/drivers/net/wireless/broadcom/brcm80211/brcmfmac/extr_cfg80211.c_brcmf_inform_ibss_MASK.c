
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct wiphy {struct ieee80211_supported_band** bands; } ;
struct net_device {int dummy; } ;
struct ieee80211_supported_band {int band; } ;
struct ieee80211_channel {int dummy; } ;
struct cfg80211_bss {int dummy; } ;
struct brcmu_chan {int chspec; scalar_t__ band; int control_ch_num; } ;
struct brcmf_pub {int dummy; } ;
struct TYPE_2__ {int (* decchspec ) (struct brcmu_chan*) ;} ;
struct brcmf_cfg80211_info {int channel; TYPE_1__ d11inf; struct brcmf_pub* pub; } ;
struct brcmf_bss_info_le {int RSSI; int ie_length; int ie_offset; int beacon_period; int capability; int chanspec; } ;
typedef int s32 ;
typedef int s16 ;
typedef int __le32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct brcmf_pub*,char*,int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,int ,int *,int ) ;
 struct cfg80211_bss* FUNC_3 (struct wiphy*,struct ieee80211_channel*,int ,int const*,int ,int,int,int *,size_t,int,int ) ;
 int FUNC_4 (struct wiphy*,struct cfg80211_bss*) ;
 struct wiphy* FUNC_5 (struct brcmf_cfg80211_info*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 struct ieee80211_channel* FUNC_8 (struct wiphy*,int ) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 size_t FUNC_12 (int ) ;
 int FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct brcmu_chan*) ;

__attribute__((used)) static s32 FUNC_15(struct brcmf_cfg80211_info *VAR_10,
        struct net_device *VAR_11, const u8 *VAR_12)
{
 struct wiphy *VAR_13 = FUNC_5(VAR_10);
 struct brcmf_pub *VAR_14 = VAR_10->pub;
 struct ieee80211_channel *VAR_15;
 struct brcmf_bss_info_le *VAR_16 = ((void*)0);
 struct ieee80211_supported_band *VAR_17;
 struct cfg80211_bss *VAR_18;
 struct brcmu_chan VAR_19;
 u8 *VAR_20 = ((void*)0);
 s32 VAR_21 = 0;
 u32 VAR_22;
 u16 VAR_23;
 u16 VAR_24;
 u8 *VAR_25;
 size_t VAR_26;
 s32 VAR_27;

 FUNC_1(VAR_8, "Enter\n");

 VAR_20 = FUNC_10(VAR_9, VAR_5);
 if (VAR_20 == ((void*)0)) {
  VAR_21 = -VAR_4;
  goto CleanUp;
 }

 *(__le32 *)VAR_20 = FUNC_6(VAR_9);

 VAR_21 = FUNC_2(FUNC_13(VAR_11), VAR_0,
         VAR_20, VAR_9);
 if (VAR_21) {
  FUNC_0(VAR_14, "WLC_GET_BSS_INFO failed: %d\n", VAR_21);
  goto CleanUp;
 }

 VAR_16 = (struct brcmf_bss_info_le *)(VAR_20 + 4);

 VAR_19.chspec = FUNC_11(VAR_16->chanspec);
 VAR_10->d11inf.decchspec(&VAR_19);

 if (VAR_19.band == VAR_1)
  VAR_17 = VAR_13->bands[VAR_6];
 else
  VAR_17 = VAR_13->bands[VAR_7];

 VAR_22 = FUNC_7(VAR_19.control_ch_num, VAR_17->band);
 VAR_10->channel = VAR_22;
 VAR_15 = FUNC_8(VAR_13, VAR_22);

 VAR_23 = FUNC_11(VAR_16->capability);
 VAR_24 = FUNC_11(VAR_16->beacon_period);
 VAR_25 = (u8 *)VAR_16 + FUNC_11(VAR_16->ie_offset);
 VAR_26 = FUNC_12(VAR_16->ie_length);
 VAR_27 = (s16)FUNC_11(VAR_16->RSSI) * 100;

 FUNC_1(VAR_3, "channel: %d(%d)\n", VAR_19.control_ch_num, VAR_22);
 FUNC_1(VAR_3, "capability: %X\n", VAR_23);
 FUNC_1(VAR_3, "beacon interval: %d\n", VAR_24);
 FUNC_1(VAR_3, "signal: %d\n", VAR_27);

 VAR_18 = FUNC_3(VAR_13, VAR_15,
      VAR_2, VAR_12, 0,
      VAR_23, VAR_24,
      VAR_25, VAR_26, VAR_27,
      VAR_5);

 if (!VAR_18) {
  VAR_21 = -VAR_4;
  goto CleanUp;
 }

 FUNC_4(VAR_13, VAR_18);

CleanUp:

 FUNC_9(VAR_20);

 FUNC_1(VAR_8, "Exit\n");

 return VAR_21;
}
