
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcmu_chan {scalar_t__ band; void* chspec; } ;
struct TYPE_2__ {int (* decchspec ) (struct brcmu_chan*) ;} ;
struct brcmf_cfg80211_info {TYPE_1__ d11inf; } ;
struct brcmf_bss_info_le {scalar_t__ SSID_len; int flags; int RSSI; int * SSID; int BSSID; int chanspec; } ;
typedef int s32 ;
typedef scalar_t__ s16 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,scalar_t__) ;
 int FUNC_2 (struct brcmu_chan*) ;
 int FUNC_3 (struct brcmu_chan*) ;

__attribute__((used)) static s32
FUNC_4(struct brcmf_cfg80211_info *VAR_2,
         struct brcmf_bss_info_le *VAR_3,
         struct brcmf_bss_info_le *VAR_4)
{
 struct brcmu_chan VAR_5, VAR_6;

 VAR_5.chspec = FUNC_0(VAR_3->chanspec);
 VAR_2->d11inf.decchspec(&VAR_5);
 VAR_6.chspec = FUNC_0(VAR_4->chanspec);
 VAR_2->d11inf.decchspec(&VAR_6);

 if (!FUNC_1(&VAR_4->BSSID, &VAR_3->BSSID, VAR_1) &&
  VAR_5.band == VAR_6.band &&
  VAR_4->SSID_len == VAR_3->SSID_len &&
  !FUNC_1(VAR_4->SSID, VAR_3->SSID, VAR_4->SSID_len)) {
  if ((VAR_3->flags & VAR_0) ==
   (VAR_4->flags & VAR_0)) {
   s16 VAR_7 = FUNC_0(VAR_3->RSSI);
   s16 VAR_8 = FUNC_0(VAR_4->RSSI);




   if (VAR_8 > VAR_7)
    VAR_3->RSSI = VAR_4->RSSI;
  } else if ((VAR_3->flags & VAR_0) &&
   (VAR_4->flags & VAR_0) == 0) {



   VAR_3->RSSI = VAR_4->RSSI;
   VAR_3->flags |= VAR_0;
  }
  return 1;
 }
 return 0;
}
