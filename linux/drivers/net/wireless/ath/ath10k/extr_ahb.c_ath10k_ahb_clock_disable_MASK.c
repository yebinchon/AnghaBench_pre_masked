
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_ahb {int rtc_clk; int ref_clk; int cmd_clk; } ;
struct ath10k {int dummy; } ;


 struct ath10k_ahb* FUNC_0 (struct ath10k*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ath10k *VAR_0)
{
 struct ath10k_ahb *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1->cmd_clk);

 FUNC_1(VAR_1->ref_clk);

 FUNC_1(VAR_1->rtc_clk);
}
