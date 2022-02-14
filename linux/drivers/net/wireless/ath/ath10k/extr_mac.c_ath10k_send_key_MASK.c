
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wmi_vdev_install_key_arg {int key_txmic_len; int key_rxmic_len; int * key_data; int key_cipher; int const* macaddr; int key_flags; int key_len; int key_idx; int vdev_id; } ;
struct ieee80211_key_conf {int cipher; int flags; int * key; int keylen; int keyidx; } ;
struct ath10k_vif {struct ath10k* ar; int vdev_id; } ;
struct ath10k {int * wmi_key_cipher; int dev_flags; int conf_mutex; } ;
typedef enum set_key_cmd { ____Placeholder_set_key_cmd } set_key_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int FUNC_1 (struct ath10k*,char*,int) ;
 int FUNC_2 (struct ath10k*,struct wmi_vdev_install_key_arg*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct ath10k_vif *VAR_11,
      struct ieee80211_key_conf *VAR_12,
      enum set_key_cmd VAR_13,
      const u8 *VAR_14, u32 VAR_15)
{
 struct ath10k *VAR_16 = VAR_11->ar;
 struct wmi_vdev_install_key_arg VAR_17 = {
  .vdev_id = VAR_11->vdev_id,
  .key_idx = VAR_12->keyidx,
  .key_len = VAR_12->keylen,
  .key_data = VAR_12->key,
  .key_flags = VAR_15,
  .macaddr = VAR_14,
 };

 FUNC_3(&VAR_11->ar->conf_mutex);

 switch (VAR_12->cipher) {
 case 134:
  VAR_17.key_cipher = VAR_16->wmi_key_cipher[VAR_6];
  VAR_12->flags |= VAR_5;
  break;
 case 130:
  VAR_17.key_cipher = VAR_16->wmi_key_cipher[VAR_9];
  VAR_17.key_txmic_len = 8;
  VAR_17.key_rxmic_len = 8;
  break;
 case 128:
 case 129:
  VAR_17.key_cipher = VAR_16->wmi_key_cipher[VAR_10];
  break;
 case 133:
  VAR_17.key_cipher = VAR_16->wmi_key_cipher[VAR_6];
  break;
 case 132:
 case 131:
  VAR_17.key_cipher = VAR_16->wmi_key_cipher[VAR_7];
  break;
 case 136:
 case 135:
 case 137:
 case 138:
  FUNC_0(1);
  return -VAR_2;
 default:
  FUNC_1(VAR_16, "cipher %d is not supported\n", VAR_12->cipher);
  return -VAR_3;
 }

 if (FUNC_4(VAR_0, &VAR_16->dev_flags))
  VAR_12->flags |= VAR_4;

 if (VAR_13 == VAR_1) {
  VAR_17.key_cipher = VAR_16->wmi_key_cipher[VAR_8];
  VAR_17.key_data = ((void*)0);
 }

 return FUNC_2(VAR_11->ar, &VAR_17);
}
