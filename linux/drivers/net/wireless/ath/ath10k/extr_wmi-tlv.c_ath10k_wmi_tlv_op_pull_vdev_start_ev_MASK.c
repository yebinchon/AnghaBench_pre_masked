
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_vdev_start_response_event {int status; int resp_type; int req_id; int vdev_id; } ;
struct wmi_vdev_start_ev_arg {int status; int resp_type; int req_id; int vdev_id; } ;
struct sk_buff {int len; int data; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void const**) ;
 int FUNC_1 (void const**) ;
 size_t VAR_2 ;
 int FUNC_2 (struct ath10k*,char*,int) ;
 void** FUNC_3 (struct ath10k*,int ,int ,int ) ;
 int FUNC_4 (void const**) ;
 int FUNC_5 (struct sk_buff*,int) ;

__attribute__((used)) static int
FUNC_6(struct ath10k *VAR_3, struct sk_buff *VAR_4,
         struct wmi_vdev_start_ev_arg *VAR_5)
{
 const void **VAR_6;
 const struct wmi_vdev_start_response_event *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_3(VAR_3, VAR_4->data, VAR_4->len, VAR_1);
 if (FUNC_0(VAR_6)) {
  VAR_8 = FUNC_1(VAR_6);
  FUNC_2(VAR_3, "failed to parse tlv: %d\n", VAR_8);
  return VAR_8;
 }

 VAR_7 = VAR_6[VAR_2];
 if (!VAR_7) {
  FUNC_4(VAR_6);
  return -VAR_0;
 }

 FUNC_5(VAR_4, sizeof(*VAR_7));
 VAR_5->vdev_id = VAR_7->vdev_id;
 VAR_5->req_id = VAR_7->req_id;
 VAR_5->resp_type = VAR_7->resp_type;
 VAR_5->status = VAR_7->status;

 FUNC_4(VAR_6);
 return 0;
}
