
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
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
 void* FUNC_1 (int) ;
 int FUNC_2 (struct ath10k*,int ,char*,int,int,int) ;
 struct sk_buff* FUNC_3 (struct ath10k*,int) ;

__attribute__((used)) static struct sk_buff *
FUNC_4(struct ath10k *VAR_6,
       const struct wmi_stop_scan_arg *VAR_7)
{
 struct wmi_stop_scan_cmd *VAR_8;
 struct sk_buff *VAR_9;
 u32 VAR_10;
 u32 VAR_11;

 if (VAR_7->req_id > 0xFFF)
  return FUNC_0(-VAR_1);
 if (VAR_7->req_type == VAR_5 && VAR_7->u.scan_id > 0xFFF)
  return FUNC_0(-VAR_1);

 VAR_9 = FUNC_3(VAR_6, sizeof(*VAR_8));
 if (!VAR_9)
  return FUNC_0(-VAR_2);

 VAR_10 = VAR_7->u.scan_id;
 VAR_10 |= VAR_4;

 VAR_11 = VAR_7->req_id;
 VAR_11 |= VAR_3;

 VAR_8 = (struct wmi_stop_scan_cmd *)VAR_9->data;
 VAR_8->req_type = FUNC_1(VAR_7->req_type);
 VAR_8->vdev_id = FUNC_1(VAR_7->u.vdev_id);
 VAR_8->scan_id = FUNC_1(VAR_10);
 VAR_8->scan_req_id = FUNC_1(VAR_11);

 FUNC_2(VAR_6, VAR_0,
     "wmi stop scan reqid %d req_type %d vdev/scan_id %d\n",
     VAR_7->req_id, VAR_7->req_type, VAR_7->u.scan_id);
 return VAR_9;
}
