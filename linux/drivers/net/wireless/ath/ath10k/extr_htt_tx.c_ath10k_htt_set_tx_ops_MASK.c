
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ath10k_htt {int * tx_ops; struct ath10k* ar; } ;
struct TYPE_4__ {scalar_t__ target_64bit; } ;
struct TYPE_3__ {scalar_t__ dev_type; } ;
struct ath10k {TYPE_2__ hw_params; TYPE_1__ bus_param; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_0(struct ath10k_htt *VAR_4)
{
 struct ath10k *VAR_5 = VAR_4->ar;

 if (VAR_5->bus_param.dev_type == VAR_0)
  VAR_4->tx_ops = &VAR_3;
 else if (VAR_5->hw_params.target_64bit)
  VAR_4->tx_ops = &VAR_2;
 else
  VAR_4->tx_ops = &VAR_1;
}
