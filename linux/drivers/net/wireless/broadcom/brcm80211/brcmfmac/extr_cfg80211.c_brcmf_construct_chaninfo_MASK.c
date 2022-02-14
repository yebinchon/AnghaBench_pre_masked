
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
typedef int u16 ;
struct wiphy {struct ieee80211_supported_band** bands; } ;
struct ieee80211_supported_band {size_t n_channels; size_t band; struct ieee80211_channel* channels; } ;
struct ieee80211_channel {int flags; int hw_value; int orig_flags; } ;
struct brcmu_chan {int chspec; scalar_t__ band; int bw; int control_ch_num; } ;
struct brcmf_pub {int dummy; } ;
struct brcmf_if {int dummy; } ;
struct brcmf_chanspec_list {int * element; int count; } ;
struct TYPE_2__ {int (* encchspec ) (struct brcmu_chan*) ;int (* decchspec ) (struct brcmu_chan*) ;} ;
struct brcmf_cfg80211_info {TYPE_1__ d11inf; struct brcmf_pub* pub; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 int FUNC_0 (struct brcmf_pub*,char*,int) ;
 int FUNC_1 (struct brcmf_if*,char*,size_t*) ;
 int FUNC_2 (struct brcmf_if*,char*,int *,int ) ;
 struct brcmf_if* FUNC_3 (struct brcmf_pub*,int ) ;
 int FUNC_4 (struct ieee80211_channel*,struct brcmu_chan*) ;
 struct wiphy* FUNC_5 (struct brcmf_cfg80211_info*) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int ,int ) ;
 size_t FUNC_8 (int ) ;
 int FUNC_9 (struct brcmu_chan*) ;
 int FUNC_10 (struct brcmu_chan*) ;
 int FUNC_11 (struct wiphy*,char*,int) ;

__attribute__((used)) static int FUNC_12(struct brcmf_cfg80211_info *VAR_17,
        u32 VAR_18[])
{
 struct wiphy *VAR_19 = FUNC_5(VAR_17);
 struct brcmf_pub *VAR_20 = VAR_17->pub;
 struct brcmf_if *VAR_21 = FUNC_3(VAR_20, 0);
 struct ieee80211_supported_band *VAR_22;
 struct ieee80211_channel *VAR_23;
 struct brcmf_chanspec_list *VAR_24;
 struct brcmu_chan VAR_25;
 int VAR_26;
 u8 *VAR_27;
 u32 VAR_28, VAR_29;
 u32 VAR_30;
 u32 VAR_31;

 VAR_27 = FUNC_7(VAR_0, VAR_4);

 if (VAR_27 == ((void*)0))
  return -VAR_3;

 VAR_24 = (struct brcmf_chanspec_list *)VAR_27;

 VAR_26 = FUNC_2(VAR_21, "chanspecs", VAR_27,
           VAR_0);
 if (VAR_26) {
  FUNC_0(VAR_20, "get chanspecs error (%d)\n", VAR_26);
  goto fail_pbuf;
 }

 VAR_22 = VAR_19->bands[VAR_11];
 if (VAR_22)
  for (VAR_28 = 0; VAR_28 < VAR_22->n_channels; VAR_28++)
   VAR_22->channels[VAR_28].flags = VAR_5;
 VAR_22 = VAR_19->bands[VAR_12];
 if (VAR_22)
  for (VAR_28 = 0; VAR_28 < VAR_22->n_channels; VAR_28++)
   VAR_22->channels[VAR_28].flags = VAR_5;

 VAR_30 = FUNC_8(VAR_24->count);
 for (VAR_28 = 0; VAR_28 < VAR_30; VAR_28++) {
  VAR_25.chspec = (u16)FUNC_8(VAR_24->element[VAR_28]);
  VAR_17->d11inf.decchspec(&VAR_25);

  if (VAR_25.band == VAR_1) {
   VAR_22 = VAR_19->bands[VAR_11];
  } else if (VAR_25.band == VAR_2) {
   VAR_22 = VAR_19->bands[VAR_12];
  } else {
   FUNC_0(VAR_20, "Invalid channel Spec. 0x%x.\n",
     VAR_25.chspec);
   continue;
  }
  if (!VAR_22)
   continue;
  if (!(VAR_18[VAR_22->band] & VAR_13) &&
      VAR_25.bw == 129)
   continue;
  if (!(VAR_18[VAR_22->band] & VAR_14) &&
      VAR_25.bw == 128)
   continue;

  VAR_23 = ((void*)0);
  for (VAR_29 = 0; VAR_29 < VAR_22->n_channels; VAR_29++) {
   if (VAR_22->channels[VAR_29].hw_value == VAR_25.control_ch_num) {
    VAR_23 = &VAR_22->channels[VAR_29];
    break;
   }
  }
  if (!VAR_23) {



   FUNC_0(VAR_20, "Ignoring unexpected firmware channel %d\n",
     VAR_25.control_ch_num);
   continue;
  }

  if (VAR_23->orig_flags & VAR_5)
   continue;




  switch (VAR_25.bw) {
  case 131:
   VAR_23->flags &= ~VAR_6;
   break;
  case 128:
   VAR_23->flags &= ~VAR_7;
   break;
  case 129:
   FUNC_4(VAR_23, &VAR_25);
   break;
  default:
   FUNC_11(VAR_19, "Firmware reported unsupported bandwidth %d\n",
       VAR_25.bw);

  case 130:




   VAR_23->flags = VAR_8 |
      VAR_7 |
      VAR_6;
   VAR_25.bw = 130;
   VAR_17->d11inf.encchspec(&VAR_25);
   VAR_31 = VAR_25.chspec;
   VAR_26 = FUNC_1(VAR_21, "per_chan_info",
             &VAR_31);
   if (!VAR_26) {
    if (VAR_31 & VAR_16)
     VAR_23->flags |=
      (VAR_10 |
       VAR_9);
    if (VAR_31 & VAR_15)
     VAR_23->flags |=
      VAR_9;
   }
  }
 }

fail_pbuf:
 FUNC_6(VAR_27);
 return VAR_26;
}
