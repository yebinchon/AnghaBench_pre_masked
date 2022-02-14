
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int u8 ;
struct wsm_remove_key {int index; } ;
struct TYPE_19__ {int keyid; int mic_key; int keydata; } ;
struct TYPE_18__ {int keyid; int mic_key; int keydata; int peer; } ;
struct TYPE_17__ {int keyid; int * rx_seqnum; int keydata; } ;
struct TYPE_15__ {int keydata; int peer; } ;
struct TYPE_14__ {int* rx_seqnum; int keyid; int rx_mic_key; int keydata; } ;
struct TYPE_12__ {int rx_mic_key; int tx_mic_key; int keydata; int peer; } ;
struct TYPE_11__ {int keylen; int keyid; int keydata; } ;
struct TYPE_20__ {int keylen; int keydata; int peer; } ;
struct wsm_add_key {TYPE_8__ wapi_group; int type; TYPE_7__ wapi_pairwise; TYPE_6__ aes_group; TYPE_4__ aes_pairwise; TYPE_3__ tkip_group; TYPE_1__ tkip_pairwise; TYPE_10__ wep_group; TYPE_9__ wep_pairwise; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int * addr; } ;
struct TYPE_16__ {int * pn; } ;
struct TYPE_13__ {int iv16; int iv32; } ;
struct ieee80211_key_seq {TYPE_5__ ccmp; TYPE_2__ tkip; } ;
struct ieee80211_key_conf {int flags; int cipher; int keylen; int hw_key_idx; int keyidx; int * key; } ;
struct ieee80211_hw {struct cw1200_common* priv; } ;
struct cw1200_common {int conf_mutex; int mode; struct wsm_add_key* keys; } ;
typedef enum set_key_cmd { ____Placeholder_set_key_cmd } set_key_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;





 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct cw1200_common*) ;
 int FUNC_1 (struct cw1200_common*,int) ;
 int FUNC_2 (struct ieee80211_key_conf*,int ,struct ieee80211_key_seq*) ;
 int FUNC_3 (int ,int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (struct cw1200_common*,struct wsm_add_key*) ;
 int FUNC_8 (struct cw1200_common*,struct wsm_remove_key*) ;

int FUNC_9(struct ieee80211_hw *VAR_18, enum set_key_cmd VAR_19,
     struct ieee80211_vif *VAR_20, struct ieee80211_sta *VAR_21,
     struct ieee80211_key_conf *VAR_22)
{
 int VAR_23 = -VAR_2;
 struct cw1200_common *VAR_24 = VAR_18->priv;
 struct ieee80211_key_seq VAR_25;

 FUNC_4(&VAR_24->conf_mutex);

 if (VAR_19 == VAR_8) {
  u8 *VAR_26 = ((void*)0);
  int VAR_27 = (VAR_22->flags & VAR_4) ?
   1 : 0;
  int VAR_28 = FUNC_0(VAR_24);
  struct wsm_add_key *VAR_29 = &VAR_24->keys[VAR_28];

  if (VAR_28 < 0) {
   VAR_23 = -VAR_1;
   goto finally;
  }

  if (VAR_21)
   VAR_26 = VAR_21->addr;

  VAR_22->flags |= VAR_5 |
         VAR_6;

  switch (VAR_22->cipher) {
  case 128:
  case 129:
   if (VAR_22->keylen > 16) {
    FUNC_1(VAR_24, VAR_28);
    VAR_23 = -VAR_1;
    goto finally;
   }

   if (VAR_27) {
    VAR_29->type = VAR_17;
    FUNC_3(VAR_29->wep_pairwise.peer,
           VAR_26, VAR_3);
    FUNC_3(VAR_29->wep_pairwise.keydata,
           &VAR_22->key[0], VAR_22->keylen);
    VAR_29->wep_pairwise.keylen = VAR_22->keylen;
   } else {
    VAR_29->type = VAR_16;
    FUNC_3(VAR_29->wep_group.keydata,
           &VAR_22->key[0], VAR_22->keylen);
    VAR_29->wep_group.keylen = VAR_22->keylen;
    VAR_29->wep_group.keyid = VAR_22->keyidx;
   }
   break;
  case 130:
   FUNC_2(VAR_22, 0, &VAR_25);
   if (VAR_27) {
    VAR_29->type = VAR_13;
    FUNC_3(VAR_29->tkip_pairwise.peer,
           VAR_26, VAR_3);
    FUNC_3(VAR_29->tkip_pairwise.keydata,
           &VAR_22->key[0], 16);
    FUNC_3(VAR_29->tkip_pairwise.tx_mic_key,
           &VAR_22->key[16], 8);
    FUNC_3(VAR_29->tkip_pairwise.rx_mic_key,
           &VAR_22->key[24], 8);
   } else {
    size_t VAR_30 =
     (VAR_24->mode == VAR_7) ?
     16 : 24;
    VAR_29->type = VAR_12;
    FUNC_3(VAR_29->tkip_group.keydata,
           &VAR_22->key[0], 16);
    FUNC_3(VAR_29->tkip_group.rx_mic_key,
           &VAR_22->key[VAR_30], 8);

    VAR_29->tkip_group.rx_seqnum[0] = VAR_25.tkip.iv16 & 0xff;
    VAR_29->tkip_group.rx_seqnum[1] = (VAR_25.tkip.iv16 >> 8) & 0xff;
    VAR_29->tkip_group.rx_seqnum[2] = VAR_25.tkip.iv32 & 0xff;
    VAR_29->tkip_group.rx_seqnum[3] = (VAR_25.tkip.iv32 >> 8) & 0xff;
    VAR_29->tkip_group.rx_seqnum[4] = (VAR_25.tkip.iv32 >> 16) & 0xff;
    VAR_29->tkip_group.rx_seqnum[5] = (VAR_25.tkip.iv32 >> 24) & 0xff;
    VAR_29->tkip_group.rx_seqnum[6] = 0;
    VAR_29->tkip_group.rx_seqnum[7] = 0;

    VAR_29->tkip_group.keyid = VAR_22->keyidx;
   }
   break;
  case 132:
   FUNC_2(VAR_22, 0, &VAR_25);
   if (VAR_27) {
    VAR_29->type = VAR_11;
    FUNC_3(VAR_29->aes_pairwise.peer,
           VAR_26, VAR_3);
    FUNC_3(VAR_29->aes_pairwise.keydata,
           &VAR_22->key[0], 16);
   } else {
    VAR_29->type = VAR_10;
    FUNC_3(VAR_29->aes_group.keydata,
           &VAR_22->key[0], 16);

    VAR_29->aes_group.rx_seqnum[0] = VAR_25.ccmp.pn[5];
    VAR_29->aes_group.rx_seqnum[1] = VAR_25.ccmp.pn[4];
    VAR_29->aes_group.rx_seqnum[2] = VAR_25.ccmp.pn[3];
    VAR_29->aes_group.rx_seqnum[3] = VAR_25.ccmp.pn[2];
    VAR_29->aes_group.rx_seqnum[4] = VAR_25.ccmp.pn[1];
    VAR_29->aes_group.rx_seqnum[5] = VAR_25.ccmp.pn[0];
    VAR_29->aes_group.rx_seqnum[6] = 0;
    VAR_29->aes_group.rx_seqnum[7] = 0;
    VAR_29->aes_group.keyid = VAR_22->keyidx;
   }
   break;
  case 131:
   if (VAR_27) {
    VAR_29->type = VAR_15;
    FUNC_3(VAR_29->wapi_pairwise.peer,
           VAR_26, VAR_3);
    FUNC_3(VAR_29->wapi_pairwise.keydata,
           &VAR_22->key[0], 16);
    FUNC_3(VAR_29->wapi_pairwise.mic_key,
           &VAR_22->key[16], 16);
    VAR_29->wapi_pairwise.keyid = VAR_22->keyidx;
   } else {
    VAR_29->type = VAR_14;
    FUNC_3(VAR_29->wapi_group.keydata,
           &VAR_22->key[0], 16);
    FUNC_3(VAR_29->wapi_group.mic_key,
           &VAR_22->key[16], 16);
    VAR_29->wapi_group.keyid = VAR_22->keyidx;
   }
   break;
  default:
   FUNC_6("Unhandled key type %d\n", VAR_22->cipher);
   FUNC_1(VAR_24, VAR_28);
   VAR_23 = -VAR_2;
   goto finally;
  }
  VAR_23 = FUNC_7(VAR_24, VAR_29);
  if (!VAR_23)
   VAR_22->hw_key_idx = VAR_28;
  else
   FUNC_1(VAR_24, VAR_28);
 } else if (VAR_19 == VAR_0) {
  struct wsm_remove_key VAR_31 = {
   .index = VAR_22->hw_key_idx,
  };

  if (VAR_31.index > VAR_9) {
   VAR_23 = -VAR_1;
   goto finally;
  }

  FUNC_1(VAR_24, VAR_31.index);
  VAR_23 = FUNC_8(VAR_24, &VAR_31);
 } else {
  FUNC_6("Unhandled key command %d\n", VAR_19);
 }

finally:
 FUNC_5(&VAR_24->conf_mutex);
 return VAR_23;
}
