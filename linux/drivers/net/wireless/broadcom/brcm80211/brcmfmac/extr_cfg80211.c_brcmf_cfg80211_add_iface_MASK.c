
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {int dummy; } ;
struct wiphy {int dummy; } ;
struct vif_params {int dummy; } ;
struct brcmf_pub {int dummy; } ;
struct brcmf_cfg80211_info {struct brcmf_pub* pub; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;


 int VAR_0 ;
 int VAR_1 ;
 struct wireless_dev* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct wireless_dev*) ;
 scalar_t__ FUNC_2 (struct wireless_dev*) ;
 int VAR_2 ;
 int FUNC_3 (struct brcmf_pub*,char*,...) ;
 struct wireless_dev* FUNC_4 (struct wiphy*,char const*,struct vif_params*) ;
 int FUNC_5 (struct wireless_dev*) ;
 int FUNC_6 (int ,char*,char const*,int) ;
 struct wireless_dev* FUNC_7 (struct wiphy*,char const*,unsigned char,int,struct vif_params*) ;
 int FUNC_8 (struct brcmf_cfg80211_info*,int) ;
 struct brcmf_cfg80211_info* FUNC_9 (struct wiphy*) ;

__attribute__((used)) static struct wireless_dev *FUNC_10(struct wiphy *VAR_3,
           const char *VAR_4,
           unsigned char VAR_5,
           enum nl80211_iftype VAR_6,
           struct vif_params *VAR_7)
{
 struct brcmf_cfg80211_info *VAR_8 = FUNC_9(VAR_3);
 struct brcmf_pub *VAR_9 = VAR_8->pub;
 struct wireless_dev *VAR_10;
 int VAR_11;

 FUNC_6(VAR_2, "enter: %s type %d\n", VAR_4, VAR_6);
 VAR_11 = FUNC_8(FUNC_9(VAR_3), VAR_6);
 if (VAR_11) {
  FUNC_3(VAR_9, "iface validation failed: err=%d\n", VAR_11);
  return FUNC_0(VAR_11);
 }
 switch (VAR_6) {
 case 138:
 case 130:
 case 136:
 case 128:
 case 134:
 case 135:
  return FUNC_0(-VAR_1);
 case 137:
  VAR_10 = FUNC_4(VAR_3, VAR_4, VAR_7);
  break;
 case 133:
 case 131:
 case 132:
  VAR_10 = FUNC_7(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
  break;
 case 129:
 default:
  return FUNC_0(-VAR_0);
 }

 if (FUNC_1(VAR_10))
  FUNC_3(VAR_9, "add iface %s type %d failed: err=%d\n", VAR_4,
    VAR_6, (int)FUNC_2(VAR_10));
 else
  FUNC_5(VAR_10);

 return VAR_10;
}
