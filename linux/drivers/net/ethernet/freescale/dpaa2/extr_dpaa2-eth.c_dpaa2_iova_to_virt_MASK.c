
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_domain {int dummy; } ;
typedef int phys_addr_t ;
typedef int dma_addr_t ;


 int FUNC_0 (struct iommu_domain*,int ) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static void *FUNC_2(struct iommu_domain *VAR_0,
    dma_addr_t VAR_1)
{
 phys_addr_t VAR_2;

 VAR_2 = VAR_0 ? FUNC_0(VAR_0, VAR_1) : VAR_1;

 return FUNC_1(VAR_2);
}
