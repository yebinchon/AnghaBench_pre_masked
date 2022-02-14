
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_tx_queue {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int,unsigned int) ;

unsigned int FUNC_1(struct efx_tx_queue *VAR_1,
        dma_addr_t VAR_2, unsigned int VAR_3)
{

 unsigned int VAR_4 = (~VAR_2 & (VAR_0 - 1)) + 1;

 VAR_3 = FUNC_0(VAR_4, VAR_3);

 return VAR_3;
}
