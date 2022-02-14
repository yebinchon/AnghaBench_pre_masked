
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct brcmf_pub {struct brcmf_cfg80211_info* config; } ;
struct brcmf_cfg80211_info {int dummy; } ;


 struct brcmf_pub* FUNC_0 (struct wiphy*) ;

__attribute__((used)) static inline struct brcmf_cfg80211_info *FUNC_1(struct wiphy *VAR_0)
{
 struct brcmf_pub *VAR_1 = FUNC_0(VAR_0);
 return VAR_1->config;
}
