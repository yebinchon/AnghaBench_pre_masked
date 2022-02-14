
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {int ns_sbsize; struct nilfs_super_block** ns_sbp; } ;
struct super_block {struct the_nilfs* s_fs_info; } ;
struct nilfs_super_block {scalar_t__ s_magic; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct nilfs_super_block*,struct nilfs_super_block*,int ) ;
 int FUNC_2 (struct super_block*,int ,char*) ;
 int FUNC_3 (struct the_nilfs*) ;

struct nilfs_super_block **FUNC_4(struct super_block *VAR_2,
            int VAR_3)
{
 struct the_nilfs *VAR_4 = VAR_2->s_fs_info;
 struct nilfs_super_block **VAR_5 = VAR_4->ns_sbp;


 if (VAR_5[0]->s_magic != FUNC_0(VAR_1)) {
  if (VAR_5[1] &&
      VAR_5[1]->s_magic == FUNC_0(VAR_1)) {
   FUNC_1(VAR_5[0], VAR_5[1], VAR_4->ns_sbsize);
  } else {
   FUNC_2(VAR_2, VAR_0, "superblock broke");
   return ((void*)0);
  }
 } else if (VAR_5[1] &&
     VAR_5[1]->s_magic != FUNC_0(VAR_1)) {
  FUNC_1(VAR_5[1], VAR_5[0], VAR_4->ns_sbsize);
 }

 if (VAR_3 && VAR_5[1])
  FUNC_3(VAR_4);

 return VAR_5;
}
