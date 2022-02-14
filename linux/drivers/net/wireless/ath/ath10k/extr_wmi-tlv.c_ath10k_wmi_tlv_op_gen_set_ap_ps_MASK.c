
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct wmi_tlv {scalar_t__ value; void* len; void* tag; } ;
struct TYPE_2__ {int addr; } ;
struct wmi_ap_ps_peer_cmd {TYPE_1__ peer_macaddr; void* param_value; void* param_id; void* vdev_id; } ;
struct sk_buff {scalar_t__ data; } ;
struct ath10k {int dummy; } ;
typedef enum wmi_ap_ps_peer_param { ____Placeholder_wmi_ap_ps_peer_param } wmi_ap_ps_peer_param ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (int ) ;
 int VAR_3 ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct ath10k*,int ,char*) ;
 struct sk_buff* FUNC_4 (struct ath10k*,int) ;
 int FUNC_5 (int ,int const*) ;

__attribute__((used)) static struct sk_buff *
FUNC_6(struct ath10k *VAR_4, u32 VAR_5, const u8 *VAR_6,
    enum wmi_ap_ps_peer_param VAR_7, u32 VAR_8)
{
 struct wmi_ap_ps_peer_cmd *VAR_9;
 struct wmi_tlv *VAR_10;
 struct sk_buff *VAR_11;

 if (!VAR_6)
  return FUNC_0(-VAR_1);

 VAR_11 = FUNC_4(VAR_4, sizeof(*VAR_10) + sizeof(*VAR_9));
 if (!VAR_11)
  return FUNC_0(-VAR_2);

 VAR_10 = (void *)VAR_11->data;
 VAR_10->tag = FUNC_1(VAR_3);
 VAR_10->len = FUNC_1(sizeof(*VAR_9));
 VAR_9 = (void *)VAR_10->value;
 VAR_9->vdev_id = FUNC_2(VAR_5);
 VAR_9->param_id = FUNC_2(VAR_7);
 VAR_9->param_value = FUNC_2(VAR_8);
 FUNC_5(VAR_9->peer_macaddr.addr, VAR_6);

 FUNC_3(VAR_4, VAR_0, "wmi tlv ap ps param\n");
 return VAR_11;
}
