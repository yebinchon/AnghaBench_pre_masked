
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {TYPE_1__* s_bdev; } ;
struct bd_info_t {int opened; int sector_size_bits; int num_sectors; scalar_t__ sector_size; scalar_t__ sector_size_mask; } ;
struct TYPE_4__ {struct bd_info_t bd_info; } ;
struct TYPE_3__ {int bd_inode; } ;


 TYPE_2__* FUNC_0 (struct super_block*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;

void FUNC_4(struct super_block *VAR_0)
{
 struct bd_info_t *VAR_1 = &(FUNC_0(VAR_0)->bd_info);

 if (VAR_1->opened)
  return;

 VAR_1->sector_size = FUNC_1(VAR_0->s_bdev);
 VAR_1->sector_size_bits = FUNC_3(VAR_1->sector_size);
 VAR_1->sector_size_mask = VAR_1->sector_size - 1;
 VAR_1->num_sectors = FUNC_2(VAR_0->s_bdev->bd_inode) >>
     VAR_1->sector_size_bits;
 VAR_1->opened = 1;
}
