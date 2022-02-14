
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wmi_pdev_set_adaptive_cca_params {void* cca_detect_margin; void* cca_detect_level; void* enable; } ;
struct sk_buff {scalar_t__ data; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct ath10k*,int ,char*,int ,int ,int ) ;
 struct sk_buff* FUNC_3 (struct ath10k*,int) ;

__attribute__((used)) static struct sk_buff *
FUNC_4(struct ath10k *VAR_2, u8 VAR_3,
        u32 VAR_4, u32 VAR_5)
{
 struct wmi_pdev_set_adaptive_cca_params *VAR_6;
 struct sk_buff *VAR_7;

 VAR_7 = FUNC_3(VAR_2, sizeof(*VAR_6));
 if (!VAR_7)
  return FUNC_0(-VAR_1);

 VAR_6 = (struct wmi_pdev_set_adaptive_cca_params *)VAR_7->data;
 VAR_6->enable = FUNC_1(VAR_3);
 VAR_6->cca_detect_level = FUNC_1(VAR_4);
 VAR_6->cca_detect_margin = FUNC_1(VAR_5);

 FUNC_2(VAR_2, VAR_0,
     "wmi pdev set adaptive cca params enable:%d detection level:%d detection margin:%d\n",
     VAR_3, VAR_4, VAR_5);
 return VAR_7;
}
