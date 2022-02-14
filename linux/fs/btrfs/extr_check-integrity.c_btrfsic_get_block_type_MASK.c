
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct btrfsic_state {TYPE_2__* latest_superblock; } ;
struct btrfsic_block {scalar_t__ dev_bytenr; scalar_t__ is_metadata; scalar_t__ is_superblock; TYPE_3__* dev_state; } ;
struct TYPE_6__ {scalar_t__ bdev; } ;
struct TYPE_5__ {scalar_t__ dev_bytenr; TYPE_1__* dev_state; } ;
struct TYPE_4__ {scalar_t__ bdev; } ;



__attribute__((used)) static char FUNC_0(const struct btrfsic_state *VAR_0,
       const struct btrfsic_block *VAR_1)
{
 if (VAR_1->is_superblock &&
     VAR_0->latest_superblock->dev_bytenr == VAR_1->dev_bytenr &&
     VAR_0->latest_superblock->dev_state->bdev == VAR_1->dev_state->bdev)
  return 'S';
 else if (VAR_1->is_superblock)
  return 's';
 else if (VAR_1->is_metadata)
  return 'M';
 else
  return 'D';
}
