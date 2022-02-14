
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_2__ {int sb_fs_size; int * sb_bmp_dir; } ;


 int FUNC_0 (struct super_block*,unsigned int,int) ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 unsigned int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;

void FUNC_4(struct super_block *VAR_0, unsigned VAR_1)
{
 unsigned VAR_2, VAR_3;
 unsigned VAR_4 = (FUNC_1(VAR_0)->sb_fs_size + 0x3fff) >> 14;
 if (FUNC_3(VAR_1 >= VAR_4))
  return;
 VAR_2 = FUNC_2(FUNC_1(VAR_0)->sb_bmp_dir[VAR_1]);
 if (FUNC_3(VAR_1 + 1 >= VAR_4))
  VAR_3 = 0;
 else
  VAR_3 = FUNC_2(FUNC_1(VAR_0)->sb_bmp_dir[VAR_1 + 1]);
 FUNC_0(VAR_0, VAR_2, 4 + 4 * (VAR_2 + 4 == VAR_3));
}
