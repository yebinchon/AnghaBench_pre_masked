
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_iommu {int dummy; } ;
struct vfio_dma {unsigned long vaddr; int iommu_mapped; scalar_t__ size; int prot; scalar_t__ iova; } ;
typedef scalar_t__ dma_addr_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (struct vfio_iommu*,scalar_t__,unsigned long,long,int ) ;
 long FUNC_3 (struct vfio_dma*,scalar_t__,size_t,unsigned long*,unsigned long) ;
 int FUNC_4 (struct vfio_iommu*,struct vfio_dma*) ;
 int FUNC_5 (struct vfio_dma*,scalar_t__,unsigned long,long,int) ;

__attribute__((used)) static int FUNC_6(struct vfio_iommu *VAR_2, struct vfio_dma *VAR_3,
       size_t VAR_4)
{
 dma_addr_t VAR_5 = VAR_3->iova;
 unsigned long VAR_6 = VAR_3->vaddr;
 size_t VAR_7 = VAR_4;
 long VAR_8;
 unsigned long VAR_9, VAR_10 = FUNC_1(VAR_1) >> VAR_0;
 int VAR_11 = 0;

 while (VAR_7) {

  VAR_8 = FUNC_3(VAR_3, VAR_6 + VAR_3->size,
           VAR_7 >> VAR_0, &VAR_9, VAR_10);
  if (VAR_8 <= 0) {
   FUNC_0(!VAR_8);
   VAR_11 = (int)VAR_8;
   break;
  }


  VAR_11 = FUNC_2(VAR_2, VAR_5 + VAR_3->size, VAR_9, VAR_8,
         VAR_3->prot);
  if (VAR_11) {
   FUNC_5(VAR_3, VAR_5 + VAR_3->size, VAR_9,
      VAR_8, 1);
   break;
  }

  VAR_7 -= VAR_8 << VAR_0;
  VAR_3->size += VAR_8 << VAR_0;
 }

 VAR_3->iommu_mapped = 1;

 if (VAR_11)
  FUNC_4(VAR_2, VAR_3);

 return VAR_11;
}
