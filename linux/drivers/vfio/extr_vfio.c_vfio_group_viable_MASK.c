
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_group {int iommu_group; } ;


 scalar_t__ FUNC_0 (int ,struct vfio_group*,int ) ;
 int VAR_0 ;

__attribute__((used)) static bool FUNC_1(struct vfio_group *VAR_1)
{
 return (FUNC_0(VAR_1->iommu_group,
      VAR_1, VAR_0) == 0);
}
