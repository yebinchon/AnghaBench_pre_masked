
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wmi_set_host_sleep_mode_cmd {void* awake; void* asleep; } ;
struct wmi {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
typedef enum ath6kl_host_mode { ____Placeholder_ath6kl_host_mode } ath6kl_host_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct wmi*,int ,struct sk_buff*,int ,int ) ;
 struct sk_buff* FUNC_2 (int) ;
 int FUNC_3 (struct wmi*) ;
 void* FUNC_4 (int) ;

int FUNC_5(struct wmi *VAR_6, u8 VAR_7,
           enum ath6kl_host_mode VAR_8)
{
 struct sk_buff *VAR_9;
 struct wmi_set_host_sleep_mode_cmd *VAR_10;
 int VAR_11;

 if ((VAR_8 != VAR_0) &&
     (VAR_8 != VAR_1)) {
  FUNC_0("invalid host sleep mode: %d\n", VAR_8);
  return -VAR_2;
 }

 VAR_9 = FUNC_2(sizeof(*VAR_10));
 if (!VAR_9)
  return -VAR_3;

 VAR_10 = (struct wmi_set_host_sleep_mode_cmd *) VAR_9->data;

 if (VAR_8 == VAR_0) {
  FUNC_3(VAR_6);
  VAR_10->asleep = FUNC_4(1);
 } else {
  VAR_10->awake = FUNC_4(1);
 }

 VAR_11 = FUNC_1(VAR_6, VAR_7, VAR_9,
      VAR_5,
      VAR_4);
 return VAR_11;
}
