
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sge {size_t jumbo_fl; TYPE_1__* freelQ; } ;
struct cpl_rx_data {int dummy; } ;
struct TYPE_2__ {unsigned int rx_buffer_size; unsigned int dma_offset; } ;



__attribute__((used)) static inline unsigned int FUNC_0(const struct sge *VAR_0)
{
 return VAR_0->freelQ[VAR_0->jumbo_fl].rx_buffer_size -
  VAR_0->freelQ[VAR_0->jumbo_fl].dma_offset -
  sizeof(struct cpl_rx_data);
}
