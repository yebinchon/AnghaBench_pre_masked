
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct il_tx_cmd {int sec_ctl; int * key; int tx_flags; } ;
struct il_priv {int dummy; } ;
struct TYPE_2__ {struct ieee80211_key_conf* hw_key; } ;
struct ieee80211_tx_info {int flags; TYPE_1__ control; } ;
struct ieee80211_key_conf {int cipher; int keyidx; int keylen; int key; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;




 int FUNC_2 (struct ieee80211_key_conf*,struct sk_buff*,int *) ;
 int FUNC_3 (int *,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct il_priv *VAR_8, struct ieee80211_tx_info *VAR_9,
        struct il_tx_cmd *VAR_10, struct sk_buff *VAR_11,
        int VAR_12)
{
 struct ieee80211_key_conf *VAR_13 = VAR_9->control.hw_key;

 switch (VAR_13->cipher) {
 case 131:
  VAR_10->sec_ctl = VAR_2;
  FUNC_3(VAR_10->key, VAR_13->key, VAR_13->keylen);
  if (VAR_9->flags & VAR_0)
   VAR_10->tx_flags |= VAR_1;
  FUNC_0("tx_cmd with AES hwcrypto\n");
  break;

 case 130:
  VAR_10->sec_ctl = VAR_6;
  FUNC_2(VAR_13, VAR_11, VAR_10->key);
  FUNC_0("tx_cmd with tkip hwcrypto\n");
  break;

 case 129:
  VAR_10->sec_ctl |= VAR_3;

 case 128:
  VAR_10->sec_ctl |=
      (VAR_7 | (VAR_13->keyidx & VAR_4) <<
       VAR_5);

  FUNC_3(&VAR_10->key[3], VAR_13->key, VAR_13->keylen);

  FUNC_0("Configuring packet for WEP encryption " "with key %d\n",
       VAR_13->keyidx);
  break;

 default:
  FUNC_1("Unknown encode cipher %x\n", VAR_13->cipher);
  break;
 }
}
