
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct super_block {struct squashfs_sb_info* s_fs_info; } ;
struct squashfs_sb_info {int * inode_lookup_table; } ;
typedef int ino ;
typedef int __le64 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int) ;
 long long FUNC_3 (int ) ;
 int FUNC_4 (struct super_block*,int *,int*,int*,int) ;

__attribute__((used)) static long long FUNC_5(struct super_block *VAR_0, int VAR_1)
{
 struct squashfs_sb_info *VAR_2 = VAR_0->s_fs_info;
 int VAR_3 = FUNC_0(VAR_1 - 1);
 int VAR_4 = FUNC_1(VAR_1 - 1);
 u64 VAR_5 = FUNC_3(VAR_2->inode_lookup_table[VAR_3]);
 __le64 VAR_6;
 int VAR_7;

 FUNC_2("Entered squashfs_inode_lookup, inode_number = %d\n", VAR_1);

 VAR_7 = FUNC_4(VAR_0, &VAR_6, &VAR_5, &VAR_4, sizeof(VAR_6));
 if (VAR_7 < 0)
  return VAR_7;

 FUNC_2("squashfs_inode_lookup, inode = 0x%llx\n",
  (u64) FUNC_3(VAR_6));

 return FUNC_3(VAR_6);
}
