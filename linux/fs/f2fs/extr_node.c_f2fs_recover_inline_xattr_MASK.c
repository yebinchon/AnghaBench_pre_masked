
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int i_ino; } ;
struct f2fs_inode {int i_inline; } ;


 int VAR_0 ;
 struct f2fs_inode* FUNC_0 (struct page*) ;
 int FUNC_1 (struct inode*) ;
 int VAR_1 ;
 int FUNC_2 (struct page*) ;
 int VAR_2 ;
 int FUNC_3 (struct inode*,int ) ;
 int FUNC_4 (int ,int ) ;
 struct page* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct page*,int) ;
 int FUNC_7 (struct inode*,struct page*) ;
 int FUNC_8 (struct page*,int ,int,int) ;
 void* FUNC_9 (struct inode*,struct page*) ;
 size_t FUNC_10 (struct inode*) ;
 int FUNC_11 (void*,void*,size_t) ;
 int FUNC_12 (struct inode*,int ) ;

void FUNC_13(struct inode *VAR_3, struct page *VAR_4)
{
 void *VAR_5, *VAR_6;
 size_t VAR_7;
 struct page *VAR_8;
 struct f2fs_inode *VAR_9;

 VAR_8 = FUNC_5(FUNC_1(VAR_3), VAR_3->i_ino);
 FUNC_4(FUNC_1(VAR_3), FUNC_2(VAR_8));

 VAR_9 = FUNC_0(VAR_4);
 if (VAR_9->i_inline & VAR_0) {
  FUNC_12(VAR_3, VAR_1);
 } else {
  FUNC_3(VAR_3, VAR_1);
  goto update_inode;
 }

 VAR_6 = FUNC_9(VAR_3, VAR_8);
 VAR_5 = FUNC_9(VAR_3, VAR_4);
 VAR_7 = FUNC_10(VAR_3);

 FUNC_8(VAR_8, VAR_2, 1, 1);
 FUNC_11(VAR_6, VAR_5, VAR_7);
update_inode:
 FUNC_7(VAR_3, VAR_8);
 FUNC_6(VAR_8, 1);
}
