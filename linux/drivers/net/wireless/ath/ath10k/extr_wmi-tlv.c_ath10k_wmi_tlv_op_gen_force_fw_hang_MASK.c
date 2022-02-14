
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wmi_tlv {scalar_t__ value; void* len; void* tag; } ;
struct wmi_force_fw_hang_cmd {void* delay_ms; void* type; } ;
struct sk_buff {scalar_t__ data; } ;
struct ath10k {int dummy; } ;
typedef enum wmi_force_fw_hang_type { ____Placeholder_wmi_force_fw_hang_type } wmi_force_fw_hang_type ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int ) ;
 int VAR_2 ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct ath10k*,int ,char*) ;
 struct sk_buff* FUNC_4 (struct ath10k*,int) ;

__attribute__((used)) static struct sk_buff *
FUNC_5(struct ath10k *VAR_3,
        enum wmi_force_fw_hang_type VAR_4,
        u32 VAR_5)
{
 struct wmi_force_fw_hang_cmd *VAR_6;
 struct wmi_tlv *VAR_7;
 struct sk_buff *VAR_8;

 VAR_8 = FUNC_4(VAR_3, sizeof(*VAR_7) + sizeof(*VAR_6));
 if (!VAR_8)
  return FUNC_0(-VAR_1);

 VAR_7 = (void *)VAR_8->data;
 VAR_7->tag = FUNC_1(VAR_2);
 VAR_7->len = FUNC_1(sizeof(*VAR_6));
 VAR_6 = (void *)VAR_7->value;
 VAR_6->type = FUNC_2(VAR_4);
 VAR_6->delay_ms = FUNC_2(VAR_5);

 FUNC_3(VAR_3, VAR_0, "wmi tlv force fw hang\n");
 return VAR_8;
}
