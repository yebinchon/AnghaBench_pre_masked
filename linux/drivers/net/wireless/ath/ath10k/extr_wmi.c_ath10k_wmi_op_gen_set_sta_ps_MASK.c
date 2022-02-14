
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wmi_sta_powersave_param_cmd {void* param_value; void* param_id; void* vdev_id; } ;
struct sk_buff {scalar_t__ data; } ;
struct ath10k {int dummy; } ;
typedef enum wmi_sta_powersave_param { ____Placeholder_wmi_sta_powersave_param } wmi_sta_powersave_param ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct ath10k*,int ,char*,int,int,int) ;
 struct sk_buff* FUNC_3 (struct ath10k*,int) ;

__attribute__((used)) static struct sk_buff *
FUNC_4(struct ath10k *VAR_2, u32 VAR_3,
        enum wmi_sta_powersave_param VAR_4,
        u32 VAR_5)
{
 struct wmi_sta_powersave_param_cmd *VAR_6;
 struct sk_buff *VAR_7;

 VAR_7 = FUNC_3(VAR_2, sizeof(*VAR_6));
 if (!VAR_7)
  return FUNC_0(-VAR_1);

 VAR_6 = (struct wmi_sta_powersave_param_cmd *)VAR_7->data;
 VAR_6->vdev_id = FUNC_1(VAR_3);
 VAR_6->param_id = FUNC_1(VAR_4);
 VAR_6->param_value = FUNC_1(VAR_5);

 FUNC_2(VAR_2, VAR_0,
     "wmi sta ps param vdev_id 0x%x param %d value %d\n",
     VAR_3, VAR_4, VAR_5);
 return VAR_7;
}
