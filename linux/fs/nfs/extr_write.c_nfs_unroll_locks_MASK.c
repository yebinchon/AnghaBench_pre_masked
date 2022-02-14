
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_page {int wb_kref; struct nfs_page* wb_this_page; } ;
struct inode {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nfs_page*) ;

__attribute__((used)) static void
FUNC_2(struct inode *VAR_0, struct nfs_page *VAR_1,
     struct nfs_page *VAR_2)
{
 struct nfs_page *VAR_3;


 for (VAR_3 = VAR_1->wb_this_page ; VAR_3 != VAR_2; VAR_3 = VAR_3->wb_this_page) {
  if (!FUNC_0(&VAR_3->wb_kref))
   continue;
  FUNC_1(VAR_3);
 }
}
