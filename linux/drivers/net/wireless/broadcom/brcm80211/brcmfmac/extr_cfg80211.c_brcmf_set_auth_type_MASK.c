
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct cfg80211_connect_params {int auth_type; } ;
struct brcmf_pub {int dummy; } ;
struct brcmf_if {struct brcmf_pub* drvr; } ;
struct brcmf_cfg80211_security {int auth_type; } ;
struct brcmf_cfg80211_profile {struct brcmf_cfg80211_security sec; } ;
typedef int s32 ;


 int VAR_0 ;


 int FUNC_0 (struct brcmf_pub*,char*,int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct brcmf_if*,char*,int) ;
 struct brcmf_cfg80211_profile* FUNC_3 (struct net_device*) ;
 struct brcmf_if* FUNC_4 (struct net_device*) ;

__attribute__((used)) static s32 FUNC_5(struct net_device *VAR_1,
          struct cfg80211_connect_params *VAR_2)
{
 struct brcmf_if *VAR_3 = FUNC_4(VAR_1);
 struct brcmf_cfg80211_profile *VAR_4 = FUNC_3(VAR_1);
 struct brcmf_pub *VAR_5 = VAR_3->drvr;
 struct brcmf_cfg80211_security *VAR_6;
 s32 VAR_7 = 0;
 s32 VAR_8 = 0;

 switch (VAR_2->auth_type) {
 case 129:
  VAR_7 = 0;
  FUNC_1(VAR_0, "open system\n");
  break;
 case 128:
  VAR_7 = 1;
  FUNC_1(VAR_0, "shared key\n");
  break;
 default:
  VAR_7 = 2;
  FUNC_1(VAR_0, "automatic, auth type (%d)\n", VAR_2->auth_type);
  break;
 }

 VAR_8 = FUNC_2(VAR_3, "auth", VAR_7);
 if (VAR_8) {
  FUNC_0(VAR_5, "set auth failed (%d)\n", VAR_8);
  return VAR_8;
 }
 VAR_6 = &VAR_4->sec;
 VAR_6->auth_type = VAR_2->auth_type;
 return VAR_8;
}
