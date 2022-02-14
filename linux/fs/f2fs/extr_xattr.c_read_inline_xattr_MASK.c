
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int i_ino; } ;
struct f2fs_sb_info {int dummy; } ;


 struct f2fs_sb_info* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 struct page* FUNC_3 (struct f2fs_sb_info*,int ) ;
 int FUNC_4 (struct page*,int) ;
 void* FUNC_5 (struct inode*,struct page*) ;
 unsigned int FUNC_6 (struct inode*) ;
 int FUNC_7 (void*,void*,unsigned int) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_0, struct page *VAR_1,
       void *VAR_2)
{
 struct f2fs_sb_info *VAR_3 = FUNC_0(VAR_0);
 unsigned int VAR_4 = FUNC_6(VAR_0);
 struct page *VAR_5 = ((void*)0);
 void *VAR_6;

 if (VAR_1) {
  VAR_6 = FUNC_5(VAR_0, VAR_1);
 } else {
  VAR_5 = FUNC_3(VAR_3, VAR_0->i_ino);
  if (FUNC_1(VAR_5))
   return FUNC_2(VAR_5);

  VAR_6 = FUNC_5(VAR_0, VAR_5);
 }
 FUNC_7(VAR_2, VAR_6, VAR_4);
 FUNC_4(VAR_5, 1);

 return 0;
}
