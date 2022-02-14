
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct htt_rx_desc {int dummy; } ;
struct ath10k_hw_params {TYPE_1__* hw_ops; } ;
struct TYPE_2__ {int (* rx_desc_get_msdu_limit_error ) (struct htt_rx_desc*) ;} ;


 int FUNC_0 (struct htt_rx_desc*) ;

__attribute__((used)) static inline bool
FUNC_1(struct ath10k_hw_params *VAR_0,
    struct htt_rx_desc *VAR_1)
{
 if (VAR_0->hw_ops->rx_desc_get_msdu_limit_error)
  return VAR_0->hw_ops->rx_desc_get_msdu_limit_error(VAR_1);
 return 0;
}
