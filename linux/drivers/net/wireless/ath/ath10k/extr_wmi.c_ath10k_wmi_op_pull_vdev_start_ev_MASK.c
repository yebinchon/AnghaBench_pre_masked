
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_vdev_start_response_event {int status; int resp_type; int req_id; int vdev_id; } ;
struct wmi_vdev_start_ev_arg {int status; int resp_type; int req_id; int vdev_id; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,int) ;

__attribute__((used)) static int
FUNC_1(struct ath10k *VAR_1, struct sk_buff *VAR_2,
     struct wmi_vdev_start_ev_arg *VAR_3)
{
 struct wmi_vdev_start_response_event *VAR_4 = (void *)VAR_2->data;

 if (VAR_2->len < sizeof(*VAR_4))
  return -VAR_0;

 FUNC_0(VAR_2, sizeof(*VAR_4));
 VAR_3->vdev_id = VAR_4->vdev_id;
 VAR_3->req_id = VAR_4->req_id;
 VAR_3->resp_type = VAR_4->resp_type;
 VAR_3->status = VAR_4->status;

 return 0;
}
