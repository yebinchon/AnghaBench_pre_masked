
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_regions {size_t iova; size_t len; int list; int phys; } ;
struct vfio_domain {int domain; } ;
struct vfio_dma {int dummy; } ;
struct list_head {int dummy; } ;
struct iommu_iotlb_gather {int dummy; } ;
typedef int phys_addr_t ;
typedef size_t dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int ,size_t,size_t,struct iommu_iotlb_gather*) ;
 int FUNC_1 (struct vfio_regions*) ;
 struct vfio_regions* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,struct list_head*) ;
 scalar_t__ FUNC_4 (struct vfio_dma*,struct vfio_domain*,struct list_head*,struct iommu_iotlb_gather*) ;

__attribute__((used)) static size_t FUNC_5(struct vfio_domain *VAR_2,
          struct vfio_dma *VAR_3, dma_addr_t *VAR_4,
          size_t VAR_5, phys_addr_t VAR_6, long *VAR_7,
          struct list_head *VAR_8,
          int *VAR_9,
          struct iommu_iotlb_gather *VAR_10)
{
 size_t VAR_11 = 0;
 struct vfio_regions *VAR_12 = FUNC_2(sizeof(*VAR_12), VAR_0);

 if (VAR_12) {
  VAR_11 = FUNC_0(VAR_2->domain, *VAR_4, VAR_5,
         VAR_10);

  if (!VAR_11) {
   FUNC_1(VAR_12);
  } else {
   VAR_12->iova = *VAR_4;
   VAR_12->phys = VAR_6;
   VAR_12->len = VAR_11;
   FUNC_3(&VAR_12->list, VAR_8);

   *VAR_4 += VAR_11;
   (*VAR_9)++;
  }
 }





 if (*VAR_9 >= VAR_1 || !VAR_11) {
  *VAR_7 += FUNC_4(VAR_3, VAR_2, VAR_8,
          VAR_10);
  *VAR_9 = 0;
 }

 return VAR_11;
}
