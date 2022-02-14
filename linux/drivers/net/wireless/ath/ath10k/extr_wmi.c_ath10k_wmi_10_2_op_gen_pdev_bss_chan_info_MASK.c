
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_pdev_chan_info_req_cmd {int type; } ;
struct sk_buff {scalar_t__ data; } ;
struct ath10k {int dummy; } ;
typedef enum wmi_bss_survey_req_type { ____Placeholder_wmi_bss_survey_req_type } wmi_bss_survey_req_type ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ath10k*,int ,char*,int) ;
 struct sk_buff* FUNC_3 (struct ath10k*,int) ;

__attribute__((used)) static struct sk_buff *
FUNC_4(struct ath10k *VAR_2,
       enum wmi_bss_survey_req_type VAR_3)
{
 struct wmi_pdev_chan_info_req_cmd *VAR_4;
 struct sk_buff *VAR_5;

 VAR_5 = FUNC_3(VAR_2, sizeof(*VAR_4));
 if (!VAR_5)
  return FUNC_0(-VAR_1);

 VAR_4 = (struct wmi_pdev_chan_info_req_cmd *)VAR_5->data;
 VAR_4->type = FUNC_1(VAR_3);

 FUNC_2(VAR_2, VAR_0,
     "wmi pdev bss info request type %d\n", VAR_3);

 return VAR_5;
}
