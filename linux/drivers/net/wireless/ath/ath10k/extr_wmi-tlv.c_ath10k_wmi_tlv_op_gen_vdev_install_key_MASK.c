
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int addr; } ;
struct wmi_vdev_install_key_cmd {TYPE_1__ peer_macaddr; void* key_rxmic_len; void* key_txmic_len; void* key_len; void* key_cipher; void* key_flags; void* key_idx; void* vdev_id; } ;
struct wmi_vdev_install_key_arg {scalar_t__ key_cipher; scalar_t__ key_len; scalar_t__ vdev_id; scalar_t__ key_idx; scalar_t__ key_flags; scalar_t__ key_txmic_len; scalar_t__ key_rxmic_len; int key_data; int macaddr; } ;
struct wmi_tlv {scalar_t__ value; void* len; void* tag; } ;
struct sk_buff {scalar_t__ data; } ;
struct ath10k {scalar_t__* wmi_key_cipher; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (int ) ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct ath10k*,int ,char*) ;
 struct sk_buff* FUNC_4 (struct ath10k*,size_t) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (scalar_t__,int ,scalar_t__) ;
 int FUNC_7 (scalar_t__,int) ;

__attribute__((used)) static struct sk_buff *
FUNC_8(struct ath10k *VAR_6,
           const struct wmi_vdev_install_key_arg *VAR_7)
{
 struct wmi_vdev_install_key_cmd *VAR_8;
 struct wmi_tlv *VAR_9;
 struct sk_buff *VAR_10;
 size_t VAR_11;
 void *VAR_12;

 if (VAR_7->key_cipher == VAR_6->wmi_key_cipher[VAR_3] &&
     VAR_7->key_data)
  return FUNC_0(-VAR_1);
 if (VAR_7->key_cipher != VAR_6->wmi_key_cipher[VAR_3] &&
     !VAR_7->key_data)
  return FUNC_0(-VAR_1);

 VAR_11 = sizeof(*VAR_9) + sizeof(*VAR_8) +
       sizeof(*VAR_9) + FUNC_7(VAR_7->key_len, sizeof(__le32));
 VAR_10 = FUNC_4(VAR_6, VAR_11);
 if (!VAR_10)
  return FUNC_0(-VAR_2);

 VAR_12 = (void *)VAR_10->data;
 VAR_9 = VAR_12;
 VAR_9->tag = FUNC_1(VAR_5);
 VAR_9->len = FUNC_1(sizeof(*VAR_8));
 VAR_8 = (void *)VAR_9->value;
 VAR_8->vdev_id = FUNC_2(VAR_7->vdev_id);
 VAR_8->key_idx = FUNC_2(VAR_7->key_idx);
 VAR_8->key_flags = FUNC_2(VAR_7->key_flags);
 VAR_8->key_cipher = FUNC_2(VAR_7->key_cipher);
 VAR_8->key_len = FUNC_2(VAR_7->key_len);
 VAR_8->key_txmic_len = FUNC_2(VAR_7->key_txmic_len);
 VAR_8->key_rxmic_len = FUNC_2(VAR_7->key_rxmic_len);

 if (VAR_7->macaddr)
  FUNC_5(VAR_8->peer_macaddr.addr, VAR_7->macaddr);

 VAR_12 += sizeof(*VAR_9);
 VAR_12 += sizeof(*VAR_8);

 VAR_9 = VAR_12;
 VAR_9->tag = FUNC_1(VAR_4);
 VAR_9->len = FUNC_1(FUNC_7(VAR_7->key_len, sizeof(__le32)));
 if (VAR_7->key_data)
  FUNC_6(VAR_9->value, VAR_7->key_data, VAR_7->key_len);

 VAR_12 += sizeof(*VAR_9);
 VAR_12 += FUNC_7(VAR_7->key_len, sizeof(__le32));

 FUNC_3(VAR_6, VAR_0, "wmi tlv vdev install key\n");
 return VAR_10;
}
