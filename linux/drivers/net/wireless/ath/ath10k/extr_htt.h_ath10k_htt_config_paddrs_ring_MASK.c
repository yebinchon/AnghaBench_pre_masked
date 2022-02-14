
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath10k_htt {TYPE_1__* rx_ops; } ;
struct TYPE_2__ {int (* htt_config_paddrs_ring ) (struct ath10k_htt*,void*) ;} ;


 int FUNC_0 (struct ath10k_htt*,void*) ;

__attribute__((used)) static inline void FUNC_1(struct ath10k_htt *VAR_0,
       void *VAR_1)
{
 if (VAR_0->rx_ops->htt_config_paddrs_ring)
  VAR_0->rx_ops->htt_config_paddrs_ring(VAR_0, VAR_1);
}
