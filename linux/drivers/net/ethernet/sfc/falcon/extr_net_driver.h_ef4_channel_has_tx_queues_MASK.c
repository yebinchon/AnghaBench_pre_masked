
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ef4_channel {scalar_t__ channel; TYPE_1__* efx; } ;
struct TYPE_2__ {scalar_t__ tx_channel_offset; scalar_t__ n_tx_channels; } ;



__attribute__((used)) static inline bool FUNC_0(struct ef4_channel *VAR_0)
{
 return VAR_0->channel - VAR_0->efx->tx_channel_offset <
  VAR_0->efx->n_tx_channels;
}
