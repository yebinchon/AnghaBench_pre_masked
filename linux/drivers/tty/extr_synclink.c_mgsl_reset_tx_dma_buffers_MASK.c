
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mgsl_struct {unsigned int tx_buffer_count; scalar_t__ tx_holding_count; scalar_t__ put_tx_holding_index; scalar_t__ get_tx_holding_index; scalar_t__ tx_dma_buffers_used; scalar_t__ start_tx_dma_buffer; scalar_t__ current_tx_buffer; TYPE_1__* tx_buffer_list; } ;
struct TYPE_2__ {int count; } ;



__attribute__((used)) static void FUNC_0( struct mgsl_struct *VAR_0 )
{
 unsigned int VAR_1;

 for ( VAR_1 = 0; VAR_1 < VAR_0->tx_buffer_count; VAR_1++ ) {
  *((unsigned long *)&(VAR_0->tx_buffer_list[VAR_1].count)) = 0;
 }

 VAR_0->current_tx_buffer = 0;
 VAR_0->start_tx_dma_buffer = 0;
 VAR_0->tx_dma_buffers_used = 0;

 VAR_0->get_tx_holding_index = 0;
 VAR_0->put_tx_holding_index = 0;
 VAR_0->tx_holding_count = 0;

}
