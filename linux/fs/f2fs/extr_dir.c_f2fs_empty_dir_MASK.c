
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int dummy; } ;
struct f2fs_dentry_block {int dentry_bitmap; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct page*) ;
 unsigned int VAR_1 ;
 int FUNC_1 (struct page*) ;
 unsigned long FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 struct page* FUNC_4 (struct inode*,unsigned long,int) ;
 scalar_t__ FUNC_5 (struct inode*) ;
 int FUNC_6 (struct page*,int) ;
 unsigned int FUNC_7 (int *,unsigned int,unsigned int) ;
 struct f2fs_dentry_block* FUNC_8 (struct page*) ;

bool FUNC_9(struct inode *VAR_2)
{
 unsigned long VAR_3;
 struct page *VAR_4;
 unsigned int VAR_5;
 struct f2fs_dentry_block *VAR_6;
 unsigned long VAR_7 = FUNC_2(VAR_2);

 if (FUNC_5(VAR_2))
  return FUNC_3(VAR_2);

 for (VAR_3 = 0; VAR_3 < VAR_7; VAR_3++) {
  VAR_4 = FUNC_4(VAR_2, VAR_3, 0);
  if (FUNC_0(VAR_4)) {
   if (FUNC_1(VAR_4) == -VAR_0)
    continue;
   else
    return 0;
  }

  VAR_6 = FUNC_8(VAR_4);
  if (VAR_3 == 0)
   VAR_5 = 2;
  else
   VAR_5 = 0;
  VAR_5 = FUNC_7(&VAR_6->dentry_bitmap,
      VAR_1,
      VAR_5);

  FUNC_6(VAR_4, 1);

  if (VAR_5 < VAR_1)
   return 0;
 }
 return 1;
}
