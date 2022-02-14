
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_ahb {int * cpu_init_rst; int * radio_srif_rst; int * radio_warm_rst; int * radio_cold_rst; int * core_cold_rst; } ;
struct ath10k {int dummy; } ;


 struct ath10k_ahb* FUNC_0 (struct ath10k*) ;

__attribute__((used)) static void FUNC_1(struct ath10k *VAR_0)
{
 struct ath10k_ahb *VAR_1 = FUNC_0(VAR_0);

 VAR_1->core_cold_rst = ((void*)0);
 VAR_1->radio_cold_rst = ((void*)0);
 VAR_1->radio_warm_rst = ((void*)0);
 VAR_1->radio_srif_rst = ((void*)0);
 VAR_1->cpu_init_rst = ((void*)0);
}
