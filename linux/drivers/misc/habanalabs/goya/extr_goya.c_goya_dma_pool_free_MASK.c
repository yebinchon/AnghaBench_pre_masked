
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hl_device {int dma_pool; } ;
typedef scalar_t__ dma_addr_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,void*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct hl_device *VAR_1, void *VAR_2,
    dma_addr_t VAR_3)
{

 dma_addr_t VAR_4 = VAR_3 - VAR_0;

 FUNC_0(VAR_1->dma_pool, VAR_2, VAR_4);
}
