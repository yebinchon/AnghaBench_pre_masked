
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wmi_pdev_set_quiet_cmd {void* enabled; void* next_start; void* duration; void* period; } ;
struct sk_buff {scalar_t__ data; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct ath10k*,int ,char*,int ,int ,int ) ;
 struct sk_buff* FUNC_3 (struct ath10k*,int) ;

__attribute__((used)) static struct sk_buff *
FUNC_4(struct ath10k *VAR_2, u32 VAR_3,
          u32 VAR_4, u32 VAR_5,
          u32 VAR_6)
{
 struct wmi_pdev_set_quiet_cmd *VAR_7;
 struct sk_buff *VAR_8;

 VAR_8 = FUNC_3(VAR_2, sizeof(*VAR_7));
 if (!VAR_8)
  return FUNC_0(-VAR_1);

 VAR_7 = (struct wmi_pdev_set_quiet_cmd *)VAR_8->data;
 VAR_7->period = FUNC_1(VAR_3);
 VAR_7->duration = FUNC_1(VAR_4);
 VAR_7->next_start = FUNC_1(VAR_5);
 VAR_7->enabled = FUNC_1(VAR_6);

 FUNC_2(VAR_2, VAR_0,
     "wmi quiet param: period %u duration %u enabled %d\n",
     VAR_3, VAR_4, VAR_6);
 return VAR_8;
}
