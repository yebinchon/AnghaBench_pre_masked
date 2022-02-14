
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v9fs_inode {int fscache; } ;
struct page {int dummy; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct page*) ;
 struct v9fs_inode* FUNC_1 (struct inode*) ;
 int FUNC_2 (int ,struct page*) ;
 int FUNC_3 (int ,char*,struct inode*,struct page*) ;

void FUNC_4(struct inode *VAR_1, struct page *VAR_2)
{
 const struct v9fs_inode *VAR_3 = FUNC_1(VAR_1);
 FUNC_3(VAR_0, "inode %p page %p\n", VAR_1, VAR_2);
 if (FUNC_0(VAR_2))
  FUNC_2(VAR_3->fscache, VAR_2);
}
