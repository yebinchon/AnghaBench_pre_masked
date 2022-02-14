
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_2__ {int sb_fs_size; int * sb_bmp_dir; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (struct super_block*,int ) ;
 int FUNC_1 (struct super_block*,unsigned int) ;
 TYPE_1__* FUNC_2 (struct super_block*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static unsigned FUNC_4(struct super_block *VAR_1)
{
 unsigned VAR_2, VAR_3, VAR_4;
 VAR_4 = (FUNC_2(VAR_1)->sb_fs_size + 0x3fff) >> 14;
 VAR_3 = 0;
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  FUNC_1(VAR_1, VAR_2);
 }
 for (VAR_2 = 0; VAR_2 < VAR_4; VAR_2++) {
  unsigned VAR_5;
  FUNC_1(VAR_1, VAR_2 + VAR_0);
  VAR_5 = FUNC_0(VAR_1, FUNC_3(FUNC_2(VAR_1)->sb_bmp_dir[VAR_2]));
  if (VAR_5 != (unsigned)-1)
   VAR_3 += VAR_5;
 }
 return VAR_3;
}
