
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_pdev_bb_timing_cfg_cmd {void* bb_xpa_timing; void* bb_tx_timing; } ;
struct wmi_bb_timing_cfg_arg {int bb_xpa_timing; int bb_tx_timing; } ;
struct sk_buff {scalar_t__ data; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct ath10k*,int ,char*,int ,int ) ;
 struct sk_buff* FUNC_3 (struct ath10k*,int) ;

__attribute__((used)) static struct sk_buff *
FUNC_4(struct ath10k *VAR_2,
       const struct wmi_bb_timing_cfg_arg *VAR_3)
{
 struct wmi_pdev_bb_timing_cfg_cmd *VAR_4;
 struct sk_buff *VAR_5;

 VAR_5 = FUNC_3(VAR_2, sizeof(*VAR_4));
 if (!VAR_5)
  return FUNC_0(-VAR_1);

 VAR_4 = (struct wmi_pdev_bb_timing_cfg_cmd *)VAR_5->data;
 VAR_4->bb_tx_timing = FUNC_1(VAR_3->bb_tx_timing);
 VAR_4->bb_xpa_timing = FUNC_1(VAR_3->bb_xpa_timing);

 FUNC_2(VAR_2, VAR_0,
     "wmi pdev bb_tx_timing 0x%x bb_xpa_timing 0x%x\n",
     VAR_3->bb_tx_timing, VAR_3->bb_xpa_timing);
 return VAR_5;
}
