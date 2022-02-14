
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wmi_tlv_wow_nlo_config_cmd {void* flags; void* vdev_id; } ;
struct wmi_tlv {void* len; void* tag; scalar_t__ value; } ;
struct sk_buff {scalar_t__ data; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct ath10k*,int ,char*,int ) ;
 struct sk_buff* FUNC_4 (struct ath10k*,size_t) ;

__attribute__((used)) static struct sk_buff *FUNC_5(struct ath10k *VAR_6,
            u32 VAR_7)
{
 struct wmi_tlv_wow_nlo_config_cmd *VAR_8;
 struct wmi_tlv *VAR_9;
 struct sk_buff *VAR_10;
 void *VAR_11;
 size_t VAR_12;

 VAR_12 = sizeof(*VAR_9) + sizeof(*VAR_8) +
       sizeof(*VAR_9) +



       sizeof(*VAR_9);

 VAR_10 = FUNC_4(VAR_6, VAR_12);
 if (!VAR_10)
  return FUNC_0(-VAR_1);

 VAR_11 = (void *)VAR_10->data;
 VAR_9 = VAR_11;
 VAR_9->tag = FUNC_1(VAR_5);
 VAR_9->len = FUNC_1(sizeof(*VAR_8));
 VAR_8 = (void *)VAR_9->value;

 VAR_8->vdev_id = FUNC_2(VAR_7);
 VAR_8->flags = FUNC_2(VAR_2);

 VAR_11 += sizeof(*VAR_9);
 VAR_11 += sizeof(*VAR_8);


 VAR_9 = VAR_11;
 VAR_9->tag = FUNC_1(VAR_3);
 VAR_9->len = FUNC_1(0);

 VAR_11 += sizeof(*VAR_9);


 VAR_9 = VAR_11;
 VAR_9->tag = FUNC_1(VAR_4);
 VAR_9->len = FUNC_1(0);

 FUNC_3(VAR_6, VAR_0, "wmi tlv stop pno config vdev_id %d\n", VAR_7);
 return VAR_10;
}
