
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {int dummy; } ;
struct wiphy {int dummy; } ;
struct brcmf_pub {int dummy; } ;
struct brcmf_cfg80211_vif {int ifp; } ;
struct brcmf_cfg80211_info {struct brcmf_pub* pub; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct brcmf_pub*,char*,int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*,int*) ;
 int FUNC_3 (struct brcmf_cfg80211_vif*) ;
 struct brcmf_cfg80211_vif* FUNC_4 (struct wireless_dev*) ;
 struct brcmf_cfg80211_info* FUNC_5 (struct wiphy*) ;

__attribute__((used)) static s32
FUNC_6(struct wiphy *VAR_3, struct wireless_dev *VAR_4,
       s32 *VAR_5)
{
 struct brcmf_cfg80211_info *VAR_6 = FUNC_5(VAR_3);
 struct brcmf_cfg80211_vif *VAR_7 = FUNC_4(VAR_4);
 struct brcmf_pub *VAR_8 = VAR_6->pub;
 s32 VAR_9 = 0;
 s32 VAR_10;

 FUNC_1(VAR_1, "Enter\n");
 if (!FUNC_3(VAR_7))
  return -VAR_0;

 VAR_10 = FUNC_2(VAR_7->ifp, "qtxpower", &VAR_9);
 if (VAR_10) {
  FUNC_0(VAR_8, "error (%d)\n", VAR_10);
  goto done;
 }
 *VAR_5 = (VAR_9 & ~VAR_2) / 4;

done:
 FUNC_1(VAR_1, "Exit (0x%x %d)\n", VAR_9, *VAR_5);
 return VAR_10;
}
