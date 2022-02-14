
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct vfio_iommu_type1_dma_map {size_t iova; unsigned long vaddr; size_t size; int flags; } ;
struct vfio_iommu {int lock; int dma_avail; } ;
struct vfio_dma {size_t iova; unsigned long vaddr; int prot; size_t size; int pfn_list; int lock_cap; int task; } ;
typedef size_t dma_addr_t ;
struct TYPE_2__ {int group_leader; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct vfio_iommu*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 TYPE_1__* VAR_12 ;
 int FUNC_4 (int ) ;
 struct vfio_dma* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (struct vfio_iommu*,size_t,size_t) ;
 int FUNC_9 (struct vfio_iommu*,size_t,size_t) ;
 int FUNC_10 (struct vfio_iommu*,struct vfio_dma*) ;
 int FUNC_11 (struct vfio_iommu*) ;
 int FUNC_12 (struct vfio_iommu*,struct vfio_dma*,size_t) ;

__attribute__((used)) static int FUNC_13(struct vfio_iommu *VAR_13,
      struct vfio_iommu_type1_dma_map *VAR_14)
{
 dma_addr_t VAR_15 = VAR_14->iova;
 unsigned long VAR_16 = VAR_14->vaddr;
 size_t VAR_17 = VAR_14->size;
 int VAR_18 = 0, VAR_19 = 0;
 uint64_t VAR_20;
 struct vfio_dma *VAR_21;


 if (VAR_14->size != VAR_17 || VAR_14->vaddr != VAR_16 || VAR_14->iova != VAR_15)
  return -VAR_2;

 VAR_20 = ((uint64_t)1 << FUNC_2(FUNC_11(VAR_13))) - 1;

 FUNC_1(VAR_20 & VAR_8);


 if (VAR_14->flags & VAR_11)
  VAR_19 |= VAR_7;
 if (VAR_14->flags & VAR_10)
  VAR_19 |= VAR_6;

 if (!VAR_19 || !VAR_17 || (VAR_17 | VAR_15 | VAR_16) & VAR_20)
  return -VAR_2;


 if (VAR_15 + VAR_17 - 1 < VAR_15 || VAR_16 + VAR_17 - 1 < VAR_16)
  return -VAR_2;

 FUNC_6(&VAR_13->lock);

 if (FUNC_8(VAR_13, VAR_15, VAR_17)) {
  VAR_18 = -VAR_1;
  goto out_unlock;
 }

 if (!VAR_13->dma_avail) {
  VAR_18 = -VAR_4;
  goto out_unlock;
 }

 if (!FUNC_9(VAR_13, VAR_15, VAR_15 + VAR_17 - 1)) {
  VAR_18 = -VAR_2;
  goto out_unlock;
 }

 VAR_21 = FUNC_5(sizeof(*VAR_21), VAR_5);
 if (!VAR_21) {
  VAR_18 = -VAR_3;
  goto out_unlock;
 }

 VAR_13->dma_avail--;
 VAR_21->iova = VAR_15;
 VAR_21->vaddr = VAR_16;
 VAR_21->prot = VAR_19;
 FUNC_4(VAR_12->group_leader);
 VAR_21->task = VAR_12->group_leader;
 VAR_21->lock_cap = FUNC_3(VAR_0);

 VAR_21->pfn_list = VAR_9;


 FUNC_10(VAR_13, VAR_21);


 if (!FUNC_0(VAR_13))
  VAR_21->size = VAR_17;
 else
  VAR_18 = FUNC_12(VAR_13, VAR_21, VAR_17);

out_unlock:
 FUNC_7(&VAR_13->lock);
 return VAR_18;
}
