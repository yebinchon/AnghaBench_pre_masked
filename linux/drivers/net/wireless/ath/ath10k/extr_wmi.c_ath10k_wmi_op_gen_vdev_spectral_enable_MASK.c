
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wmi_vdev_spectral_enable_cmd {void* enable_cmd; void* trigger_cmd; void* vdev_id; } ;
struct sk_buff {scalar_t__ data; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 struct sk_buff* FUNC_2 (struct ath10k*,int) ;

__attribute__((used)) static struct sk_buff *
FUNC_3(struct ath10k *VAR_1, u32 VAR_2,
           u32 VAR_3, u32 VAR_4)
{
 struct wmi_vdev_spectral_enable_cmd *VAR_5;
 struct sk_buff *VAR_6;

 VAR_6 = FUNC_2(VAR_1, sizeof(*VAR_5));
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 VAR_5 = (struct wmi_vdev_spectral_enable_cmd *)VAR_6->data;
 VAR_5->vdev_id = FUNC_1(VAR_2);
 VAR_5->trigger_cmd = FUNC_1(VAR_3);
 VAR_5->enable_cmd = FUNC_1(VAR_4);

 return VAR_6;
}
