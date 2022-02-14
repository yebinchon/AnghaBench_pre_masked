
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
typedef void ieee80211_hdr ;
struct _carl9170_tx_superframe {scalar_t__ frame_data; } ;



__attribute__((used)) static inline struct ieee80211_hdr *FUNC_0(struct sk_buff *VAR_0)
{
 return (void *)((struct _carl9170_tx_superframe *)
  VAR_0->data)->frame_data;
}
