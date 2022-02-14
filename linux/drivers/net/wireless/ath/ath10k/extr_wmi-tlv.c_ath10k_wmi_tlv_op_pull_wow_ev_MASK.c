
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_wow_ev_arg {void* data_len; void* wake_reason; void* flag; void* vdev_id; } ;
struct wmi_tlv_wow_event_info {int data_len; int wake_reason; int flag; int vdev_id; } ;
struct sk_buff {int len; int data; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void const**) ;
 int FUNC_1 (void const**) ;
 size_t VAR_2 ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct ath10k*,char*,int) ;
 void** FUNC_4 (struct ath10k*,int ,int ,int ) ;
 int FUNC_5 (void const**) ;

__attribute__((used)) static int
FUNC_6(struct ath10k *VAR_3, struct sk_buff *VAR_4,
         struct wmi_wow_ev_arg *VAR_5)
{
 const void **VAR_6;
 const struct wmi_tlv_wow_event_info *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_4(VAR_3, VAR_4->data, VAR_4->len, VAR_1);
 if (FUNC_0(VAR_6)) {
  VAR_8 = FUNC_1(VAR_6);
  FUNC_3(VAR_3, "failed to parse tlv: %d\n", VAR_8);
  return VAR_8;
 }

 VAR_7 = VAR_6[VAR_2];
 if (!VAR_7) {
  FUNC_5(VAR_6);
  return -VAR_0;
 }

 VAR_5->vdev_id = FUNC_2(VAR_7->vdev_id);
 VAR_5->flag = FUNC_2(VAR_7->flag);
 VAR_5->wake_reason = FUNC_2(VAR_7->wake_reason);
 VAR_5->data_len = FUNC_2(VAR_7->data_len);

 FUNC_5(VAR_6);
 return 0;
}
