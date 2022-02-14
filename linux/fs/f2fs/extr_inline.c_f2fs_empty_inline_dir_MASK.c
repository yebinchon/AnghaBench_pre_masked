
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int i_ino; } ;
struct f2fs_sb_info {int dummy; } ;
struct f2fs_dentry_ptr {unsigned int max; int bitmap; } ;


 struct f2fs_sb_info* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 struct page* FUNC_2 (struct f2fs_sb_info*,int ) ;
 int FUNC_3 (struct page*,int) ;
 unsigned int FUNC_4 (int ,unsigned int,unsigned int) ;
 void* FUNC_5 (struct inode*,struct page*) ;
 int FUNC_6 (struct inode*,struct f2fs_dentry_ptr*,void*) ;

bool FUNC_7(struct inode *VAR_0)
{
 struct f2fs_sb_info *VAR_1 = FUNC_0(VAR_0);
 struct page *VAR_2;
 unsigned int VAR_3 = 2;
 void *VAR_4;
 struct f2fs_dentry_ptr VAR_5;

 VAR_2 = FUNC_2(VAR_1, VAR_0->i_ino);
 if (FUNC_1(VAR_2))
  return 0;

 VAR_4 = FUNC_5(VAR_0, VAR_2);
 FUNC_6(VAR_0, &VAR_5, VAR_4);

 VAR_3 = FUNC_4(VAR_5.bitmap, VAR_5.max, VAR_3);

 FUNC_3(VAR_2, 1);

 if (VAR_3 < VAR_5.max)
  return 0;

 return 1;
}
