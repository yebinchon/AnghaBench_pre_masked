
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct brcmf_pub {TYPE_1__* bus_if; } ;
struct TYPE_6__ {scalar_t__ use_fwsup; } ;
struct TYPE_5__ {scalar_t__ iftype; int netdev; int wiphy; } ;
struct brcmf_cfg80211_vif {TYPE_3__ profile; int ifp; int sme_state; TYPE_2__ wdev; } ;
struct brcmf_cfg80211_info {int scan_status; struct brcmf_pub* pub; } ;
typedef scalar_t__ s32 ;
struct TYPE_4__ {scalar_t__ state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct brcmf_pub*,char*,scalar_t__) ;
 int FUNC_1 (struct brcmf_cfg80211_vif*,int ,int ) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int ,int ,int *,int ) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (int ,int ,int *,int ,int,int ) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 struct brcmf_cfg80211_info* FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct brcmf_cfg80211_vif *VAR_12, u16 VAR_13)
{
 struct brcmf_cfg80211_info *VAR_14 = FUNC_8(VAR_12->wdev.wiphy);
 struct brcmf_pub *VAR_15 = VAR_14->pub;
 bool VAR_16 = VAR_15->bus_if->state == VAR_1;
 s32 VAR_17 = 0;

 FUNC_2(VAR_11, "Enter\n");

 if (FUNC_7(VAR_5, &VAR_12->sme_state)) {
  if (VAR_16) {
   FUNC_2(VAR_8, "Call WLC_DISASSOC to stop excess roaming\n");
   VAR_17 = FUNC_3(VAR_12->ifp,
           VAR_2, ((void*)0), 0);
   if (VAR_17)
    FUNC_0(VAR_15, "WLC_DISASSOC failed (%d)\n",
      VAR_17);
  }

  if ((VAR_12->wdev.iftype == VAR_10) ||
      (VAR_12->wdev.iftype == VAR_9))
   FUNC_5(VAR_12->wdev.netdev, VAR_13, ((void*)0), 0,
           1, VAR_7);
 }
 FUNC_6(VAR_6, &VAR_12->sme_state);
 FUNC_6(VAR_4, &VAR_14->scan_status);
 FUNC_1(VAR_12, VAR_0, 0);
 if (VAR_12->profile.use_fwsup != VAR_3) {
  if (VAR_16)
   FUNC_4(VAR_12->ifp, ((void*)0), 0);
  VAR_12->profile.use_fwsup = VAR_3;
 }
 FUNC_2(VAR_11, "Exit\n");
}
