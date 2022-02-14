
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {TYPE_1__* s_bdev; } ;
struct ext4_fsmap {scalar_t__ fmr_device; } ;
struct TYPE_6__ {TYPE_2__* journal_bdev; } ;
struct TYPE_5__ {int bd_dev; } ;
struct TYPE_4__ {int bd_dev; } ;


 TYPE_3__* FUNC_0 (struct super_block*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct super_block *VAR_1,
       struct ext4_fsmap *VAR_2)
{
 if (VAR_2->fmr_device == 0 || VAR_2->fmr_device == VAR_0 ||
     VAR_2->fmr_device == FUNC_1(VAR_1->s_bdev->bd_dev))
  return 1;
 if (FUNC_0(VAR_1)->journal_bdev &&
     VAR_2->fmr_device == FUNC_1(FUNC_0(VAR_1)->journal_bdev->bd_dev))
  return 1;
 return 0;
}
