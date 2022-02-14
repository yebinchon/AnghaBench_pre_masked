
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {int wiphy; } ;
struct brcmf_cfg80211_info {int dummy; } ;


 struct brcmf_cfg80211_info* FUNC_0 (int ) ;

__attribute__((used)) static inline struct brcmf_cfg80211_info *FUNC_1(struct wireless_dev *VAR_0)
{
 return FUNC_0(VAR_0->wiphy);
}
