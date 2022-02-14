
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfio_group {int nb; int iommu_group; } ;
struct TYPE_2__ {int group_lock; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct vfio_group*) ;
 int FUNC_2 (int *) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_3(struct vfio_group *VAR_1)
{
 FUNC_2(&VAR_0.group_lock);




 FUNC_0(VAR_1->iommu_group, &VAR_1->nb);
 FUNC_1(VAR_1);
}
