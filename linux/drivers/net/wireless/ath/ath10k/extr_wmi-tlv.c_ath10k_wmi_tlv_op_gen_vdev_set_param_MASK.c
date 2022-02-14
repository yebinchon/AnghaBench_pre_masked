
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wmi_vdev_set_param_cmd {void* param_value; void* param_id; void* vdev_id; } ;
struct wmi_tlv {scalar_t__ value; void* len; void* tag; } ;
struct sk_buff {scalar_t__ data; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int ) ;
 int VAR_2 ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct ath10k*,int ,char*,int ,int ,int ) ;
 struct sk_buff* FUNC_4 (struct ath10k*,int) ;

__attribute__((used)) static struct sk_buff *
FUNC_5(struct ath10k *VAR_3, u32 VAR_4,
         u32 VAR_5, u32 VAR_6)
{
 struct wmi_vdev_set_param_cmd *VAR_7;
 struct wmi_tlv *VAR_8;
 struct sk_buff *VAR_9;

 VAR_9 = FUNC_4(VAR_3, sizeof(*VAR_8) + sizeof(*VAR_7));
 if (!VAR_9)
  return FUNC_0(-VAR_1);

 VAR_8 = (void *)VAR_9->data;
 VAR_8->tag = FUNC_1(VAR_2);
 VAR_8->len = FUNC_1(sizeof(*VAR_7));
 VAR_7 = (void *)VAR_8->value;
 VAR_7->vdev_id = FUNC_2(VAR_4);
 VAR_7->param_id = FUNC_2(VAR_5);
 VAR_7->param_value = FUNC_2(VAR_6);

 FUNC_3(VAR_3, VAR_0, "wmi tlv vdev %d set param %d value 0x%x\n",
     VAR_4, VAR_5, VAR_6);
 return VAR_9;
}
