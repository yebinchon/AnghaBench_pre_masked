
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ath10k_wmi {TYPE_2__* cmd; TYPE_1__* ops; } ;
struct ath10k {struct ath10k_wmi wmi; } ;
typedef enum wmi_bss_survey_req_type { ____Placeholder_wmi_bss_survey_req_type } wmi_bss_survey_req_type ;
struct TYPE_4__ {int pdev_bss_chan_info_request_cmdid; } ;
struct TYPE_3__ {struct sk_buff* (* gen_pdev_bss_chan_info_req ) (struct ath10k*,int) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct ath10k*,struct sk_buff*,int ) ;
 struct sk_buff* FUNC_3 (struct ath10k*,int) ;

__attribute__((used)) static inline int
FUNC_4(struct ath10k *VAR_1,
          enum wmi_bss_survey_req_type VAR_2)
{
 struct ath10k_wmi *VAR_3 = &VAR_1->wmi;
 struct sk_buff *VAR_4;

 if (!VAR_3->ops->gen_pdev_bss_chan_info_req)
  return -VAR_0;

 VAR_4 = VAR_3->ops->gen_pdev_bss_chan_info_req(VAR_1, VAR_2);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 return FUNC_2(VAR_1, VAR_4,
       VAR_3->cmd->pdev_bss_chan_info_request_cmdid);
}
