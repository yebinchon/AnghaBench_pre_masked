
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct ieee80211_supported_band {int n_channels; TYPE_3__* channels; } ;
struct brcmu_chan {scalar_t__ band; scalar_t__ bw; scalar_t__ control_ch_num; scalar_t__ chspec; scalar_t__ chnum; int sb; } ;
struct brcmf_pub {int dummy; } ;
struct brcmf_if {int dummy; } ;
struct brcmf_fil_bwcap_le {void* bw_cap; void* band; } ;
struct brcmf_chanspec_list {int * element; int count; } ;
struct TYPE_4__ {int (* decchspec ) (struct brcmu_chan*) ;int (* encchspec ) (struct brcmu_chan*) ;} ;
struct brcmf_cfg80211_info {TYPE_1__ d11inf; struct brcmf_pub* pub; } ;
typedef int band_bwcap ;
typedef int __le16 ;
struct TYPE_6__ {scalar_t__ hw_value; } ;
struct TYPE_5__ {struct ieee80211_supported_band** bands; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct brcmf_pub*,char*,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct brcmf_if*,char*,int *,int ) ;
 int FUNC_4 (struct brcmf_if*,char*,struct brcmf_fil_bwcap_le*,int) ;
 int FUNC_5 (struct brcmf_if*,char*,int*) ;
 int FUNC_6 (struct brcmf_if*,char*,int) ;
 struct brcmf_if* FUNC_7 (struct brcmf_pub*,int ) ;
 int FUNC_8 (TYPE_3__*,struct brcmu_chan*) ;
 TYPE_2__* FUNC_9 (struct brcmf_cfg80211_info*) ;
 int FUNC_10 (scalar_t__) ;
 void* FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (int ,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct brcmu_chan*) ;
 int FUNC_16 (struct brcmu_chan*) ;

__attribute__((used)) static int FUNC_17(struct brcmf_cfg80211_info *VAR_12)
{
 struct brcmf_pub *VAR_13 = VAR_12->pub;
 struct brcmf_if *VAR_14 = FUNC_7(VAR_13, 0);
 struct ieee80211_supported_band *VAR_15;
 struct brcmf_fil_bwcap_le VAR_16;
 struct brcmf_chanspec_list *VAR_17;
 u8 *VAR_18;
 u32 VAR_19;
 int VAR_20;
 struct brcmu_chan VAR_21;
 u32 VAR_22;
 int VAR_23, VAR_24;


 VAR_19 = VAR_9;
 VAR_20 = FUNC_5(VAR_14, "bw_cap", &VAR_19);

 if (!VAR_20) {

  VAR_16.band = FUNC_11(VAR_8);
  VAR_16.bw_cap = FUNC_11(VAR_10);
  VAR_20 = FUNC_4(VAR_14, "bw_cap", &VAR_16,
            sizeof(VAR_16));
 } else {
  FUNC_2(VAR_6, "fallback to mimo_bw_cap\n");
  VAR_19 = VAR_11;
  VAR_20 = FUNC_6(VAR_14, "mimo_bw_cap", VAR_19);
 }

 if (!VAR_20) {

  VAR_18 = FUNC_13(VAR_0, VAR_5);

  if (VAR_18 == ((void*)0))
   return -VAR_4;

  VAR_21.band = VAR_1;
  VAR_21.bw = VAR_2;
  VAR_21.sb = VAR_3;
  VAR_21.chnum = 0;
  VAR_12->d11inf.encchspec(&VAR_21);


  *(__le16 *)VAR_18 = FUNC_10(VAR_21.chspec);

  VAR_20 = FUNC_3(VAR_14, "chanspecs", VAR_18,
            VAR_0);
  if (VAR_20) {
   FUNC_1(VAR_13, "get chanspecs error (%d)\n", VAR_20);
   FUNC_12(VAR_18);
   return VAR_20;
  }

  VAR_15 = FUNC_9(VAR_12)->bands[VAR_7];
  VAR_17 = (struct brcmf_chanspec_list *)VAR_18;
  VAR_22 = FUNC_14(VAR_17->count);
  for (VAR_23 = 0; VAR_23 < VAR_22; VAR_23++) {
   VAR_21.chspec = (u16)FUNC_14(VAR_17->element[VAR_23]);
   VAR_12->d11inf.decchspec(&VAR_21);
   if (FUNC_0(VAR_21.band != VAR_1))
    continue;
   if (FUNC_0(VAR_21.bw != VAR_2))
    continue;
   for (VAR_24 = 0; VAR_24 < VAR_15->n_channels; VAR_24++) {
    if (VAR_15->channels[VAR_24].hw_value == VAR_21.control_ch_num)
     break;
   }
   if (FUNC_0(VAR_24 == VAR_15->n_channels))
    continue;

   FUNC_8(&VAR_15->channels[VAR_24], &VAR_21);
  }
  FUNC_12(VAR_18);
 }
 return VAR_20;
}
