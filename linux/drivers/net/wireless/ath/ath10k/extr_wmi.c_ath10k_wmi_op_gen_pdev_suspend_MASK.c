
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wmi_pdev_suspend_cmd {int suspend_opt; } ;
struct sk_buff {scalar_t__ data; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct sk_buff* FUNC_2 (struct ath10k*,int) ;

__attribute__((used)) static struct sk_buff *
FUNC_3(struct ath10k *VAR_1, u32 VAR_2)
{
 struct wmi_pdev_suspend_cmd *VAR_3;
 struct sk_buff *VAR_4;

 VAR_4 = FUNC_2(VAR_1, sizeof(*VAR_3));
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 VAR_3 = (struct wmi_pdev_suspend_cmd *)VAR_4->data;
 VAR_3->suspend_opt = FUNC_1(VAR_2);

 return VAR_4;
}
