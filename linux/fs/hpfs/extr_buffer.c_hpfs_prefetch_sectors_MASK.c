
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct buffer_head {int dummy; } ;
struct blk_plug {int dummy; } ;
struct TYPE_2__ {unsigned int sb_fs_size; } ;


 int FUNC_0 (struct blk_plug*) ;
 int FUNC_1 (struct blk_plug*) ;
 int FUNC_2 (struct buffer_head*) ;
 scalar_t__ FUNC_3 (struct buffer_head*) ;
 TYPE_1__* FUNC_4 (struct super_block*) ;
 int FUNC_5 (struct super_block*,unsigned int,int) ;
 int FUNC_6 (struct super_block*,unsigned int) ;
 struct buffer_head* FUNC_7 (struct super_block*,unsigned int) ;
 scalar_t__ FUNC_8 (int) ;

void FUNC_9(struct super_block *VAR_0, unsigned VAR_1, int VAR_2)
{
 struct buffer_head *VAR_3;
 struct blk_plug VAR_4;

 if (VAR_2 <= 0 || FUNC_8(VAR_1 >= FUNC_4(VAR_0)->sb_fs_size))
  return;

 if (FUNC_8(FUNC_5(VAR_0, VAR_1, VAR_2) != VAR_2))
  return;

 VAR_3 = FUNC_7(VAR_0, VAR_1);
 if (VAR_3) {
  if (FUNC_3(VAR_3)) {
   FUNC_2(VAR_3);
   return;
  }
  FUNC_2(VAR_3);
 };

 FUNC_1(&VAR_4);
 while (VAR_2 > 0) {
  if (FUNC_8(VAR_1 >= FUNC_4(VAR_0)->sb_fs_size))
   break;
  FUNC_6(VAR_0, VAR_1);
  VAR_1++;
  VAR_2--;
 }
 FUNC_0(&VAR_4);
}
