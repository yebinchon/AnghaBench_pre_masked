
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct il_priv {TYPE_2__* stations; } ;
struct il_hw_key {int cipher; int keylen; int key; } ;
struct TYPE_5__ {scalar_t__ payload; } ;
struct il_device_cmd {TYPE_1__ cmd; } ;
struct il3945_tx_cmd {int sec_ctl; int * key; } ;
struct TYPE_8__ {TYPE_3__* hw_key; } ;
struct ieee80211_tx_info {TYPE_4__ control; } ;
struct TYPE_7__ {int hw_key_idx; } ;
struct TYPE_6__ {struct il_hw_key keyinfo; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct il_priv *VAR_5, struct ieee80211_tx_info *VAR_6,
        struct il_device_cmd *VAR_7,
        struct sk_buff *VAR_8, int VAR_9)
{
 struct il3945_tx_cmd *VAR_10 = (struct il3945_tx_cmd *)VAR_7->cmd.payload;
 struct il_hw_key *VAR_11 = &VAR_5->stations[VAR_9].keyinfo;

 VAR_10->sec_ctl = 0;

 switch (VAR_11->cipher) {
 case 131:
  VAR_10->sec_ctl = VAR_0;
  FUNC_2(VAR_10->key, VAR_11->key, VAR_11->keylen);
  FUNC_0("tx_cmd with AES hwcrypto\n");
  break;

 case 130:
  break;

 case 129:
  VAR_10->sec_ctl |= VAR_1;

 case 128:
  VAR_10->sec_ctl |=
      VAR_4 | (VAR_6->control.hw_key->
          hw_key_idx & VAR_2) <<
      VAR_3;

  FUNC_2(&VAR_10->key[3], VAR_11->key, VAR_11->keylen);

  FUNC_0("Configuring packet for WEP encryption " "with key %d\n",
       VAR_6->control.hw_key->hw_key_idx);
  break;

 default:
  FUNC_1("Unknown encode cipher %x\n", VAR_11->cipher);
  break;
 }
}
