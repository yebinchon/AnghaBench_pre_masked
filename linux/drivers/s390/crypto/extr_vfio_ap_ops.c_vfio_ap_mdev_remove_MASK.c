
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mdev_device {int dummy; } ;
struct ap_matrix_mdev {int node; scalar_t__ kvm; } ;
struct TYPE_2__ {int available_instances; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ap_matrix_mdev*) ;
 int FUNC_2 (int *) ;
 TYPE_1__* VAR_1 ;
 struct ap_matrix_mdev* FUNC_3 (struct mdev_device*) ;
 int FUNC_4 (struct mdev_device*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct mdev_device*) ;

__attribute__((used)) static int FUNC_8(struct mdev_device *VAR_2)
{
 struct ap_matrix_mdev *VAR_3 = FUNC_3(VAR_2);

 if (VAR_3->kvm)
  return -VAR_0;

 FUNC_5(&VAR_1->lock);
 FUNC_7(VAR_2);
 FUNC_2(&VAR_3->node);
 FUNC_6(&VAR_1->lock);

 FUNC_1(VAR_3);
 FUNC_4(VAR_2, ((void*)0));
 FUNC_0(&VAR_1->available_instances);

 return 0;
}
