
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int wpa_versions; } ;
struct cfg80211_connect_params {TYPE_1__ crypto; } ;
struct brcmf_pub {int dummy; } ;
struct brcmf_if {struct brcmf_pub* drvr; } ;
struct brcmf_cfg80211_security {int wpa_versions; } ;
struct brcmf_cfg80211_profile {struct brcmf_cfg80211_security sec; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct brcmf_pub*,char*,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct brcmf_if*,char*,int) ;
 struct brcmf_cfg80211_profile* FUNC_3 (struct net_device*) ;
 struct brcmf_if* FUNC_4 (struct net_device*) ;

__attribute__((used)) static s32 FUNC_5(struct net_device *VAR_8,
     struct cfg80211_connect_params *VAR_9)
{
 struct brcmf_if *VAR_10 = FUNC_4(VAR_8);
 struct brcmf_cfg80211_profile *VAR_11 = FUNC_3(VAR_8);
 struct brcmf_pub *VAR_12 = VAR_10->drvr;
 struct brcmf_cfg80211_security *VAR_13;
 s32 VAR_14 = 0;
 s32 VAR_15 = 0;

 if (VAR_9->crypto.wpa_versions & VAR_1)
  VAR_14 = VAR_6 | VAR_7;
 else if (VAR_9->crypto.wpa_versions & VAR_2)
  VAR_14 = VAR_3 | VAR_4;
 else
  VAR_14 = VAR_5;
 FUNC_1(VAR_0, "setting wpa_auth to 0x%0x\n", VAR_14);
 VAR_15 = FUNC_2(VAR_10, "wpa_auth", VAR_14);
 if (VAR_15) {
  FUNC_0(VAR_12, "set wpa_auth failed (%d)\n", VAR_15);
  return VAR_15;
 }
 VAR_13 = &VAR_11->sec;
 VAR_13->wpa_versions = VAR_9->crypto.wpa_versions;
 return VAR_15;
}
