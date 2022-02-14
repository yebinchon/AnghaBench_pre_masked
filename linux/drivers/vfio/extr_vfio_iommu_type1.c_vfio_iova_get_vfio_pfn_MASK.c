
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_pfn {int ref_count; } ;
struct vfio_dma {int dummy; } ;


 int FUNC_0 (int *) ;
 struct vfio_pfn* FUNC_1 (struct vfio_dma*,unsigned long) ;

__attribute__((used)) static struct vfio_pfn *FUNC_2(struct vfio_dma *VAR_0,
            unsigned long VAR_1)
{
 struct vfio_pfn *VAR_2 = FUNC_1(VAR_0, VAR_1);

 if (VAR_2)
  FUNC_0(&VAR_2->ref_count);
 return VAR_2;
}
