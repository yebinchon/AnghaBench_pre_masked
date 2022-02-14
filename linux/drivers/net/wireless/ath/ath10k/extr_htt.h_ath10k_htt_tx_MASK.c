
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ath10k_htt {TYPE_1__* tx_ops; } ;
typedef enum ath10k_hw_txrx_mode { ____Placeholder_ath10k_hw_txrx_mode } ath10k_hw_txrx_mode ;
struct TYPE_2__ {int (* htt_tx ) (struct ath10k_htt*,int,struct sk_buff*) ;} ;


 int FUNC_0 (struct ath10k_htt*,int,struct sk_buff*) ;

__attribute__((used)) static inline int FUNC_1(struct ath10k_htt *VAR_0,
    enum ath10k_hw_txrx_mode VAR_1,
    struct sk_buff *VAR_2)
{
 return VAR_0->tx_ops->htt_tx(VAR_0, VAR_1, VAR_2);
}
