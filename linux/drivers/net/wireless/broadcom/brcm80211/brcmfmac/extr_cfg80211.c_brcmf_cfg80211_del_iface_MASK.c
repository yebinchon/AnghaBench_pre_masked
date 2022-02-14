
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wireless_dev {int iftype; struct net_device* netdev; } ;
struct wiphy {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ ifp; } ;
struct brcmf_cfg80211_info {TYPE_1__ escan_info; int scan_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct wiphy*,struct wireless_dev*) ;
 scalar_t__ FUNC_1 (struct brcmf_cfg80211_info*) ;
 int FUNC_2 (scalar_t__,char*,int) ;
 int FUNC_3 (struct brcmf_cfg80211_info*,scalar_t__,int,int) ;
 int FUNC_4 (struct wiphy*,struct wireless_dev*) ;
 struct net_device* FUNC_5 (struct brcmf_cfg80211_info*) ;
 scalar_t__ FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 struct brcmf_cfg80211_info* FUNC_8 (struct wiphy*) ;

__attribute__((used)) static
int FUNC_9(struct wiphy *VAR_5, struct wireless_dev *VAR_6)
{
 struct brcmf_cfg80211_info *VAR_7 = FUNC_8(VAR_5);
 struct net_device *VAR_8 = VAR_6->netdev;

 if (VAR_8 && VAR_8 == FUNC_5(VAR_7))
  return -VAR_3;


 if (FUNC_1(VAR_7))
  return -VAR_1;

 if (VAR_8) {
  if (FUNC_7(VAR_0, &VAR_7->scan_status) &&
      VAR_7->escan_info.ifp == FUNC_6(VAR_8))
   FUNC_3(VAR_7, FUNC_6(VAR_8),
          1, 1);

  FUNC_2(FUNC_6(VAR_8), "mpc", 1);
 }

 switch (VAR_6->iftype) {
 case 138:
 case 130:
 case 136:
 case 128:
 case 134:
 case 135:
  return -VAR_4;
 case 137:
  return FUNC_0(VAR_5, VAR_6);
 case 133:
 case 131:
 case 132:
  return FUNC_4(VAR_5, VAR_6);
 case 129:
 default:
  return -VAR_2;
 }
 return -VAR_4;
}
