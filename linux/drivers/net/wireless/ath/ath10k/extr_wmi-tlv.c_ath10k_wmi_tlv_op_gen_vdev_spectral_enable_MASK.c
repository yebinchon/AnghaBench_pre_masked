
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wmi_vdev_spectral_enable_cmd {void* enable_cmd; void* trigger_cmd; void* vdev_id; } ;
struct wmi_tlv {scalar_t__ value; void* len; void* tag; } ;
struct sk_buff {scalar_t__ data; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int ) ;
 int VAR_1 ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int ) ;
 struct sk_buff* FUNC_3 (struct ath10k*,size_t) ;

__attribute__((used)) static struct sk_buff *
FUNC_4(struct ath10k *VAR_2, u32 VAR_3,
        u32 VAR_4, u32 VAR_5)
{
 struct wmi_vdev_spectral_enable_cmd *VAR_6;
 struct sk_buff *VAR_7;
 struct wmi_tlv *VAR_8;
 void *VAR_9;
 size_t VAR_10;

 VAR_10 = sizeof(*VAR_8) + sizeof(*VAR_6);
 VAR_7 = FUNC_3(VAR_2, VAR_10);
 if (!VAR_7)
  return FUNC_0(-VAR_0);

 VAR_9 = (void *)VAR_7->data;
 VAR_8 = VAR_9;
 VAR_8->tag = FUNC_1(VAR_1);
 VAR_8->len = FUNC_1(sizeof(*VAR_6));
 VAR_6 = (void *)VAR_8->value;
 VAR_6->vdev_id = FUNC_2(VAR_3);
 VAR_6->trigger_cmd = FUNC_2(VAR_4);
 VAR_6->enable_cmd = FUNC_2(VAR_5);

 return VAR_7;
}
