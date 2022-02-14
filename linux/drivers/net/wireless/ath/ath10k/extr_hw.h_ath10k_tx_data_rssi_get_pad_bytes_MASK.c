
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct htt_resp {int dummy; } ;
struct ath10k_hw_params {TYPE_1__* hw_ops; } ;
struct TYPE_2__ {int (* tx_data_rssi_pad_bytes ) (struct htt_resp*) ;} ;


 int FUNC_0 (struct htt_resp*) ;

__attribute__((used)) static inline int
FUNC_1(struct ath10k_hw_params *VAR_0,
      struct htt_resp *VAR_1)
{
 if (VAR_0->hw_ops->tx_data_rssi_pad_bytes)
  return VAR_0->hw_ops->tx_data_rssi_pad_bytes(VAR_1);
 return 0;
}
