
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {int ns_mount_opt; } ;
struct super_block {struct the_nilfs* s_fs_info; } ;
struct nilfs_super_block {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void
FUNC_0(struct super_block *VAR_2,
     struct nilfs_super_block *VAR_3)
{
 struct the_nilfs *VAR_4 = VAR_2->s_fs_info;

 VAR_4->ns_mount_opt =
  VAR_1 | VAR_0;
}
