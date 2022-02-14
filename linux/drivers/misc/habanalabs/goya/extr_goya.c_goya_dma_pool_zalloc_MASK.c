
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hl_device {int dma_pool; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (int ,int ,int *) ;

__attribute__((used)) static void *FUNC_1(struct hl_device *VAR_2, size_t VAR_3,
     gfp_t VAR_4, dma_addr_t *VAR_5)
{
 void *VAR_6;

 if (VAR_3 > VAR_0)
  return ((void*)0);

 VAR_6 = FUNC_0(VAR_2->dma_pool, VAR_4, VAR_5);


 if (VAR_6)
  *VAR_5 += VAR_1;

 return VAR_6;
}
