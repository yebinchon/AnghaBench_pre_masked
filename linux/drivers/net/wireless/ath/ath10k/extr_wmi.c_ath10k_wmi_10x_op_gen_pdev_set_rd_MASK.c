
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wmi_pdev_set_regdomain_cmd_10x {void* dfs_domain; void* conformance_test_limit_5G; void* conformance_test_limit_2G; void* reg_domain_5G; void* reg_domain_2G; void* reg_domain; } ;
struct sk_buff {scalar_t__ data; } ;
struct ath10k {int dummy; } ;
typedef enum wmi_dfs_region { ____Placeholder_wmi_dfs_region } wmi_dfs_region ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct ath10k*,int ,char*,int,int,int,int,int,int) ;
 struct sk_buff* FUNC_3 (struct ath10k*,int) ;

__attribute__((used)) static struct sk_buff *
FUNC_4(struct ath10k *VAR_2, u16 VAR_3, u16 VAR_4, u16
      VAR_5, u16 VAR_6, u16 VAR_7,
      enum wmi_dfs_region VAR_8)
{
 struct wmi_pdev_set_regdomain_cmd_10x *VAR_9;
 struct sk_buff *VAR_10;

 VAR_10 = FUNC_3(VAR_2, sizeof(*VAR_9));
 if (!VAR_10)
  return FUNC_0(-VAR_1);

 VAR_9 = (struct wmi_pdev_set_regdomain_cmd_10x *)VAR_10->data;
 VAR_9->reg_domain = FUNC_1(VAR_3);
 VAR_9->reg_domain_2G = FUNC_1(VAR_4);
 VAR_9->reg_domain_5G = FUNC_1(VAR_5);
 VAR_9->conformance_test_limit_2G = FUNC_1(VAR_6);
 VAR_9->conformance_test_limit_5G = FUNC_1(VAR_7);
 VAR_9->dfs_domain = FUNC_1(VAR_8);

 FUNC_2(VAR_2, VAR_0,
     "wmi pdev regdomain rd %x rd2g %x rd5g %x ctl2g %x ctl5g %x dfs_region %x\n",
     VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
 return VAR_10;
}
