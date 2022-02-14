
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_pfn {int dummy; } ;
struct vfio_dma {int dummy; } ;
typedef int dma_addr_t ;


 struct vfio_pfn* FUNC_0 (struct vfio_dma*,int ) ;
 int FUNC_1 (struct vfio_dma*,struct vfio_pfn*) ;
 int FUNC_2 (struct vfio_dma*,int,int) ;

__attribute__((used)) static int FUNC_3(struct vfio_dma *VAR_0, dma_addr_t VAR_1,
        bool VAR_2)
{
 int VAR_3;
 struct vfio_pfn *VAR_4 = FUNC_0(VAR_0, VAR_1);

 if (!VAR_4)
  return 0;

 VAR_3 = FUNC_1(VAR_0, VAR_4);

 if (VAR_2)
  FUNC_2(VAR_0, -VAR_3, 1);

 return VAR_3;
}
