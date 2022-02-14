
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int addr; } ;
struct wmi_vdev_install_key_cmd {int key_data; TYPE_1__ peer_macaddr; void* key_rxmic_len; void* key_txmic_len; void* key_len; void* key_cipher; void* key_flags; void* key_idx; void* vdev_id; } ;
struct wmi_vdev_install_key_arg {scalar_t__ key_cipher; scalar_t__ key_len; scalar_t__ vdev_id; scalar_t__ key_idx; scalar_t__ key_flags; scalar_t__ key_txmic_len; scalar_t__ key_rxmic_len; int * key_data; int macaddr; } ;
struct sk_buff {scalar_t__ data; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct ath10k*,int ,char*,scalar_t__,scalar_t__,scalar_t__) ;
 struct sk_buff* FUNC_3 (struct ath10k*,scalar_t__) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int *,scalar_t__) ;

__attribute__((used)) static struct sk_buff *
FUNC_6(struct ath10k *VAR_4,
       const struct wmi_vdev_install_key_arg *VAR_5)
{
 struct wmi_vdev_install_key_cmd *VAR_6;
 struct sk_buff *VAR_7;

 if (VAR_5->key_cipher == VAR_3 && VAR_5->key_data != ((void*)0))
  return FUNC_0(-VAR_1);
 if (VAR_5->key_cipher != VAR_3 && VAR_5->key_data == ((void*)0))
  return FUNC_0(-VAR_1);

 VAR_7 = FUNC_3(VAR_4, sizeof(*VAR_6) + VAR_5->key_len);
 if (!VAR_7)
  return FUNC_0(-VAR_2);

 VAR_6 = (struct wmi_vdev_install_key_cmd *)VAR_7->data;
 VAR_6->vdev_id = FUNC_1(VAR_5->vdev_id);
 VAR_6->key_idx = FUNC_1(VAR_5->key_idx);
 VAR_6->key_flags = FUNC_1(VAR_5->key_flags);
 VAR_6->key_cipher = FUNC_1(VAR_5->key_cipher);
 VAR_6->key_len = FUNC_1(VAR_5->key_len);
 VAR_6->key_txmic_len = FUNC_1(VAR_5->key_txmic_len);
 VAR_6->key_rxmic_len = FUNC_1(VAR_5->key_rxmic_len);

 if (VAR_5->macaddr)
  FUNC_4(VAR_6->peer_macaddr.addr, VAR_5->macaddr);
 if (VAR_5->key_data)
  FUNC_5(VAR_6->key_data, VAR_5->key_data, VAR_5->key_len);

 FUNC_2(VAR_4, VAR_0,
     "wmi vdev install key idx %d cipher %d len %d\n",
     VAR_5->key_idx, VAR_5->key_cipher, VAR_5->key_len);
 return VAR_7;
}
