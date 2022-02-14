
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_4__ {TYPE_1__* hw_key; } ;
struct ieee80211_tx_info {TYPE_2__ control; } ;
struct TYPE_3__ {int cipher; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;





int FUNC_1(struct sk_buff *VAR_4)
{
 struct ieee80211_tx_info *VAR_5 = FUNC_0(VAR_4);

 if (VAR_5->control.hw_key) {
  switch (VAR_5->control.hw_key->cipher) {
  case 128:
  case 129:
   return VAR_3;
  case 130:
   return VAR_2;
  case 131:
   return VAR_0;
  default:
   break;
  }
 }

 return VAR_1;
}
