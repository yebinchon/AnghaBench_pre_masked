
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {scalar_t__ data; } ;
struct ieee80211_hw {int dummy; } ;
struct ieee80211_hdr {int frame_control; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static u32 FUNC_3(struct ieee80211_hw *VAR_1, struct sk_buff *VAR_2)
{
 struct ieee80211_hdr *VAR_3 = (struct ieee80211_hdr *)VAR_2->data;
 u32 VAR_4;

 if (FUNC_0(VAR_3->frame_control))
  VAR_4 = VAR_0;
 else
  VAR_4 = FUNC_1(FUNC_2(VAR_2));

 return VAR_4;
}
