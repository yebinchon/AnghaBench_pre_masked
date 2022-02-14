
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct wiphy {int dummy; } ;
struct net_device {int dummy; } ;
struct brcmf_if {int dummy; } ;
struct brcmf_cfg80211_info {scalar_t__ int_escan_map; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct brcmf_cfg80211_info*,struct brcmf_if*,int,int) ;
 int FUNC_2 (struct brcmf_if*,int ) ;
 struct brcmf_if* FUNC_3 (struct net_device*) ;
 struct brcmf_cfg80211_info* FUNC_4 (struct wiphy*) ;

__attribute__((used)) static int FUNC_5(struct wiphy *VAR_1,
       struct net_device *VAR_2, u64 VAR_3)
{
 struct brcmf_cfg80211_info *VAR_4 = FUNC_4(VAR_1);
 struct brcmf_if *VAR_5 = FUNC_3(VAR_2);

 FUNC_0(VAR_0, "enter\n");
 FUNC_2(VAR_5, VAR_3);
 if (VAR_4->int_escan_map)
  FUNC_1(VAR_4, VAR_5, 1, 1);
 return 0;
}
