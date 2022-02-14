
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcmf_cfg80211_connect_info {int dummy; } ;
struct brcmf_cfg80211_info {struct brcmf_cfg80211_connect_info conn_info; } ;



__attribute__((used)) static inline struct
brcmf_cfg80211_connect_info *FUNC_0(struct brcmf_cfg80211_info *VAR_0)
{
 return &VAR_0->conn_info;
}
