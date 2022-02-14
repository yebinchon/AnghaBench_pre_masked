
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btrfs_root {int will_be_snapshotted; TYPE_1__* subv_writers; } ;
struct TYPE_2__ {int counter; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct btrfs_root*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;

int FUNC_4(struct btrfs_root *VAR_0)
{
 if (FUNC_0(&VAR_0->will_be_snapshotted))
  return 0;

 FUNC_2(&VAR_0->subv_writers->counter);



 FUNC_3();
 if (FUNC_0(&VAR_0->will_be_snapshotted)) {
  FUNC_1(VAR_0);
  return 0;
 }
 return 1;
}
