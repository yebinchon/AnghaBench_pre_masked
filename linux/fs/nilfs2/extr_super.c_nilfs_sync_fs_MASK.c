
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {int ns_sem; } ;
struct super_block {struct the_nilfs* s_fs_info; } ;
struct nilfs_super_block {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct nilfs_super_block**) ;
 int FUNC_2 (struct super_block*,int ) ;
 int FUNC_3 (struct super_block*) ;
 int FUNC_4 (struct the_nilfs*) ;
 struct nilfs_super_block** FUNC_5 (struct super_block*,int ) ;
 scalar_t__ FUNC_6 (struct the_nilfs*) ;
 int FUNC_7 (struct the_nilfs*) ;
 int FUNC_8 (struct nilfs_super_block*,struct the_nilfs*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct super_block *VAR_1, int VAR_2)
{
 struct the_nilfs *VAR_3 = VAR_1->s_fs_info;
 struct nilfs_super_block **VAR_4;
 int VAR_5 = 0;


 if (VAR_2)
  VAR_5 = FUNC_3(VAR_1);

 FUNC_0(&VAR_3->ns_sem);
 if (FUNC_6(VAR_3)) {
  VAR_4 = FUNC_5(VAR_1, FUNC_7(VAR_3));
  if (FUNC_1(VAR_4)) {
   FUNC_8(VAR_4[0], VAR_3);
   FUNC_2(VAR_1, VAR_0);
  }
 }
 FUNC_9(&VAR_3->ns_sem);

 if (!VAR_5)
  VAR_5 = FUNC_4(VAR_3);

 return VAR_5;
}
