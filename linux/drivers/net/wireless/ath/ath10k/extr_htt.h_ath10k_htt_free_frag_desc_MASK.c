
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath10k_htt {TYPE_1__* tx_ops; } ;
struct TYPE_2__ {int (* htt_free_frag_desc ) (struct ath10k_htt*) ;} ;


 int FUNC_0 (struct ath10k_htt*) ;

__attribute__((used)) static inline void FUNC_1(struct ath10k_htt *VAR_0)
{
 if (VAR_0->tx_ops->htt_free_frag_desc)
  VAR_0->tx_ops->htt_free_frag_desc(VAR_0);
}
