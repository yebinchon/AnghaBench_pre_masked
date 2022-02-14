
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_iommu {int notifier; } ;
struct notifier_block {int dummy; } ;


 int FUNC_0 (int *,struct notifier_block*) ;

__attribute__((used)) static int FUNC_1(void *VAR_0,
      struct notifier_block *VAR_1)
{
 struct vfio_iommu *VAR_2 = VAR_0;

 return FUNC_0(&VAR_2->notifier, VAR_1);
}
