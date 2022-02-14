
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_roam_ev_arg {int reason; int vdev_id; } ;
struct wmi_roam_ev {int reason; int vdev_id; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_1(struct ath10k *VAR_1, struct sk_buff *VAR_2,
          struct wmi_roam_ev_arg *VAR_3)
{
 struct wmi_roam_ev *VAR_4 = (void *)VAR_2->data;

 if (VAR_2->len < sizeof(*VAR_4))
  return -VAR_0;

 FUNC_0(VAR_2, sizeof(*VAR_4));
 VAR_3->vdev_id = VAR_4->vdev_id;
 VAR_3->reason = VAR_4->reason;

 return 0;
}
