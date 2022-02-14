
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_pfn {unsigned long pfn; int ref_count; int iova; } ;
struct vfio_dma {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 struct vfio_pfn* FUNC_1 (int,int ) ;
 int FUNC_2 (struct vfio_dma*,struct vfio_pfn*) ;

__attribute__((used)) static int FUNC_3(struct vfio_dma *VAR_2, dma_addr_t VAR_3,
    unsigned long VAR_4)
{
 struct vfio_pfn *VAR_5;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->iova = VAR_3;
 VAR_5->pfn = VAR_4;
 FUNC_0(&VAR_5->ref_count, 1);
 FUNC_2(VAR_2, VAR_5);
 return 0;
}
