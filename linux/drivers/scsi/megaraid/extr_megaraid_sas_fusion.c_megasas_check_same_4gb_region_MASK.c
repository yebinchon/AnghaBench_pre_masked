
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct megasas_instance {TYPE_1__* pdev; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,unsigned long long,unsigned long long) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline bool FUNC_2
 (struct megasas_instance *VAR_0, dma_addr_t VAR_1, size_t VAR_2)
{
 dma_addr_t VAR_3;

 VAR_3 = VAR_1 + VAR_2;

 if (FUNC_1(VAR_1) != FUNC_1(VAR_3)) {
  FUNC_0(&VAR_0->pdev->dev,
   "Failed to get same 4GB boundary: start_addr: 0x%llx end_addr: 0x%llx\n",
   (unsigned long long)VAR_1,
   (unsigned long long)VAR_3);
  return 0;
 }

 return 1;
}
