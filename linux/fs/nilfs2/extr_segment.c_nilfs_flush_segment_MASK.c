
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {struct nilfs_sc_info* ns_writer; } ;
struct super_block {struct the_nilfs* s_fs_info; } ;
struct nilfs_sc_info {int dummy; } ;
typedef int ino_t ;


 scalar_t__ FUNC_0 (struct super_block*,int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct nilfs_sc_info*,int ) ;

void FUNC_3(struct super_block *VAR_0, ino_t VAR_1)
{
 struct the_nilfs *VAR_2 = VAR_0->s_fs_info;
 struct nilfs_sc_info *VAR_3 = VAR_2->ns_writer;

 if (!VAR_3 || FUNC_1())
  return;
 FUNC_2(VAR_3, FUNC_0(VAR_0, VAR_1) ? VAR_1 : 0);

}
