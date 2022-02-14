
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hl_device {scalar_t__ cpu_accessible_dma_address; } ;
typedef scalar_t__ dma_addr_t ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (struct hl_device*,size_t,scalar_t__*) ;

void *FUNC_1(struct hl_device *VAR_1, size_t VAR_2,
     dma_addr_t *VAR_3)
{
 void *VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
 *VAR_3 = (*VAR_3) - VAR_1->cpu_accessible_dma_address +
   VAR_0;

 return VAR_4;
}
