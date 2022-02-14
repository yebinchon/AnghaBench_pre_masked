
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_4__ {TYPE_1__* pdev_param; } ;
struct ath10k {scalar_t__ state; TYPE_2__ wmi; void* cfg_rx_chainmask; void* cfg_tx_chainmask; int conf_mutex; } ;
struct TYPE_3__ {int rx_chain_mask; int tx_chain_mask; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ath10k*,void*,char*) ;
 int FUNC_1 (struct ath10k*) ;
 int FUNC_2 (struct ath10k*,char*,int,void*) ;
 int FUNC_3 (struct ath10k*,int ,void*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct ath10k *VAR_2, u32 VAR_3, u32 VAR_4)
{
 int VAR_5;

 FUNC_4(&VAR_2->conf_mutex);

 FUNC_0(VAR_2, VAR_3, "tx");
 FUNC_0(VAR_2, VAR_4, "rx");

 VAR_2->cfg_tx_chainmask = VAR_3;
 VAR_2->cfg_rx_chainmask = VAR_4;

 if ((VAR_2->state != VAR_0) &&
     (VAR_2->state != VAR_1))
  return 0;

 VAR_5 = FUNC_3(VAR_2, VAR_2->wmi.pdev_param->tx_chain_mask,
     VAR_3);
 if (VAR_5) {
  FUNC_2(VAR_2, "failed to set tx-chainmask: %d, req 0x%x\n",
       VAR_5, VAR_3);
  return VAR_5;
 }

 VAR_5 = FUNC_3(VAR_2, VAR_2->wmi.pdev_param->rx_chain_mask,
     VAR_4);
 if (VAR_5) {
  FUNC_2(VAR_2, "failed to set rx-chainmask: %d, req 0x%x\n",
       VAR_5, VAR_4);
  return VAR_5;
 }


 FUNC_1(VAR_2);

 return 0;
}
