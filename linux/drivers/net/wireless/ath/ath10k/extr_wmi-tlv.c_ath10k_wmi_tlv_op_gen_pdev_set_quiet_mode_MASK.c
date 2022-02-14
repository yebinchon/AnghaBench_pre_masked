
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wmi_tlv_set_quiet_cmd {void* enabled; void* next_start; void* duration; void* period; void* vdev_id; } ;
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
       u32 VAR_5, u32 VAR_6,
       u32 VAR_7)
{
 struct wmi_tlv_set_quiet_cmd *VAR_8;
 struct wmi_tlv *VAR_9;
 struct sk_buff *VAR_10;

 VAR_10 = FUNC_4(VAR_3, sizeof(*VAR_9) + sizeof(*VAR_8));
 if (!VAR_10)
  return FUNC_0(-VAR_1);

 VAR_9 = (void *)VAR_10->data;
 VAR_9->tag = FUNC_1(VAR_2);
 VAR_9->len = FUNC_1(sizeof(*VAR_8));
 VAR_8 = (void *)VAR_9->value;


 VAR_8->vdev_id = FUNC_2(0);
 VAR_8->period = FUNC_2(VAR_4);
 VAR_8->duration = FUNC_2(VAR_5);
 VAR_8->next_start = FUNC_2(VAR_6);
 VAR_8->enabled = FUNC_2(VAR_7);

 FUNC_3(VAR_3, VAR_0,
     "wmi tlv quiet param: period %u duration %u enabled %d\n",
     VAR_4, VAR_5, VAR_7);
 return VAR_10;
}
