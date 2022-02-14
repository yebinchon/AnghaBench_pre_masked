
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_iommu {int notifier; } ;
struct notifier_block {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int *,struct notifier_block*) ;

__attribute__((used)) static int FUNC_1(void *VAR_2,
           unsigned long *VAR_3,
           struct notifier_block *VAR_4)
{
 struct vfio_iommu *VAR_5 = VAR_2;


 *VAR_3 &= ~VAR_1;


 if (*VAR_3)
  return -VAR_0;

 return FUNC_0(&VAR_5->notifier, VAR_4);
}
