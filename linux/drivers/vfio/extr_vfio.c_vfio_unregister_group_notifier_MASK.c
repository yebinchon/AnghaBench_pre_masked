
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_group {int notifier; } ;
struct notifier_block {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct notifier_block*) ;
 int FUNC_1 (struct vfio_group*) ;
 int FUNC_2 (struct vfio_group*) ;

__attribute__((used)) static int FUNC_3(struct vfio_group *VAR_1,
      struct notifier_block *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3)
  return -VAR_0;

 VAR_3 = FUNC_0(&VAR_1->notifier, VAR_2);

 FUNC_2(VAR_1);

 return VAR_3;
}
