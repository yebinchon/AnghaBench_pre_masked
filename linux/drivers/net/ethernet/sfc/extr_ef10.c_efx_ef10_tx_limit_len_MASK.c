
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_tx_queue {int dummy; } ;
typedef unsigned int dma_addr_t ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static unsigned int FUNC_1(struct efx_tx_queue *VAR_2,
       dma_addr_t VAR_3, unsigned int VAR_4)
{
 if (VAR_4 > VAR_0) {




  dma_addr_t VAR_5 = VAR_3 + VAR_0;

  FUNC_0(VAR_0 < VAR_1);
  VAR_4 = (VAR_5 & (~(VAR_1 - 1))) - VAR_3;
 }

 return VAR_4;
}
