
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct device {scalar_t__ coherent_dma_mask; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (struct device*,scalar_t__) ;

int FUNC_1(struct device *VAR_1, u64 VAR_2)
{




 VAR_2 = (dma_addr_t)VAR_2;

 if (!FUNC_0(VAR_1, VAR_2))
  return -VAR_0;

 VAR_1->coherent_dma_mask = VAR_2;
 return 0;
}
