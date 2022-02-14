
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {int iftype; int wiphy; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct brcmf_pub {int dummy; } ;
struct brcmf_if {int dummy; } ;
struct brcmf_cfg80211_info {int dongle_up; scalar_t__ pwr_save; struct brcmf_pub* pub; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct brcmf_pub*,char*) ;
 int FUNC_1 (int ,struct net_device*,int ,int *) ;
 int FUNC_2 (struct brcmf_if*,int) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (struct brcmf_if*) ;
 int FUNC_5 (struct brcmf_if*) ;
 int FUNC_6 (struct brcmf_if*,int ,int) ;
 struct net_device* FUNC_7 (struct brcmf_cfg80211_info*) ;
 struct brcmf_if* FUNC_8 (struct net_device*) ;

__attribute__((used)) static s32 FUNC_9(struct brcmf_cfg80211_info *VAR_6)
{
 struct brcmf_pub *VAR_7 = VAR_6->pub;
 struct net_device *VAR_8;
 struct wireless_dev *VAR_9;
 struct brcmf_if *VAR_10;
 s32 VAR_11;
 s32 VAR_12 = 0;

 if (VAR_6->dongle_up)
  return VAR_12;

 VAR_8 = FUNC_7(VAR_6);
 VAR_9 = VAR_8->ieee80211_ptr;
 VAR_10 = FUNC_8(VAR_8);


 FUNC_6(VAR_10, VAR_2, 0);

 FUNC_5(VAR_10);

 VAR_11 = VAR_6->pwr_save ? VAR_4 : VAR_5;
 VAR_12 = FUNC_6(VAR_10, VAR_1, VAR_11);
 if (VAR_12)
  goto default_conf_out;
 FUNC_3(VAR_3, "power save set to %s\n",
    (VAR_11 ? "enabled" : "disabled"));

 VAR_12 = FUNC_4(VAR_10);
 if (VAR_12)
  goto default_conf_out;
 VAR_12 = FUNC_1(VAR_9->wiphy, VAR_8, VAR_9->iftype,
       ((void*)0));
 if (VAR_12)
  goto default_conf_out;

 FUNC_2(VAR_10, 1);

 VAR_12 = FUNC_6(VAR_10, VAR_0, 1);
 if (VAR_12) {
  FUNC_0(VAR_7, "failed to set frameburst mode\n");
  goto default_conf_out;
 }

 VAR_6->dongle_up = 1;
default_conf_out:

 return VAR_12;

}
