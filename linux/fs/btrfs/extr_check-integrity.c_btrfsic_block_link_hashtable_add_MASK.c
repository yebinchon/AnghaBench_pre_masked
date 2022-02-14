
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct btrfsic_block_link_hashtable {scalar_t__ table; } ;
struct btrfsic_block_link {int collision_resolving_node; TYPE_4__* block_ref_from; TYPE_3__* block_ref_to; } ;
struct TYPE_8__ {int dev_bytenr; TYPE_2__* dev_state; } ;
struct TYPE_7__ {int dev_bytenr; TYPE_1__* dev_state; } ;
struct TYPE_6__ {scalar_t__ bdev; } ;
struct TYPE_5__ {scalar_t__ bdev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_2(
  struct btrfsic_block_link *VAR_1,
  struct btrfsic_block_link_hashtable *VAR_2)
{
 const unsigned int VAR_3 =
     (((unsigned int)(VAR_1->block_ref_to->dev_bytenr >> 16)) ^
      ((unsigned int)(VAR_1->block_ref_from->dev_bytenr >> 16)) ^
      ((unsigned int)((uintptr_t)VAR_1->block_ref_to->dev_state->bdev)) ^
      ((unsigned int)((uintptr_t)VAR_1->block_ref_from->dev_state->bdev)))
      & (VAR_0 - 1);

 FUNC_0(((void*)0) == VAR_1->block_ref_to);
 FUNC_0(((void*)0) == VAR_1->block_ref_from);
 FUNC_1(&VAR_1->collision_resolving_node, VAR_2->table + VAR_3);
}
