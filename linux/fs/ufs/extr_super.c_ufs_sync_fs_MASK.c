
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ufs_super_block_third {int dummy; } ;
struct ufs_super_block_first {int fs_time; } ;
struct ufs_sb_private_info {int dummy; } ;
struct super_block {int dummy; } ;
struct TYPE_2__ {unsigned int s_flags; int s_lock; struct ufs_sb_private_info* s_uspi; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_2 (struct super_block*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct ufs_super_block_first* FUNC_5 (struct ufs_sb_private_info*) ;
 struct ufs_super_block_third* FUNC_6 (struct ufs_sb_private_info*) ;
 int FUNC_7 (struct super_block*) ;
 int FUNC_8 (struct super_block*) ;
 int FUNC_9 (struct super_block*,struct ufs_super_block_first*,struct ufs_super_block_third*,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct super_block *VAR_5, int VAR_6)
{
 struct ufs_sb_private_info * VAR_7;
 struct ufs_super_block_first * VAR_8;
 struct ufs_super_block_third * VAR_9;
 unsigned VAR_10;

 FUNC_3(&FUNC_1(VAR_5)->s_lock);

 FUNC_0("ENTER\n");

 VAR_10 = FUNC_1(VAR_5)->s_flags;
 VAR_7 = FUNC_1(VAR_5)->s_uspi;
 VAR_8 = FUNC_5(VAR_7);
 VAR_9 = FUNC_6(VAR_7);

 VAR_8->fs_time = FUNC_7(VAR_5);
 if ((VAR_10 & VAR_1) == VAR_2 ||
     (VAR_10 & VAR_1) == VAR_3 ||
     (VAR_10 & VAR_1) == VAR_4)
  FUNC_9(VAR_5, VAR_8, VAR_9,
    VAR_0 - FUNC_2(VAR_5, VAR_8->fs_time));
 FUNC_8(VAR_5);

 FUNC_0("EXIT\n");
 FUNC_4(&FUNC_1(VAR_5)->s_lock);

 return 0;
}
