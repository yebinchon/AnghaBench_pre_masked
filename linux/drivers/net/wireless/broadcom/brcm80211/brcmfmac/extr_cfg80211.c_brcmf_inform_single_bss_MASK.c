
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct wiphy {int dummy; } ;
struct cfg80211_inform_bss {int signal; int boottime_ns; int scan_width; int chan; } ;
struct cfg80211_bss {int dummy; } ;
struct brcmu_chan {int chspec; scalar_t__ control_ch_num; } ;
struct brcmf_pub {int dummy; } ;
struct TYPE_2__ {int (* decchspec ) (struct brcmu_chan*) ;} ;
struct brcmf_cfg80211_info {TYPE_1__ d11inf; struct brcmf_pub* pub; } ;
struct brcmf_bss_info_le {scalar_t__ ctl_ch; scalar_t__ BSSID; int RSSI; int ie_length; int ie_offset; int beacon_period; int capability; int chanspec; int length; } ;
typedef int s32 ;
typedef int s16 ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int FUNC_0 (struct brcmf_pub*,char*) ;
 int FUNC_1 (int ,char*,scalar_t__,...) ;
 struct cfg80211_bss* FUNC_2 (struct wiphy*,struct cfg80211_inform_bss*,int ,int const*,int ,scalar_t__,scalar_t__,int *,size_t,int ) ;
 int FUNC_3 (struct wiphy*,struct cfg80211_bss*) ;
 struct wiphy* FUNC_4 (struct brcmf_cfg80211_info*) ;
 int FUNC_5 (scalar_t__,int) ;
 int FUNC_6 (struct wiphy*,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 size_t FUNC_10 (int ) ;
 int FUNC_11 (struct brcmu_chan*) ;

__attribute__((used)) static s32 FUNC_12(struct brcmf_cfg80211_info *VAR_9,
       struct brcmf_bss_info_le *VAR_10)
{
 struct wiphy *VAR_11 = FUNC_4(VAR_9);
 struct brcmf_pub *VAR_12 = VAR_9->pub;
 struct cfg80211_bss *VAR_13;
 enum nl80211_band VAR_14;
 struct brcmu_chan VAR_15;
 u16 VAR_16;
 u32 VAR_17;
 u16 VAR_18;
 u16 VAR_19;
 u8 *VAR_20;
 size_t VAR_21;
 struct cfg80211_inform_bss VAR_22 = {};

 if (FUNC_10(VAR_10->length) > VAR_8) {
  FUNC_0(VAR_12, "Bss info is larger than buffer. Discarding\n");
  return 0;
 }

 if (!VAR_10->ctl_ch) {
  VAR_15.chspec = FUNC_9(VAR_10->chanspec);
  VAR_9->d11inf.decchspec(&VAR_15);
  VAR_10->ctl_ch = VAR_15.control_ch_num;
 }
 VAR_16 = VAR_10->ctl_ch;

 if (VAR_16 <= VAR_1)
  VAR_14 = VAR_5;
 else
  VAR_14 = VAR_6;

 VAR_17 = FUNC_5(VAR_16, VAR_14);
 VAR_22.chan = FUNC_6(VAR_11, VAR_17);
 VAR_22.scan_width = VAR_7;
 VAR_22.boottime_ns = FUNC_8(FUNC_7());

 VAR_18 = FUNC_9(VAR_10->capability);
 VAR_19 = FUNC_9(VAR_10->beacon_period);
 VAR_20 = (u8 *)VAR_10 + FUNC_9(VAR_10->ie_offset);
 VAR_21 = FUNC_10(VAR_10->ie_length);
 VAR_22.signal = (s16)FUNC_9(VAR_10->RSSI) * 100;

 FUNC_1(VAR_2, "bssid: %pM\n", VAR_10->BSSID);
 FUNC_1(VAR_2, "Channel: %d(%d)\n", VAR_16, VAR_17);
 FUNC_1(VAR_2, "Capability: %X\n", VAR_18);
 FUNC_1(VAR_2, "Beacon interval: %d\n", VAR_19);
 FUNC_1(VAR_2, "Signal: %d\n", VAR_22.signal);

 VAR_13 = FUNC_2(VAR_11, &VAR_22,
           VAR_0,
           (const u8 *)VAR_10->BSSID,
           0, VAR_18,
           VAR_19, VAR_20,
           VAR_21, VAR_4);

 if (!VAR_13)
  return -VAR_3;

 FUNC_3(VAR_11, VAR_13);

 return 0;
}
