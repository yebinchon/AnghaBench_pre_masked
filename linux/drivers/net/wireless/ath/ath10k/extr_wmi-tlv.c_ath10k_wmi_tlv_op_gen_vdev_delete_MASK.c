
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wmi_vdev_delete_cmd {int vdev_id; } ;
struct wmi_tlv {scalar_t__ value; void* len; void* tag; } ;
struct sk_buff {scalar_t__ data; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int ) ;
 int VAR_2 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ath10k*,int ,char*) ;
 struct sk_buff* FUNC_4 (struct ath10k*,int) ;

__attribute__((used)) static struct sk_buff *
FUNC_5(struct ath10k *VAR_3, u32 VAR_4)
{
 struct wmi_vdev_delete_cmd *VAR_5;
 struct wmi_tlv *VAR_6;
 struct sk_buff *VAR_7;

 VAR_7 = FUNC_4(VAR_3, sizeof(*VAR_6) + sizeof(*VAR_5));
 if (!VAR_7)
  return FUNC_0(-VAR_1);

 VAR_6 = (void *)VAR_7->data;
 VAR_6->tag = FUNC_1(VAR_2);
 VAR_6->len = FUNC_1(sizeof(*VAR_5));
 VAR_5 = (void *)VAR_6->value;
 VAR_5->vdev_id = FUNC_2(VAR_4);

 FUNC_3(VAR_3, VAR_0, "wmi tlv vdev delete\n");
 return VAR_7;
}
