
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {scalar_t__ index; } ;
struct inode {int i_ino; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int VAR_1 ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*,struct page*) ;
 struct page* FUNC_6 (int ,int ) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct page*,int) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (struct page*,int ,int ) ;

int FUNC_11(struct inode *VAR_2, struct page *VAR_3)
{
 struct page *VAR_4;

 VAR_4 = FUNC_6(FUNC_0(VAR_2), VAR_2->i_ino);
 if (FUNC_1(VAR_4)) {
  FUNC_9(VAR_3);
  return FUNC_2(VAR_4);
 }

 if (!FUNC_7(VAR_2)) {
  FUNC_8(VAR_4, 1);
  return -VAR_0;
 }

 if (VAR_3->index)
  FUNC_10(VAR_3, 0, VAR_1);
 else
  FUNC_5(VAR_3, VAR_4);

 if (!FUNC_3(VAR_3))
  FUNC_4(VAR_3);
 FUNC_8(VAR_4, 1);
 FUNC_9(VAR_3);
 return 0;
}
