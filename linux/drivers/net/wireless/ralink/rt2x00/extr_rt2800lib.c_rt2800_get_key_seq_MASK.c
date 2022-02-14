
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rt2x00_dev {int dummy; } ;
struct mac_iveiv_entry {int * iv; } ;
struct TYPE_2__ {int iv32; int iv16; } ;
struct ieee80211_key_seq {TYPE_1__ tkip; } ;
struct ieee80211_key_conf {scalar_t__ cipher; int hw_key_idx; } ;
struct ieee80211_hw {struct rt2x00_dev* priv; } ;
typedef int iveiv_entry ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (struct rt2x00_dev*,int ,struct mac_iveiv_entry*,int) ;

void FUNC_3(struct ieee80211_hw *VAR_1,
   struct ieee80211_key_conf *VAR_2,
   struct ieee80211_key_seq *VAR_3)
{
 struct rt2x00_dev *VAR_4 = VAR_1->priv;
 struct mac_iveiv_entry VAR_5;
 u32 VAR_6;

 if (VAR_2->cipher != VAR_0)
  return;

 VAR_6 = FUNC_0(VAR_2->hw_key_idx);
 FUNC_2(VAR_4, VAR_6,
          &VAR_5, sizeof(VAR_5));

 FUNC_1(&VAR_3->tkip.iv16, &VAR_5.iv[0], 2);
 FUNC_1(&VAR_3->tkip.iv32, &VAR_5.iv[4], 4);
}
