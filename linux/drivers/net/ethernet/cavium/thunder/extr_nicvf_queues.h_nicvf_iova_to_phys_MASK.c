
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct nicvf {scalar_t__ iommu_domain; } ;
typedef int dma_addr_t ;


 int FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static inline u64 FUNC_1(struct nicvf *VAR_0, dma_addr_t VAR_1)
{

 if (VAR_0->iommu_domain)
  return FUNC_0(VAR_0->iommu_domain, VAR_1);
 return VAR_1;
}
