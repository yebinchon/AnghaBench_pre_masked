
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_group {int iommu_group; scalar_t__ mdev_group; } ;
struct vfio_domain {int domain; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct vfio_domain *VAR_1,
        struct vfio_group *VAR_2)
{
 if (VAR_2->mdev_group)
  FUNC_1(VAR_2->iommu_group, VAR_1->domain,
      VAR_0);
 else
  FUNC_0(VAR_1->domain, VAR_2->iommu_group);
}
