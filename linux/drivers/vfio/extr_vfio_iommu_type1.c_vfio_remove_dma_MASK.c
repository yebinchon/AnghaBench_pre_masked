
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_iommu {int dma_avail; } ;
struct vfio_dma {int task; } ;


 int FUNC_0 (struct vfio_dma*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct vfio_iommu*,struct vfio_dma*) ;
 int FUNC_3 (struct vfio_iommu*,struct vfio_dma*,int) ;

__attribute__((used)) static void FUNC_4(struct vfio_iommu *VAR_0, struct vfio_dma *VAR_1)
{
 FUNC_3(VAR_0, VAR_1, 1);
 FUNC_2(VAR_0, VAR_1);
 FUNC_1(VAR_1->task);
 FUNC_0(VAR_1);
 VAR_0->dma_avail++;
}
