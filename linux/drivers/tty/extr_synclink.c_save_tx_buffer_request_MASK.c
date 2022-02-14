
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tx_holding_buffer {unsigned int buffer_size; int buffer; } ;
struct mgsl_struct {size_t tx_holding_count; size_t num_tx_holding_buffers; size_t put_tx_holding_index; struct tx_holding_buffer* tx_holding_buffers; } ;


 int FUNC_0 (int ,char const*,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct mgsl_struct *VAR_0,const char *VAR_1, unsigned int VAR_2)
{
 struct tx_holding_buffer *VAR_3;

 if ( VAR_0->tx_holding_count >= VAR_0->num_tx_holding_buffers ) {
  return 0;
 }

 VAR_3 = &VAR_0->tx_holding_buffers[VAR_0->put_tx_holding_index];
 VAR_3->buffer_size = VAR_2;
 FUNC_0( VAR_3->buffer, VAR_1, VAR_2);

 ++VAR_0->tx_holding_count;
 if ( ++VAR_0->put_tx_holding_index >= VAR_0->num_tx_holding_buffers)
  VAR_0->put_tx_holding_index=0;

 return 1;
}
