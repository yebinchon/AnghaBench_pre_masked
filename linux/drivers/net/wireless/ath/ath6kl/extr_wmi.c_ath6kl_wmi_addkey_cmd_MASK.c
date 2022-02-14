
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct wmi_add_cipher_key_cmd {int key_type; int key_mac_addr; scalar_t__ key_op_ctrl; int key_rsc; int key; scalar_t__ key_len; scalar_t__ key_usage; scalar_t__ key_index; } ;
struct wmi {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
typedef enum wmi_sync_flag { ____Placeholder_wmi_sync_flag } wmi_sync_flag ;
typedef enum ath6kl_crypto_type { ____Placeholder_ath6kl_crypto_type } ath6kl_crypto_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,char*,scalar_t__,int,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct wmi*,scalar_t__,struct sk_buff*,int ,int) ;
 struct sk_buff* FUNC_2 (int) ;
 int FUNC_3 (int ,scalar_t__*,unsigned int) ;

int FUNC_4(struct wmi *VAR_8, u8 VAR_9, u8 VAR_10,
     enum ath6kl_crypto_type VAR_11,
     u8 VAR_12, u8 VAR_13,
     u8 *VAR_14, unsigned int VAR_15,
     u8 *VAR_16,
     u8 VAR_17, u8 *VAR_18,
     enum wmi_sync_flag VAR_19)
{
 struct sk_buff *VAR_20;
 struct wmi_add_cipher_key_cmd *VAR_21;
 int VAR_22;

 FUNC_0(VAR_0,
     "addkey cmd: key_index=%u key_type=%d key_usage=%d key_len=%d key_op_ctrl=%d\n",
     VAR_10, VAR_11, VAR_12, VAR_13, VAR_17);

 if ((VAR_10 > VAR_6) || (VAR_13 > VAR_7) ||
     (VAR_16 == ((void*)0)) || VAR_15 > 8)
  return -VAR_1;

 if ((VAR_4 != VAR_11) && (((void*)0) == VAR_14))
  return -VAR_1;

 VAR_20 = FUNC_2(sizeof(*VAR_21));
 if (!VAR_20)
  return -VAR_2;

 VAR_21 = (struct wmi_add_cipher_key_cmd *) VAR_20->data;
 VAR_21->key_index = VAR_10;
 VAR_21->key_type = VAR_11;
 VAR_21->key_usage = VAR_12;
 VAR_21->key_len = VAR_13;
 FUNC_3(VAR_21->key, VAR_16, VAR_13);

 if (VAR_14 != ((void*)0))
  FUNC_3(VAR_21->key_rsc, VAR_14, VAR_15);

 VAR_21->key_op_ctrl = VAR_17;

 if (VAR_18)
  FUNC_3(VAR_21->key_mac_addr, VAR_18, VAR_3);

 VAR_22 = FUNC_1(VAR_8, VAR_9, VAR_20, VAR_5,
      VAR_19);

 return VAR_22;
}
