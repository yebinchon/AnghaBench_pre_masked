
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct wmi_vdev_set_param_cmd {void* param_value; void* param_id; void* vdev_id; } ;
struct sk_buff {scalar_t__ data; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct ath10k*,int ,char*,scalar_t__,...) ;
 struct sk_buff* FUNC_3 (struct ath10k*,int) ;

__attribute__((used)) static struct sk_buff *
FUNC_4(struct ath10k *VAR_4, u32 VAR_5,
     u32 VAR_6, u32 VAR_7)
{
 struct wmi_vdev_set_param_cmd *VAR_8;
 struct sk_buff *VAR_9;

 if (VAR_6 == VAR_3) {
  FUNC_2(VAR_4, VAR_0,
      "vdev param %d not supported by firmware\n",
       VAR_6);
  return FUNC_0(-VAR_2);
 }

 VAR_9 = FUNC_3(VAR_4, sizeof(*VAR_8));
 if (!VAR_9)
  return FUNC_0(-VAR_1);

 VAR_8 = (struct wmi_vdev_set_param_cmd *)VAR_9->data;
 VAR_8->vdev_id = FUNC_1(VAR_5);
 VAR_8->param_id = FUNC_1(VAR_6);
 VAR_8->param_value = FUNC_1(VAR_7);

 FUNC_2(VAR_4, VAR_0,
     "wmi vdev id 0x%x set param %d value %d\n",
     VAR_5, VAR_6, VAR_7);
 return VAR_9;
}
