
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_bus_params {int dummy; } ;
struct ath10k {int register_work; int workqueue; struct ath10k_bus_params bus_param; } ;


 int FUNC_0 (int ,int *) ;

int FUNC_1(struct ath10k *VAR_0,
    const struct ath10k_bus_params *VAR_1)
{
 VAR_0->bus_param = *VAR_1;

 FUNC_0(VAR_0->workqueue, &VAR_0->register_work);

 return 0;
}
