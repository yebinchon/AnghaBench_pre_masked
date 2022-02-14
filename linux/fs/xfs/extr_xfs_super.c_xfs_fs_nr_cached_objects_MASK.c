
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_fs_info; } ;
struct shrink_control {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct super_block*) ;
 long FUNC_2 (int ) ;

__attribute__((used)) static long
FUNC_3(
 struct super_block *VAR_0,
 struct shrink_control *VAR_1)
{

 if (FUNC_0(!VAR_0->s_fs_info))
  return 0;
 return FUNC_2(FUNC_1(VAR_0));
}
