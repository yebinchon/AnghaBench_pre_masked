
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wmi_force_fw_hang_cmd {void* delay_ms; void* type; } ;
struct sk_buff {scalar_t__ data; } ;
struct ath10k {int dummy; } ;
typedef enum wmi_force_fw_hang_type { ____Placeholder_wmi_force_fw_hang_type } wmi_force_fw_hang_type ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct ath10k*,int ,char*,int,int) ;
 struct sk_buff* FUNC_3 (struct ath10k*,int) ;

__attribute__((used)) static struct sk_buff *
FUNC_4(struct ath10k *VAR_2,
    enum wmi_force_fw_hang_type VAR_3, u32 VAR_4)
{
 struct wmi_force_fw_hang_cmd *VAR_5;
 struct sk_buff *VAR_6;

 VAR_6 = FUNC_3(VAR_2, sizeof(*VAR_5));
 if (!VAR_6)
  return FUNC_0(-VAR_1);

 VAR_5 = (struct wmi_force_fw_hang_cmd *)VAR_6->data;
 VAR_5->type = FUNC_1(VAR_3);
 VAR_5->delay_ms = FUNC_1(VAR_4);

 FUNC_2(VAR_2, VAR_0, "wmi force fw hang %d delay %d\n",
     VAR_3, VAR_4);
 return VAR_6;
}
