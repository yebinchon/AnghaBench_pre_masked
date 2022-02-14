
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_iommu {int lock; int v2; } ;
struct vfio_dma {int dummy; } ;
typedef unsigned long dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vfio_iommu*) ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct vfio_dma* FUNC_3 (struct vfio_iommu*,unsigned long,int ) ;
 int FUNC_4 (struct vfio_dma*,unsigned long,int) ;

__attribute__((used)) static int FUNC_5(void *VAR_4,
     unsigned long *VAR_5,
     int VAR_6)
{
 struct vfio_iommu *VAR_7 = VAR_4;
 bool VAR_8;
 int VAR_9;

 if (!VAR_7 || !VAR_5)
  return -VAR_1;


 if (!VAR_7->v2)
  return -VAR_0;

 FUNC_1(&VAR_7->lock);

 VAR_8 = !FUNC_0(VAR_7);
 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
  struct vfio_dma *VAR_10;
  dma_addr_t VAR_11;

  VAR_11 = VAR_5[VAR_9] << VAR_2;
  VAR_10 = FUNC_3(VAR_7, VAR_11, VAR_3);
  if (!VAR_10)
   goto unpin_exit;
  FUNC_4(VAR_10, VAR_11, VAR_8);
 }

unpin_exit:
 FUNC_2(&VAR_7->lock);
 return VAR_9 > VAR_6 ? VAR_6 : (VAR_9 > 0 ? VAR_9 : -VAR_1);
}
