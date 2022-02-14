
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct ieee80211_hdr {int dummy; } ;



__attribute__((used)) static inline struct ieee80211_hdr *FUNC_0(struct sk_buff *VAR_0)
{
 return (struct ieee80211_hdr *)(VAR_0->data);
}
