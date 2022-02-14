
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct vfio_iommu_type1_dma_unmap {int iova; int size; } ;
struct vfio_iommu {int lock; int notifier; scalar_t__ v2; } ;
struct vfio_dma {scalar_t__ iova; scalar_t__ size; int pfn_list; TYPE_1__* task; } ;
struct TYPE_4__ {scalar_t__ mm; } ;
struct TYPE_3__ {scalar_t__ mm; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,struct vfio_iommu_type1_dma_unmap*) ;
 TYPE_2__* VAR_4 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct vfio_dma* FUNC_7 (struct vfio_iommu*,int,int) ;
 int FUNC_8 (struct vfio_iommu*) ;
 int FUNC_9 (struct vfio_iommu*,struct vfio_dma*) ;

__attribute__((used)) static int FUNC_10(struct vfio_iommu *VAR_5,
        struct vfio_iommu_type1_dma_unmap *VAR_6)
{
 uint64_t VAR_7;
 struct vfio_dma *VAR_8, *VAR_9 = ((void*)0);
 size_t VAR_10 = 0;
 int VAR_11 = 0, VAR_12 = 0;

 VAR_7 = ((uint64_t)1 << FUNC_3(FUNC_8(VAR_5))) - 1;

 if (VAR_6->iova & VAR_7)
  return -VAR_0;
 if (!VAR_6->size || VAR_6->size & VAR_7)
  return -VAR_0;
 if (VAR_6->iova + VAR_6->size - 1 < VAR_6->iova ||
     VAR_6->size > VAR_2)
  return -VAR_0;

 FUNC_2(VAR_7 & VAR_1);
again:
 FUNC_5(&VAR_5->lock);
 if (VAR_5->v2) {
  VAR_8 = FUNC_7(VAR_5, VAR_6->iova, 1);
  if (VAR_8 && VAR_8->iova != VAR_6->iova) {
   VAR_11 = -VAR_0;
   goto unlock;
  }
  VAR_8 = FUNC_7(VAR_5, VAR_6->iova + VAR_6->size - 1, 0);
  if (VAR_8 && VAR_8->iova + VAR_8->size != VAR_6->iova + VAR_6->size) {
   VAR_11 = -VAR_0;
   goto unlock;
  }
 }

 while ((VAR_8 = FUNC_7(VAR_5, VAR_6->iova, VAR_6->size))) {
  if (!VAR_5->v2 && VAR_6->iova > VAR_8->iova)
   break;




  if (VAR_8->task->mm != VAR_4->mm)
   break;

  if (!FUNC_1(&VAR_8->pfn_list)) {
   struct vfio_iommu_type1_dma_unmap VAR_13;

   if (VAR_9 == VAR_8) {
    FUNC_0(++VAR_12 > 10);
   } else {
    VAR_9 = VAR_8;
    VAR_12 = 0;
   }

   VAR_13.iova = VAR_8->iova;
   VAR_13.size = VAR_8->size;







   FUNC_6(&VAR_5->lock);
   FUNC_4(&VAR_5->notifier,
          VAR_3,
          &VAR_13);
   goto again;
  }
  VAR_10 += VAR_8->size;
  FUNC_9(VAR_5, VAR_8);
 }

unlock:
 FUNC_6(&VAR_5->lock);


 VAR_6->size = VAR_10;

 return VAR_11;
}
