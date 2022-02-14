
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_pfn {int pfn; int ref_count; } ;
struct vfio_dma {int prot; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct vfio_dma*,struct vfio_pfn*) ;

__attribute__((used)) static int FUNC_3(struct vfio_dma *VAR_0, struct vfio_pfn *VAR_1)
{
 int VAR_2 = 0;

 if (FUNC_0(&VAR_1->ref_count)) {
  VAR_2 = FUNC_1(VAR_1->pfn, VAR_0->prot);
  FUNC_2(VAR_0, VAR_1);
 }
 return VAR_2;
}
