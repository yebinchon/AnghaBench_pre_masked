
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btrfs_workqueue {TYPE_1__* normal; } ;
struct TYPE_2__ {int thresh; int pending; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

bool FUNC_1(const struct btrfs_workqueue *VAR_1)
{






 if (VAR_1->normal->thresh == VAR_0)
  return 0;

 return FUNC_0(&VAR_1->normal->pending) > VAR_1->normal->thresh * 2;
}
