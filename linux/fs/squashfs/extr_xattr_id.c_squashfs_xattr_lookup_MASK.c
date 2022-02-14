
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct super_block {struct squashfs_sb_info* s_fs_info; } ;
struct squashfs_xattr_id {int count; int size; int xattr; } ;
struct squashfs_sb_info {int * xattr_id_table; } ;
typedef int id ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 void* FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (struct super_block*,struct squashfs_xattr_id*,void**,int*,int) ;

int FUNC_5(struct super_block *VAR_0, unsigned int VAR_1,
  int *VAR_2, unsigned int *VAR_3, unsigned long long *VAR_4)
{
 struct squashfs_sb_info *VAR_5 = VAR_0->s_fs_info;
 int VAR_6 = FUNC_0(VAR_1);
 int VAR_7 = FUNC_1(VAR_1);
 u64 VAR_8 = FUNC_3(VAR_5->xattr_id_table[VAR_6]);
 struct squashfs_xattr_id VAR_9;
 int VAR_10;

 VAR_10 = FUNC_4(VAR_0, &VAR_9, &VAR_8, &VAR_7,
       sizeof(VAR_9));
 if (VAR_10 < 0)
  return VAR_10;

 *VAR_4 = FUNC_3(VAR_9.xattr);
 *VAR_3 = FUNC_2(VAR_9.size);
 *VAR_2 = FUNC_2(VAR_9.count);
 return 0;
}
