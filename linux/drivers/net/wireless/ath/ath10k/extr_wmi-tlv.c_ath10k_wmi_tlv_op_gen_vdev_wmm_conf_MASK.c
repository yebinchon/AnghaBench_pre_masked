
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct wmi_wmm_params_all_arg {int ac_vo; int ac_vi; int ac_bk; int ac_be; } ;
struct wmi_tlv_vdev_set_wmm_cmd {TYPE_1__* vdev_wmm_params; int vdev_id; } ;
struct wmi_tlv {scalar_t__ value; void* len; void* tag; } ;
struct sk_buff {scalar_t__ data; } ;
struct ath10k {int dummy; } ;
struct TYPE_2__ {int params; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int ) ;
 int VAR_2 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ath10k*,int ,char*) ;
 struct sk_buff* FUNC_4 (struct ath10k*,size_t) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static struct sk_buff *
FUNC_6(struct ath10k *VAR_3, u32 VAR_4,
        const struct wmi_wmm_params_all_arg *VAR_5)
{
 struct wmi_tlv_vdev_set_wmm_cmd *VAR_6;
 struct wmi_tlv *VAR_7;
 struct sk_buff *VAR_8;
 size_t VAR_9;
 void *VAR_10;

 VAR_9 = sizeof(*VAR_7) + sizeof(*VAR_6);
 VAR_8 = FUNC_4(VAR_3, VAR_9);
 if (!VAR_8)
  return FUNC_0(-VAR_1);

 VAR_10 = (void *)VAR_8->data;
 VAR_7 = VAR_10;
 VAR_7->tag = FUNC_1(VAR_2);
 VAR_7->len = FUNC_1(sizeof(*VAR_6));
 VAR_6 = (void *)VAR_7->value;
 VAR_6->vdev_id = FUNC_2(VAR_4);

 FUNC_5(&VAR_6->vdev_wmm_params[0].params, &VAR_5->ac_be);
 FUNC_5(&VAR_6->vdev_wmm_params[1].params, &VAR_5->ac_bk);
 FUNC_5(&VAR_6->vdev_wmm_params[2].params, &VAR_5->ac_vi);
 FUNC_5(&VAR_6->vdev_wmm_params[3].params, &VAR_5->ac_vo);

 FUNC_3(VAR_3, VAR_0, "wmi tlv vdev wmm conf\n");
 return VAR_8;
}
