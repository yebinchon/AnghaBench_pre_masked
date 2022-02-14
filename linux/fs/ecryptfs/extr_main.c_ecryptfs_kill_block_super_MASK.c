
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct ecryptfs_sb_info {int mount_crypt_stat; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 struct ecryptfs_sb_info* FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct super_block*) ;
 int FUNC_3 (int ,struct ecryptfs_sb_info*) ;

__attribute__((used)) static void FUNC_4(struct super_block *VAR_1)
{
 struct ecryptfs_sb_info *VAR_2 = FUNC_1(VAR_1);
 FUNC_2(VAR_1);
 if (!VAR_2)
  return;
 FUNC_0(&VAR_2->mount_crypt_stat);
 FUNC_3(VAR_0, VAR_2);
}
