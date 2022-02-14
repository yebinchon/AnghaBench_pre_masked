
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct ath10k_ahb {void* rtc_clk; void* ref_clk; void* cmd_clk; TYPE_1__* pdev; } ;
struct ath10k {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 struct ath10k_ahb* FUNC_2 (struct ath10k*) ;
 int FUNC_3 (struct ath10k*,char*,int) ;
 void* FUNC_4 (struct device*,char*) ;

__attribute__((used)) static int FUNC_5(struct ath10k *VAR_1)
{
 struct ath10k_ahb *VAR_2 = FUNC_2(VAR_1);
 struct device *VAR_3;

 VAR_3 = &VAR_2->pdev->dev;

 VAR_2->cmd_clk = FUNC_4(VAR_3, "wifi_wcss_cmd");
 if (FUNC_0(VAR_2->cmd_clk)) {
  FUNC_3(VAR_1, "failed to get cmd clk: %ld\n",
      FUNC_1(VAR_2->cmd_clk));
  return VAR_2->cmd_clk ? FUNC_1(VAR_2->cmd_clk) : -VAR_0;
 }

 VAR_2->ref_clk = FUNC_4(VAR_3, "wifi_wcss_ref");
 if (FUNC_0(VAR_2->ref_clk)) {
  FUNC_3(VAR_1, "failed to get ref clk: %ld\n",
      FUNC_1(VAR_2->ref_clk));
  return VAR_2->ref_clk ? FUNC_1(VAR_2->ref_clk) : -VAR_0;
 }

 VAR_2->rtc_clk = FUNC_4(VAR_3, "wifi_wcss_rtc");
 if (FUNC_0(VAR_2->rtc_clk)) {
  FUNC_3(VAR_1, "failed to get rtc clk: %ld\n",
      FUNC_1(VAR_2->rtc_clk));
  return VAR_2->rtc_clk ? FUNC_1(VAR_2->rtc_clk) : -VAR_0;
 }

 return 0;
}
