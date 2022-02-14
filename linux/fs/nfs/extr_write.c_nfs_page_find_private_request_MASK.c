
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct nfs_page {int wb_kref; struct nfs_page* wb_head; } ;
struct address_space {int private_lock; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 struct nfs_page* FUNC_3 (struct page*) ;
 struct address_space* FUNC_4 (struct page*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static struct nfs_page *
FUNC_7(struct page *VAR_0)
{
 struct address_space *VAR_1 = FUNC_4(VAR_0);
 struct nfs_page *VAR_2;

 if (!FUNC_0(VAR_0))
  return ((void*)0);
 FUNC_5(&VAR_1->private_lock);
 VAR_2 = FUNC_3(VAR_0);
 if (VAR_2) {
  FUNC_1(VAR_2->wb_head != VAR_2);
  FUNC_2(&VAR_2->wb_kref);
 }
 FUNC_6(&VAR_1->private_lock);
 return VAR_2;
}
