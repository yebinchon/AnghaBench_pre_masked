
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath10k_htt {TYPE_1__* tx_ops; } ;
struct TYPE_2__ {int (* htt_send_rx_ring_cfg ) (struct ath10k_htt*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k_htt*) ;

__attribute__((used)) static inline int FUNC_1(struct ath10k_htt *VAR_1)
{
 if (!VAR_1->tx_ops->htt_send_rx_ring_cfg)
  return -VAR_0;

 return VAR_1->tx_ops->htt_send_rx_ring_cfg(VAR_1);
}
