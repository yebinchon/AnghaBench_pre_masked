
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int index; } ;
struct inode {int dummy; } ;
struct dnode_of_data {int inode_page; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct inode*) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct dnode_of_data*,int ,int ) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct dnode_of_data*) ;
 int FUNC_8 (int ,int ,int,int) ;
 void* FUNC_9 (struct inode*,int ) ;
 void* FUNC_10 (struct page*) ;
 int FUNC_11 (void*) ;
 int FUNC_12 (void*,void*,int ) ;
 int FUNC_13 (struct inode*,int ) ;
 int FUNC_14 (struct dnode_of_data*,struct inode*,int *,int *,int ) ;
 int FUNC_15 (int ) ;

int FUNC_16(struct inode *VAR_5, struct page *VAR_6)
{
 void *VAR_7, *VAR_8;
 struct dnode_of_data VAR_9;
 int VAR_10;

 FUNC_14(&VAR_9, VAR_5, ((void*)0), ((void*)0), 0);
 VAR_10 = FUNC_5(&VAR_9, 0, VAR_3);
 if (VAR_10)
  return VAR_10;

 if (!FUNC_6(VAR_5)) {
  FUNC_7(&VAR_9);
  return -VAR_0;
 }

 FUNC_3(FUNC_0(VAR_5), VAR_6->index);

 FUNC_8(VAR_9.inode_page, VAR_4, 1, 1);
 VAR_7 = FUNC_10(VAR_6);
 VAR_8 = FUNC_9(VAR_5, VAR_9.inode_page);
 FUNC_12(VAR_8, VAR_7, FUNC_1(VAR_5));
 FUNC_11(VAR_7);
 FUNC_15(VAR_9.inode_page);

 FUNC_4(VAR_6);

 FUNC_13(VAR_5, VAR_1);
 FUNC_13(VAR_5, VAR_2);

 FUNC_2(VAR_9.inode_page);
 FUNC_7(&VAR_9);
 return 0;
}
