
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_htt {int tx_mem_allocated; } ;


 int FUNC_0 (struct ath10k_htt*) ;
 int FUNC_1 (struct ath10k_htt*) ;
 int FUNC_2 (struct ath10k_htt*) ;
 int FUNC_3 (struct ath10k_htt*) ;

void FUNC_4(struct ath10k_htt *VAR_0)
{
 if (!VAR_0->tx_mem_allocated)
  return;

 FUNC_1(VAR_0);
 FUNC_3(VAR_0);
 FUNC_0(VAR_0);
 FUNC_2(VAR_0);
 VAR_0->tx_mem_allocated = 0;
}
