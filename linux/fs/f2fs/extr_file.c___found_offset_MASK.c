
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {int dummy; } ;
typedef int pgoff_t ;
typedef int block_t ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(struct f2fs_sb_info *VAR_2, block_t VAR_3,
    pgoff_t VAR_4, pgoff_t VAR_5, int VAR_6)
{
 switch (VAR_6) {
 case 129:
  if ((VAR_3 == VAR_0 && VAR_4 == VAR_5) ||
   FUNC_0(VAR_3))
   return 1;
  break;
 case 128:
  if (VAR_3 == VAR_1)
   return 1;
  break;
 }
 return 0;
}
