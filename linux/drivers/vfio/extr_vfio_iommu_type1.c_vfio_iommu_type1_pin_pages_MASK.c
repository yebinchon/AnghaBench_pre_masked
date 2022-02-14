
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfio_pfn {unsigned long pfn; } ;
struct TYPE_2__ {int head; } ;
struct vfio_iommu {int lock; TYPE_1__ notifier; int v2; } ;
struct vfio_dma {int prot; unsigned long vaddr; unsigned long iova; } ;
typedef unsigned long dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vfio_iommu*) ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct vfio_dma*,unsigned long,unsigned long) ;
 struct vfio_dma* FUNC_4 (struct vfio_iommu*,unsigned long,int ) ;
 struct vfio_pfn* FUNC_5 (struct vfio_dma*,unsigned long) ;
 int FUNC_6 (struct vfio_dma*,unsigned long,unsigned long*,int) ;
 int FUNC_7 (struct vfio_dma*,unsigned long,int) ;

__attribute__((used)) static int FUNC_8(void *VAR_5,
          unsigned long *VAR_6,
          int VAR_7, int VAR_8,
          unsigned long *VAR_9)
{
 struct vfio_iommu *VAR_10 = VAR_5;
 int VAR_11, VAR_12, VAR_13;
 unsigned long VAR_14;
 struct vfio_dma *VAR_15;
 bool VAR_16;

 if (!VAR_10 || !VAR_6 || !VAR_9)
  return -VAR_1;


 if (!VAR_10->v2)
  return -VAR_0;

 FUNC_1(&VAR_10->lock);


 if (!VAR_10->notifier.head) {
  VAR_13 = -VAR_1;
  goto pin_done;
 }






 VAR_16 = !FUNC_0(VAR_10);

 for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++) {
  dma_addr_t VAR_17;
  struct vfio_pfn *VAR_18;

  VAR_17 = VAR_6[VAR_11] << VAR_3;
  VAR_15 = FUNC_4(VAR_10, VAR_17, VAR_4);
  if (!VAR_15) {
   VAR_13 = -VAR_1;
   goto pin_unwind;
  }

  if ((VAR_15->prot & VAR_8) != VAR_8) {
   VAR_13 = -VAR_2;
   goto pin_unwind;
  }

  VAR_18 = FUNC_5(VAR_15, VAR_17);
  if (VAR_18) {
   VAR_9[VAR_11] = VAR_18->pfn;
   continue;
  }

  VAR_14 = VAR_15->vaddr + VAR_17 - VAR_15->iova;
  VAR_13 = FUNC_6(VAR_15, VAR_14, &VAR_9[VAR_11],
          VAR_16);
  if (VAR_13)
   goto pin_unwind;

  VAR_13 = FUNC_3(VAR_15, VAR_17, VAR_9[VAR_11]);
  if (VAR_13) {
   FUNC_7(VAR_15, VAR_17, VAR_16);
   goto pin_unwind;
  }
 }

 VAR_13 = VAR_11;
 goto pin_done;

pin_unwind:
 VAR_9[VAR_11] = 0;
 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
  dma_addr_t VAR_19;

  VAR_19 = VAR_6[VAR_12] << VAR_3;
  VAR_15 = FUNC_4(VAR_10, VAR_19, VAR_4);
  FUNC_7(VAR_15, VAR_19, VAR_16);
  VAR_9[VAR_12] = 0;
 }
pin_done:
 FUNC_2(&VAR_10->lock);
 return VAR_13;
}
