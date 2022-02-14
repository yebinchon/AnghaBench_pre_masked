
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_group {scalar_t__ kvm; int notifier; } ;
struct notifier_block {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int *,unsigned long,scalar_t__) ;
 int FUNC_1 (int *,struct notifier_block*) ;
 int FUNC_2 (struct vfio_group*) ;
 int FUNC_3 (struct vfio_group*) ;

__attribute__((used)) static int FUNC_4(struct vfio_group *VAR_2,
     unsigned long *VAR_3,
     struct notifier_block *VAR_4)
{
 int VAR_5;
 bool VAR_6 = 0;

 if (*VAR_3 & VAR_1)
  VAR_6 = 1;


 *VAR_3 &= ~VAR_1;


 if (*VAR_3)
  return -VAR_0;

 VAR_5 = FUNC_2(VAR_2);
 if (VAR_5)
  return -VAR_0;

 VAR_5 = FUNC_1(&VAR_2->notifier, VAR_4);





 if (!VAR_5 && VAR_6 && VAR_2->kvm)
  FUNC_0(&VAR_2->notifier,
     VAR_1, VAR_2->kvm);

 FUNC_3(VAR_2);

 return VAR_5;
}
