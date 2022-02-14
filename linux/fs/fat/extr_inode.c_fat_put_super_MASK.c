
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct msdos_sb_info {int rcu; int fat_inode; int fsinfo_inode; } ;


 struct msdos_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct super_block*,int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct super_block *VAR_1)
{
 struct msdos_sb_info *VAR_2 = FUNC_0(VAR_1);

 FUNC_2(VAR_1, 0, 0);

 FUNC_3(VAR_2->fsinfo_inode);
 FUNC_3(VAR_2->fat_inode);

 FUNC_1(&VAR_2->rcu, VAR_0);
}
