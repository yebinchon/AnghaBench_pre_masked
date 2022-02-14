
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_bdev; } ;
struct hpfs_spare_block {int dirty; int old_wrote; } ;
struct buffer_head {int dummy; } ;
struct TYPE_2__ {int sb_chkdsk; int sb_was_error; } ;


 int FUNC_0 (struct buffer_head*) ;
 struct hpfs_spare_block* FUNC_1 (struct super_block*,int,struct buffer_head**,int ) ;
 TYPE_1__* FUNC_2 (struct super_block*) ;
 int FUNC_3 (struct buffer_head*) ;
 scalar_t__ FUNC_4 (struct super_block*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct buffer_head*) ;

__attribute__((used)) static void FUNC_7(struct super_block *VAR_0)
{
 struct buffer_head *VAR_1;
 struct hpfs_spare_block *VAR_2;
 if (FUNC_4(VAR_0)) return;
 FUNC_5(VAR_0->s_bdev);
 if ((VAR_2 = FUNC_1(VAR_0, 17, &VAR_1, 0))) {
  VAR_2->dirty = FUNC_2(VAR_0)->sb_chkdsk > 1 - FUNC_2(VAR_0)->sb_was_error;
  VAR_2->old_wrote = FUNC_2(VAR_0)->sb_chkdsk >= 2 && !FUNC_2(VAR_0)->sb_was_error;
  FUNC_3(VAR_1);
  FUNC_6(VAR_1);
  FUNC_0(VAR_1);
 }
}
