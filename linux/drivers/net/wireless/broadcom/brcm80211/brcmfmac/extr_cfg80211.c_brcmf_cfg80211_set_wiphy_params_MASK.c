
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct wiphy {scalar_t__ rts_threshold; scalar_t__ frag_threshold; scalar_t__ retry_long; scalar_t__ retry_short; } ;
struct net_device {int dummy; } ;
struct brcmf_if {int vif; } ;
struct brcmf_cfg80211_info {TYPE_1__* conf; } ;
typedef scalar_t__ s32 ;
struct TYPE_2__ {scalar_t__ rts_threshold; scalar_t__ frag_threshold; scalar_t__ retry_long; scalar_t__ retry_short; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct net_device*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct net_device*,scalar_t__,int) ;
 scalar_t__ FUNC_3 (struct net_device*,scalar_t__) ;
 struct net_device* FUNC_4 (struct brcmf_cfg80211_info*) ;
 int FUNC_5 (int ) ;
 struct brcmf_if* FUNC_6 (struct net_device*) ;
 struct brcmf_cfg80211_info* FUNC_7 (struct wiphy*) ;

__attribute__((used)) static s32 FUNC_8(struct wiphy *VAR_6, u32 VAR_7)
{
 struct brcmf_cfg80211_info *VAR_8 = FUNC_7(VAR_6);
 struct net_device *VAR_9 = FUNC_4(VAR_8);
 struct brcmf_if *VAR_10 = FUNC_6(VAR_9);
 s32 VAR_11 = 0;

 FUNC_0(VAR_1, "Enter\n");
 if (!FUNC_5(VAR_10->vif))
  return -VAR_0;

 if (VAR_7 & VAR_5 &&
     (VAR_8->conf->rts_threshold != VAR_6->rts_threshold)) {
  VAR_8->conf->rts_threshold = VAR_6->rts_threshold;
  VAR_11 = FUNC_3(VAR_9, VAR_8->conf->rts_threshold);
  if (!VAR_11)
   goto done;
 }
 if (VAR_7 & VAR_2 &&
     (VAR_8->conf->frag_threshold != VAR_6->frag_threshold)) {
  VAR_8->conf->frag_threshold = VAR_6->frag_threshold;
  VAR_11 = FUNC_1(VAR_9, VAR_8->conf->frag_threshold);
  if (!VAR_11)
   goto done;
 }
 if (VAR_7 & VAR_3
     && (VAR_8->conf->retry_long != VAR_6->retry_long)) {
  VAR_8->conf->retry_long = VAR_6->retry_long;
  VAR_11 = FUNC_2(VAR_9, VAR_8->conf->retry_long, 1);
  if (!VAR_11)
   goto done;
 }
 if (VAR_7 & VAR_4
     && (VAR_8->conf->retry_short != VAR_6->retry_short)) {
  VAR_8->conf->retry_short = VAR_6->retry_short;
  VAR_11 = FUNC_2(VAR_9, VAR_8->conf->retry_short, 0);
  if (!VAR_11)
   goto done;
 }

done:
 FUNC_0(VAR_1, "Exit\n");
 return VAR_11;
}
