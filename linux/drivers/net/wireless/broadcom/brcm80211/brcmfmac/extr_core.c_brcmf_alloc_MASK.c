
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wiphy {int dummy; } ;
struct device {int dummy; } ;
struct cfg80211_ops {int dummy; } ;
struct brcmf_pub {struct brcmf_mp_device* settings; TYPE_1__* bus_if; struct cfg80211_ops* ops; struct wiphy* wiphy; } ;
struct brcmf_mp_device {int dummy; } ;
struct TYPE_2__ {struct brcmf_pub* drvr; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cfg80211_ops* FUNC_0 (struct brcmf_mp_device*) ;
 int FUNC_1 (int ,char*) ;
 TYPE_1__* FUNC_2 (struct device*) ;
 int FUNC_3 (struct cfg80211_ops*) ;
 int FUNC_4 (struct wiphy*,struct device*) ;
 struct wiphy* FUNC_5 (struct cfg80211_ops*,int) ;
 struct brcmf_pub* FUNC_6 (struct wiphy*) ;

int FUNC_7(struct device *VAR_2, struct brcmf_mp_device *VAR_3)
{
 struct wiphy *VAR_4;
 struct cfg80211_ops *VAR_5;
 struct brcmf_pub *VAR_6 = ((void*)0);

 FUNC_1(VAR_1, "Enter\n");

 VAR_5 = FUNC_0(VAR_3);
 if (!VAR_5)
  return -VAR_0;

 VAR_4 = FUNC_5(VAR_5, sizeof(*VAR_6));
 if (!VAR_4) {
  FUNC_3(VAR_5);
  return -VAR_0;
 }

 FUNC_4(VAR_4, VAR_2);
 VAR_6 = FUNC_6(VAR_4);
 VAR_6->wiphy = VAR_4;
 VAR_6->ops = VAR_5;
 VAR_6->bus_if = FUNC_2(VAR_2);
 VAR_6->bus_if->drvr = VAR_6;
 VAR_6->settings = VAR_3;

 return 0;
}
