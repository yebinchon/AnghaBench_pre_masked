
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct net_device {int dummy; } ;
struct ieee80211_channel {scalar_t__ hw_value; int flags; } ;
struct cfg80211_scan_request {int n_channels; struct ieee80211_channel** channels; } ;
struct brcmf_pub {int dummy; } ;
struct brcmf_p2p_info {TYPE_3__* cfg; TYPE_1__* bss_idx; } ;
struct brcmf_if {int dummy; } ;
struct TYPE_5__ {scalar_t__ iftype; struct net_device* netdev; } ;
struct brcmf_cfg80211_vif {TYPE_2__ wdev; } ;
struct brcmf_cfg80211_info {struct brcmf_pub* pub; struct brcmf_p2p_info p2p; } ;
typedef int s32 ;
struct TYPE_6__ {int d11inf; } ;
struct TYPE_4__ {struct brcmf_cfg80211_vif* vif; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct brcmf_pub*,char*,int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct brcmf_p2p_info*,int,int *,int,int ) ;
 int FUNC_3 (int *,struct ieee80211_channel*) ;
 int * FUNC_4 (int,int,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static s32 FUNC_6(struct brcmf_cfg80211_info *VAR_15,
          struct brcmf_if *VAR_16,
          struct cfg80211_scan_request *VAR_17)
{
 struct brcmf_p2p_info *VAR_18 = &VAR_15->p2p;
 struct brcmf_pub *VAR_19 = VAR_15->pub;
 s32 VAR_20 = 0;
 s32 VAR_21 = VAR_13;
 struct brcmf_cfg80211_vif *VAR_22;
 struct net_device *VAR_23 = ((void*)0);
 int VAR_24, VAR_25 = 0;
 u16 *VAR_26;

 FUNC_1(VAR_12, "enter\n");

 if (!VAR_17) {
  VAR_20 = -VAR_0;
  goto exit;
 }

 if (VAR_17->n_channels) {
  VAR_26 = FUNC_4(VAR_17->n_channels, sizeof(*VAR_26),
        VAR_2);
  if (!VAR_26) {
   VAR_20 = -VAR_1;
   goto exit;
  }
  VAR_22 = VAR_18->bss_idx[VAR_7].vif;
  if (VAR_22)
   VAR_23 = VAR_22->wdev.netdev;
  if (VAR_17->n_channels == 3 &&
      VAR_17->channels[0]->hw_value == VAR_9 &&
      VAR_17->channels[1]->hw_value == VAR_10 &&
      VAR_17->channels[2]->hw_value == VAR_11) {

   VAR_21 = VAR_14;
   FUNC_1(VAR_5, "P2P SEARCH PHASE START\n");
  } else if (VAR_23 != ((void*)0) &&
      VAR_22->wdev.iftype == VAR_6) {

   FUNC_1(VAR_5, "Already a GO. Do SEARCH Only\n");
   VAR_21 = VAR_14;
  } else {
   FUNC_1(VAR_5, "P2P SCAN STATE START\n");
  }




  for (VAR_24 = 0; VAR_24 < VAR_17->n_channels; VAR_24++) {
   struct ieee80211_channel *VAR_27 = VAR_17->channels[VAR_24];

   if (VAR_27->flags & (VAR_4 |
        VAR_3))
    continue;

   VAR_26[VAR_24] = FUNC_3(&VAR_18->cfg->d11inf,
          VAR_27);
   FUNC_1(VAR_5, "%d: chan=%d, channel spec=%x\n",
      VAR_25, VAR_27->hw_value, VAR_26[VAR_24]);
   VAR_25++;
  }
  VAR_20 = FUNC_2(VAR_18, VAR_25, VAR_26, VAR_21,
          VAR_8);
  FUNC_5(VAR_26);
 }
exit:
 if (VAR_20)
  FUNC_0(VAR_19, "error (%d)\n", VAR_20);
 return VAR_20;
}
