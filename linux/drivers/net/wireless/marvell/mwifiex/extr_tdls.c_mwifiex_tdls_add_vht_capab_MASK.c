
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vht_cap ;
typedef int u8 ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int band; } ;
struct mwifiex_private {TYPE_1__ curr_bss_params; } ;
struct ieee80211_vht_cap {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct ieee80211_vht_cap*,int) ;
 int FUNC_1 (struct ieee80211_vht_cap*,int ,int) ;
 int FUNC_2 (struct mwifiex_private*,struct ieee80211_vht_cap*,int ) ;
 int * FUNC_3 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_4(struct mwifiex_private *VAR_1,
          struct sk_buff *VAR_2)
{
 struct ieee80211_vht_cap VAR_3;
 u8 *VAR_4;

 VAR_4 = FUNC_3(VAR_2, sizeof(struct ieee80211_vht_cap) + 2);
 *VAR_4++ = VAR_0;
 *VAR_4++ = sizeof(struct ieee80211_vht_cap);

 FUNC_1(&VAR_3, 0, sizeof(struct ieee80211_vht_cap));

 FUNC_2(VAR_1, &VAR_3, VAR_1->curr_bss_params.band);
 FUNC_0(VAR_4, &VAR_3, sizeof(VAR_3));

 return 0;
}
