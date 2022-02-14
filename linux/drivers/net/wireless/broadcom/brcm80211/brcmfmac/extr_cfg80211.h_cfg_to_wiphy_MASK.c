
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct brcmf_cfg80211_info {struct wiphy* wiphy; } ;



__attribute__((used)) static inline struct wiphy *FUNC_0(struct brcmf_cfg80211_info *VAR_0)
{
 return VAR_0->wiphy;
}
