
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {struct net_device* netdev; } ;
struct wiphy {int dummy; } ;
struct net_device {int dummy; } ;
struct brcmf_pub {int dummy; } ;
struct brcmf_if {int * vif; } ;
struct brcmf_cfg80211_info {struct brcmf_pub* pub; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct brcmf_pub*,char*,...) ;
 int FUNC_1 (struct brcmf_cfg80211_info*,int *) ;
 int FUNC_2 (struct brcmf_cfg80211_info*,int ,int ) ;
 int FUNC_3 (struct brcmf_if*,char*,int *,int ) ;
 int FUNC_4 (struct brcmf_if*,int) ;
 struct brcmf_if* FUNC_5 (struct net_device*) ;
 struct brcmf_cfg80211_info* FUNC_6 (struct wiphy*) ;

__attribute__((used)) static int FUNC_7(struct wiphy *VAR_3,
           struct wireless_dev *VAR_4)
{
 struct brcmf_cfg80211_info *VAR_5 = FUNC_6(VAR_3);
 struct net_device *VAR_6 = VAR_4->netdev;
 struct brcmf_if *VAR_7 = FUNC_5(VAR_6);
 struct brcmf_pub *VAR_8 = VAR_5->pub;
 int VAR_9;
 int VAR_10;

 FUNC_1(VAR_5, VAR_7->vif);

 VAR_10 = FUNC_3(VAR_7, "interface_remove", ((void*)0), 0);
 if (VAR_10) {
  FUNC_0(VAR_8, "interface_remove failed %d\n", VAR_10);
  goto err_unarm;
 }


 VAR_9 = FUNC_2(VAR_5, VAR_0,
         VAR_1);
 if (!VAR_9) {
  FUNC_0(VAR_8, "timeout occurred\n");
  VAR_10 = -VAR_2;
  goto err_unarm;
 }

 FUNC_4(VAR_7, 1);

err_unarm:
 FUNC_1(VAR_5, ((void*)0));
 return VAR_10;
}
