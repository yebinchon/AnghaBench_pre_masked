
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct wmi_set_wow_mode_cmd {int host_req_delay; void* filter; void* enable_wow; } ;
struct wmi {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
typedef enum ath6kl_wow_mode { ____Placeholder_ath6kl_wow_mode } ath6kl_wow_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct wmi*,int ,struct sk_buff*,int ,int ) ;
 struct sk_buff* FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int) ;

int FUNC_5(struct wmi *VAR_6, u8 VAR_7,
    enum ath6kl_wow_mode VAR_8,
    u32 VAR_9, u16 VAR_10)
{
 struct sk_buff *VAR_11;
 struct wmi_set_wow_mode_cmd *VAR_12;
 int VAR_13;

 if ((VAR_8 != VAR_1) &&
     VAR_8 != VAR_0) {
  FUNC_0("invalid wow mode: %d\n", VAR_8);
  return -VAR_2;
 }

 VAR_11 = FUNC_2(sizeof(*VAR_12));
 if (!VAR_11)
  return -VAR_3;

 VAR_12 = (struct wmi_set_wow_mode_cmd *) VAR_11->data;
 VAR_12->enable_wow = FUNC_4(VAR_8);
 VAR_12->filter = FUNC_4(VAR_9);
 VAR_12->host_req_delay = FUNC_3(VAR_10);

 VAR_13 = FUNC_1(VAR_6, VAR_7, VAR_11, VAR_5,
      VAR_4);
 return VAR_13;
}
