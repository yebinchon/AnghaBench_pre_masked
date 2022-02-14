
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {int ns_sem; } ;
struct super_block {struct the_nilfs* s_fs_info; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct super_block*,int) ;
 scalar_t__ FUNC_2 (struct super_block*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct super_block *VAR_0)
{
 struct the_nilfs *VAR_1 = VAR_0->s_fs_info;

 if (FUNC_2(VAR_0))
  return 0;

 FUNC_0(&VAR_1->ns_sem);
 FUNC_1(VAR_0, 0);
 FUNC_3(&VAR_1->ns_sem);
 return 0;
}
