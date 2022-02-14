
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct wmi_tlv {scalar_t__ value; void* len; void* tag; } ;
struct wmi_stop_scan_cmd {void* scan_req_id; void* scan_id; void* vdev_id; void* req_type; } ;
struct TYPE_2__ {int scan_id; int vdev_id; } ;
struct wmi_stop_scan_arg {int req_id; scalar_t__ req_type; TYPE_1__ u; } ;
struct sk_buff {scalar_t__ data; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct ath10k*,int ,char*) ;
 struct sk_buff* FUNC_4 (struct ath10k*,int) ;

__attribute__((used)) static struct sk_buff *
FUNC_5(struct ath10k *VAR_7,
    const struct wmi_stop_scan_arg *VAR_8)
{
 struct wmi_stop_scan_cmd *VAR_9;
 struct wmi_tlv *VAR_10;
 struct sk_buff *VAR_11;
 u32 VAR_12;
 u32 VAR_13;

 if (VAR_8->req_id > 0xFFF)
  return FUNC_0(-VAR_1);
 if (VAR_8->req_type == VAR_5 && VAR_8->u.scan_id > 0xFFF)
  return FUNC_0(-VAR_1);

 VAR_11 = FUNC_4(VAR_7, sizeof(*VAR_10) + sizeof(*VAR_9));
 if (!VAR_11)
  return FUNC_0(-VAR_2);

 VAR_12 = VAR_8->u.scan_id;
 VAR_12 |= VAR_4;

 VAR_13 = VAR_8->req_id;
 VAR_13 |= VAR_3;

 VAR_10 = (void *)VAR_11->data;
 VAR_10->tag = FUNC_1(VAR_6);
 VAR_10->len = FUNC_1(sizeof(*VAR_9));
 VAR_9 = (void *)VAR_10->value;
 VAR_9->req_type = FUNC_2(VAR_8->req_type);
 VAR_9->vdev_id = FUNC_2(VAR_8->u.vdev_id);
 VAR_9->scan_id = FUNC_2(VAR_12);
 VAR_9->scan_req_id = FUNC_2(VAR_13);

 FUNC_3(VAR_7, VAR_0, "wmi tlv stop scan\n");
 return VAR_11;
}
