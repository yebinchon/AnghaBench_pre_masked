
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wmi_power_params_cmd {void* ps_fail_event_policy; void* num_tx_to_wakeup; void* tx_wakeup_policy; void* dtim_policy; void* pspoll_number; void* idle_period; } ;
struct wmi {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wmi*,int ,struct sk_buff*,int ,int ) ;
 struct sk_buff* FUNC_1 (int) ;
 void* FUNC_2 (int ) ;

int FUNC_3(struct wmi *VAR_3, u8 VAR_4, u16 VAR_5,
       u16 VAR_6, u16 VAR_7,
       u16 VAR_8, u16 VAR_9,
       u16 VAR_10)
{
 struct sk_buff *VAR_11;
 struct wmi_power_params_cmd *VAR_12;
 int VAR_13;

 VAR_11 = FUNC_1(sizeof(*VAR_12));
 if (!VAR_11)
  return -VAR_0;

 VAR_12 = (struct wmi_power_params_cmd *)VAR_11->data;
 VAR_12->idle_period = FUNC_2(VAR_5);
 VAR_12->pspoll_number = FUNC_2(VAR_6);
 VAR_12->dtim_policy = FUNC_2(VAR_7);
 VAR_12->tx_wakeup_policy = FUNC_2(VAR_8);
 VAR_12->num_tx_to_wakeup = FUNC_2(VAR_9);
 VAR_12->ps_fail_event_policy = FUNC_2(VAR_10);

 VAR_13 = FUNC_0(VAR_3, VAR_4, VAR_11, VAR_2,
      VAR_1);
 return VAR_13;
}
