
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {struct squashfs_sb_info* s_fs_info; } ;
struct squashfs_sb_info {int dummy; } ;


 scalar_t__ FUNC_0 (void*) ;
 void* FUNC_1 (struct super_block*,unsigned short) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (struct squashfs_sb_info*,void*) ;

void *FUNC_4(struct super_block *VAR_0, unsigned short VAR_1)
{
 struct squashfs_sb_info *VAR_2 = VAR_0->s_fs_info;
 void *VAR_3, *VAR_4 = FUNC_1(VAR_0, VAR_1);

 if (FUNC_0(VAR_4))
  return VAR_4;

 VAR_3 = FUNC_3(VAR_2, VAR_4);
 if (FUNC_0(VAR_3))
  FUNC_2(VAR_4);

 return VAR_3;
}
