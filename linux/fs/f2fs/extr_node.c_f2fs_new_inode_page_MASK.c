
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int i_ino; } ;
struct dnode_of_data {int dummy; } ;


 struct page* FUNC_0 (struct dnode_of_data*,int ) ;
 int FUNC_1 (struct dnode_of_data*,struct inode*,int *,int *,int ) ;

struct page *FUNC_2(struct inode *VAR_0)
{
 struct dnode_of_data VAR_1;


 FUNC_1(&VAR_1, VAR_0, ((void*)0), ((void*)0), VAR_0->i_ino);


 return FUNC_0(&VAR_1, 0);
}
