
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct mwl8k_priv {int dummy; } ;
struct TYPE_2__ {struct ieee80211_key_conf* hw_key; } ;
struct ieee80211_tx_info {TYPE_1__ control; } ;
struct ieee80211_key_conf {int iv_len; int cipher; } ;
struct ieee80211_hdr {int frame_control; } ;


 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;




 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct mwl8k_priv*,struct sk_buff*,int,int) ;

__attribute__((used)) static void FUNC_3(struct mwl8k_priv *VAR_0,
  struct sk_buff *VAR_1)
{
 struct ieee80211_hdr *VAR_2;
 struct ieee80211_tx_info *VAR_3;
 struct ieee80211_key_conf *VAR_4;
 int VAR_5;
 int VAR_6 = 0;

 VAR_2 = (struct ieee80211_hdr *)VAR_1->data;

 VAR_3 = FUNC_0(VAR_1);

 VAR_4 = ((void*)0);
 if (FUNC_1(VAR_2->frame_control))
  VAR_4 = VAR_3->control.hw_key;
 VAR_5 = 0;
 if (VAR_4 != ((void*)0)) {
  VAR_6 = VAR_4->iv_len;
  switch (VAR_4->cipher) {
  case 128:
  case 129:
   VAR_5 = 4;
   break;
  case 130:
   VAR_5 = 12;
   break;
  case 131:
   VAR_5 = 8;
   break;
  }
 }
 FUNC_2(VAR_0, VAR_1, VAR_6, VAR_5);
}
