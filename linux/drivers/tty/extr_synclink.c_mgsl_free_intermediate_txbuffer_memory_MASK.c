
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mgsl_struct {int num_tx_holding_buffers; scalar_t__ tx_holding_count; scalar_t__ put_tx_holding_index; scalar_t__ get_tx_holding_index; TYPE_1__* tx_holding_buffers; } ;
struct TYPE_2__ {int * buffer; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct mgsl_struct *VAR_0)
{
 int VAR_1;

 for ( VAR_1=0; VAR_1<VAR_0->num_tx_holding_buffers; ++VAR_1 ) {
  FUNC_0(VAR_0->tx_holding_buffers[VAR_1].buffer);
  VAR_0->tx_holding_buffers[VAR_1].buffer = ((void*)0);
 }

 VAR_0->get_tx_holding_index = 0;
 VAR_0->put_tx_holding_index = 0;
 VAR_0->tx_holding_count = 0;

}
