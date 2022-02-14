
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_radar_found_info {void* sidx_max; void* sidx_min; void* width_max; void* width_min; void* pri_max; void* pri_min; } ;
struct sk_buff {scalar_t__ data; } ;
struct ath10k_radar_found_info {int sidx_max; int sidx_min; int width_max; int width_min; int pri_max; int pri_min; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct ath10k*,int ,char*,int ,int ,int ,int ,int ,int ) ;
 struct sk_buff* FUNC_3 (struct ath10k*,int) ;

__attribute__((used)) static struct sk_buff *
FUNC_4(struct ath10k *VAR_2,
    const struct ath10k_radar_found_info *VAR_3)
{
 struct wmi_radar_found_info *VAR_4;
 struct sk_buff *VAR_5;

 VAR_5 = FUNC_3(VAR_2, sizeof(*VAR_4));
 if (!VAR_5)
  return FUNC_0(-VAR_1);

 VAR_4 = (struct wmi_radar_found_info *)VAR_5->data;
 VAR_4->pri_min = FUNC_1(VAR_3->pri_min);
 VAR_4->pri_max = FUNC_1(VAR_3->pri_max);
 VAR_4->width_min = FUNC_1(VAR_3->width_min);
 VAR_4->width_max = FUNC_1(VAR_3->width_max);
 VAR_4->sidx_min = FUNC_1(VAR_3->sidx_min);
 VAR_4->sidx_max = FUNC_1(VAR_3->sidx_max);

 FUNC_2(VAR_2, VAR_0,
     "wmi radar found pri_min %d pri_max %d width_min %d width_max %d sidx_min %d sidx_max %d\n",
     VAR_3->pri_min, VAR_3->pri_max, VAR_3->width_min,
     VAR_3->width_max, VAR_3->sidx_min, VAR_3->sidx_max);
 return VAR_5;
}
