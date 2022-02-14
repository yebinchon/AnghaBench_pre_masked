
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mdev_device {int dummy; } ;
struct kobject {int dummy; } ;
struct TYPE_3__ {int owner; int hook; } ;
struct ap_matrix_mdev {int node; TYPE_1__ pqap_hook; int matrix; struct mdev_device* mdev; } ;
struct TYPE_4__ {int lock; int mdev_list; int info; int available_instances; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 struct ap_matrix_mdev* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 TYPE_2__* VAR_5 ;
 int FUNC_4 (struct mdev_device*,struct ap_matrix_mdev*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;

__attribute__((used)) static int FUNC_8(struct kobject *VAR_6, struct mdev_device *VAR_7)
{
 struct ap_matrix_mdev *VAR_8;

 if ((FUNC_0(&VAR_5->available_instances) < 0))
  return -VAR_1;

 VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_2);
 if (!VAR_8) {
  FUNC_1(&VAR_5->available_instances);
  return -VAR_0;
 }

 VAR_8->mdev = VAR_7;
 FUNC_7(&VAR_5->info, &VAR_8->matrix);
 FUNC_4(VAR_7, VAR_8);
 VAR_8->pqap_hook.hook = VAR_4;
 VAR_8->pqap_hook.owner = VAR_3;
 FUNC_5(&VAR_5->lock);
 FUNC_3(&VAR_8->node, &VAR_5->mdev_list);
 FUNC_6(&VAR_5->lock);

 return 0;
}
