
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btrfsic_dev_state_hashtable {scalar_t__ table; } ;
struct btrfsic_dev_state {int collision_resolving_node; TYPE_1__* bdev; } ;
struct TYPE_2__ {scalar_t__ bd_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_1(
  struct btrfsic_dev_state *VAR_1,
  struct btrfsic_dev_state_hashtable *VAR_2)
{
 const unsigned int VAR_3 =
     (((unsigned int)((uintptr_t)VAR_1->bdev->bd_dev)) &
      (VAR_0 - 1));

 FUNC_0(&VAR_1->collision_resolving_node, VAR_2->table + VAR_3);
}
