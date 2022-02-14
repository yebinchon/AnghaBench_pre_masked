
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_ahb {int cmd_clk; int ref_clk; int rtc_clk; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 struct ath10k_ahb* FUNC_1 (struct ath10k*) ;
 int FUNC_2 (struct ath10k*,char*,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct ath10k *VAR_1)
{
 struct ath10k_ahb *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;

 if (FUNC_0(VAR_2->cmd_clk) ||
     FUNC_0(VAR_2->ref_clk) ||
     FUNC_0(VAR_2->rtc_clk)) {
  FUNC_2(VAR_1, "clock(s) is/are not initialized\n");
  VAR_3 = -VAR_0;
  goto out;
 }

 VAR_3 = FUNC_4(VAR_2->cmd_clk);
 if (VAR_3) {
  FUNC_2(VAR_1, "failed to enable cmd clk: %d\n", VAR_3);
  goto out;
 }

 VAR_3 = FUNC_4(VAR_2->ref_clk);
 if (VAR_3) {
  FUNC_2(VAR_1, "failed to enable ref clk: %d\n", VAR_3);
  goto err_cmd_clk_disable;
 }

 VAR_3 = FUNC_4(VAR_2->rtc_clk);
 if (VAR_3) {
  FUNC_2(VAR_1, "failed to enable rtc clk: %d\n", VAR_3);
  goto err_ref_clk_disable;
 }

 return 0;

err_ref_clk_disable:
 FUNC_3(VAR_2->ref_clk);

err_cmd_clk_disable:
 FUNC_3(VAR_2->cmd_clk);

out:
 return VAR_3;
}
