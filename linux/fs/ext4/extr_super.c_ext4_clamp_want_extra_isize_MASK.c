
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct ext4_super_block {int s_min_extra_isize; int s_want_extra_isize; } ;
struct ext4_sb_info {scalar_t__ s_inode_size; scalar_t__ s_want_extra_isize; struct ext4_super_block* s_es; } ;
struct ext4_inode {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct ext4_sb_info* FUNC_0 (struct super_block*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct super_block*,int ,char*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct super_block *VAR_2)
{
 struct ext4_sb_info *VAR_3 = FUNC_0(VAR_2);
 struct ext4_super_block *VAR_4 = VAR_3->s_es;


 if (VAR_3->s_inode_size > VAR_0 &&
     VAR_3->s_want_extra_isize == 0) {
  VAR_3->s_want_extra_isize = sizeof(struct ext4_inode) -
           VAR_0;
  if (FUNC_1(VAR_2)) {
   if (VAR_3->s_want_extra_isize <
       FUNC_3(VAR_4->s_want_extra_isize))
    VAR_3->s_want_extra_isize =
     FUNC_3(VAR_4->s_want_extra_isize);
   if (VAR_3->s_want_extra_isize <
       FUNC_3(VAR_4->s_min_extra_isize))
    VAR_3->s_want_extra_isize =
     FUNC_3(VAR_4->s_min_extra_isize);
  }
 }

 if (VAR_0 + VAR_3->s_want_extra_isize >
       VAR_3->s_inode_size) {
  VAR_3->s_want_extra_isize = sizeof(struct ext4_inode) -
             VAR_0;
  FUNC_2(VAR_2, VAR_1,
    "required extra inode space not available");
 }
}
