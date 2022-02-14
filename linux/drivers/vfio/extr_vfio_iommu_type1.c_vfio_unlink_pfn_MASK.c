
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_pfn {int node; } ;
struct vfio_dma {int pfn_list; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct vfio_dma *VAR_0, struct vfio_pfn *VAR_1)
{
 FUNC_0(&VAR_1->node, &VAR_0->pfn_list);
}
