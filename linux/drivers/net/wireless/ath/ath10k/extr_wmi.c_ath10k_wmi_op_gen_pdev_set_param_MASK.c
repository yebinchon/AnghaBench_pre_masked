
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct wmi_pdev_set_param_cmd {void* param_value; void* param_id; } ;
struct sk_buff {scalar_t__ data; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct ath10k*,int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct ath10k*,char*,scalar_t__) ;
 struct sk_buff* FUNC_4 (struct ath10k*,int) ;

__attribute__((used)) static struct sk_buff *
FUNC_5(struct ath10k *VAR_4, u32 VAR_5, u32 VAR_6)
{
 struct wmi_pdev_set_param_cmd *VAR_7;
 struct sk_buff *VAR_8;

 if (VAR_5 == VAR_3) {
  FUNC_3(VAR_4, "pdev param %d not supported by firmware\n",
       VAR_5);
  return FUNC_0(-VAR_2);
 }

 VAR_8 = FUNC_4(VAR_4, sizeof(*VAR_7));
 if (!VAR_8)
  return FUNC_0(-VAR_1);

 VAR_7 = (struct wmi_pdev_set_param_cmd *)VAR_8->data;
 VAR_7->param_id = FUNC_1(VAR_5);
 VAR_7->param_value = FUNC_1(VAR_6);

 FUNC_2(VAR_4, VAR_0, "wmi pdev set param %d value %d\n",
     VAR_5, VAR_6);
 return VAR_8;
}
