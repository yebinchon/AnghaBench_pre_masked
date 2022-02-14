
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct nfs_page {int dummy; } ;
struct inode {int dummy; } ;


 scalar_t__ FUNC_0 (struct nfs_page*) ;
 int FUNC_1 (struct nfs_page*) ;
 int FUNC_2 (struct nfs_page*) ;
 struct nfs_page* FUNC_3 (struct page*) ;
 int FUNC_4 (struct nfs_page*) ;
 int FUNC_5 (struct page*) ;

int FUNC_6(struct inode *VAR_0, struct page *VAR_1)
{
 struct nfs_page *VAR_2;
 int VAR_3 = 0;

 FUNC_5(VAR_1);



 VAR_2 = FUNC_3(VAR_1);

 if (FUNC_0(VAR_2)) {
  VAR_3 = FUNC_1(VAR_2);
 } else if (VAR_2) {




  FUNC_2(VAR_2);
  FUNC_4(VAR_2);
 }

 return VAR_3;
}
