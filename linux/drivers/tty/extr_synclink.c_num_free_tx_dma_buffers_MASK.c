
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mgsl_struct {int tx_buffer_count; int tx_dma_buffers_used; } ;



__attribute__((used)) static int FUNC_0(struct mgsl_struct *VAR_0)
{
 return VAR_0->tx_buffer_count - VAR_0->tx_dma_buffers_used;
}
