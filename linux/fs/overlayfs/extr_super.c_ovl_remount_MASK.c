
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {struct ovl_fs* s_fs_info; } ;
struct ovl_fs {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ovl_fs*) ;

__attribute__((used)) static int FUNC_1(struct super_block *VAR_2, int *VAR_3, char *VAR_4)
{
 struct ovl_fs *VAR_5 = VAR_2->s_fs_info;

 if (!(*VAR_3 & VAR_1) && FUNC_0(VAR_5))
  return -VAR_0;

 return 0;
}
