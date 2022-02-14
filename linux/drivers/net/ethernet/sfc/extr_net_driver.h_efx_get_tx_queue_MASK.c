
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efx_tx_queue {int dummy; } ;
struct efx_nic {unsigned int n_tx_channels; unsigned int tx_channel_offset; TYPE_1__** channel; } ;
struct TYPE_2__ {struct efx_tx_queue* tx_queue; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline struct efx_tx_queue *
FUNC_1(struct efx_nic *VAR_1, unsigned VAR_2, unsigned VAR_3)
{
 FUNC_0(VAR_2 >= VAR_1->n_tx_channels ||
      VAR_3 >= VAR_0);
 return &VAR_1->channel[VAR_1->tx_channel_offset + VAR_2]->tx_queue[VAR_3];
}
