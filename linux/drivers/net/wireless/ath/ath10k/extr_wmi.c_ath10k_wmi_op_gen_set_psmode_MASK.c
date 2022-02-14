
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wmi_sta_powersave_mode_cmd {void* sta_ps_mode; void* vdev_id; } ;
struct sk_buff {scalar_t__ data; } ;
struct ath10k {int dummy; } ;
typedef enum wmi_sta_ps_mode { ____Placeholder_wmi_sta_ps_mode } wmi_sta_ps_mode ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct ath10k*,int ,char*,int,int) ;
 struct sk_buff* FUNC_3 (struct ath10k*,int) ;

__attribute__((used)) static struct sk_buff *
FUNC_4(struct ath10k *VAR_2, u32 VAR_3,
        enum wmi_sta_ps_mode VAR_4)
{
 struct wmi_sta_powersave_mode_cmd *VAR_5;
 struct sk_buff *VAR_6;

 VAR_6 = FUNC_3(VAR_2, sizeof(*VAR_5));
 if (!VAR_6)
  return FUNC_0(-VAR_1);

 VAR_5 = (struct wmi_sta_powersave_mode_cmd *)VAR_6->data;
 VAR_5->vdev_id = FUNC_1(VAR_3);
 VAR_5->sta_ps_mode = FUNC_1(VAR_4);

 FUNC_2(VAR_2, VAR_0,
     "wmi set powersave id 0x%x mode %d\n",
     VAR_3, VAR_4);
 return VAR_6;
}
