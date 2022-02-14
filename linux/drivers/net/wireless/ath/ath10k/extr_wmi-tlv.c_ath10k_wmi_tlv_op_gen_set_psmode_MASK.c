
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wmi_tlv {scalar_t__ value; void* len; void* tag; } ;
struct wmi_sta_powersave_mode_cmd {void* sta_ps_mode; void* vdev_id; } ;
struct sk_buff {scalar_t__ data; } ;
struct ath10k {int dummy; } ;
typedef enum wmi_sta_ps_mode { ____Placeholder_wmi_sta_ps_mode } wmi_sta_ps_mode ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int ) ;
 int VAR_2 ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct ath10k*,int ,char*) ;
 struct sk_buff* FUNC_4 (struct ath10k*,int) ;

__attribute__((used)) static struct sk_buff *
FUNC_5(struct ath10k *VAR_3, u32 VAR_4,
     enum wmi_sta_ps_mode VAR_5)
{
 struct wmi_sta_powersave_mode_cmd *VAR_6;
 struct wmi_tlv *VAR_7;
 struct sk_buff *VAR_8;

 VAR_8 = FUNC_4(VAR_3, sizeof(*VAR_7) + sizeof(*VAR_6));
 if (!VAR_8)
  return FUNC_0(-VAR_1);

 VAR_7 = (void *)VAR_8->data;
 VAR_7->tag = FUNC_1(VAR_2);
 VAR_7->len = FUNC_1(sizeof(*VAR_6));
 VAR_6 = (void *)VAR_7->value;
 VAR_6->vdev_id = FUNC_2(VAR_4);
 VAR_6->sta_ps_mode = FUNC_2(VAR_5);

 FUNC_3(VAR_3, VAR_0, "wmi tlv set psmode\n");
 return VAR_8;
}
