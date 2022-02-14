
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
typedef int secno ;
struct TYPE_2__ {int sb_fs_size; int sb_chk; } ;


 scalar_t__ FUNC_0 (struct super_block*,int,char*) ;
 int FUNC_1 (struct super_block*,char*,char*,int) ;
 TYPE_1__* FUNC_2 (struct super_block*) ;

int FUNC_3(struct super_block *VAR_0, secno VAR_1, int VAR_2, char *VAR_3)
{
 if (VAR_1 + VAR_2 < VAR_1 || VAR_1 < 0x12 ||
     VAR_1 + VAR_2 > FUNC_2(VAR_0)->sb_fs_size) {
      FUNC_1(VAR_0, "sector(s) '%s' badly placed at %08x", VAR_3, VAR_1);
  return 1;
 }
 if (FUNC_2(VAR_0)->sb_chk>=2) {
  int VAR_4;
  for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
   if (FUNC_0(VAR_0, VAR_1 + VAR_4, VAR_3)) return 1;
 }
 return 0;
}
