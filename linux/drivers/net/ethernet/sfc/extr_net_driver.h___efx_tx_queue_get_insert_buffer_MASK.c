
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_tx_queue {struct efx_tx_buffer* buffer; } ;
struct efx_tx_buffer {int dummy; } ;


 size_t FUNC_0 (struct efx_tx_queue const*) ;

__attribute__((used)) static inline struct efx_tx_buffer *
FUNC_1(const struct efx_tx_queue *VAR_0)
{
 return &VAR_0->buffer[FUNC_0(VAR_0)];
}
