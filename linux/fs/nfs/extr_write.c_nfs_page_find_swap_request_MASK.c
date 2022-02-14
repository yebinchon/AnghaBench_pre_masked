
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct nfs_page {int wb_kref; struct nfs_page* wb_head; } ;
struct nfs_inode {int commit_mutex; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {struct inode* host; } ;


 struct nfs_inode* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct nfs_page* FUNC_6 (struct nfs_inode*,struct page*) ;
 TYPE_1__* FUNC_7 (struct page*) ;

__attribute__((used)) static struct nfs_page *
FUNC_8(struct page *VAR_0)
{
 struct inode *VAR_1 = FUNC_7(VAR_0)->host;
 struct nfs_inode *VAR_2 = FUNC_0(VAR_1);
 struct nfs_page *VAR_3 = ((void*)0);
 if (!FUNC_1(VAR_0))
  return ((void*)0);
 FUNC_4(&VAR_2->commit_mutex);
 if (FUNC_1(VAR_0)) {
  VAR_3 = FUNC_6(VAR_2,
   VAR_0);
  if (VAR_3) {
   FUNC_2(VAR_3->wb_head != VAR_3);
   FUNC_3(&VAR_3->wb_kref);
  }
 }
 FUNC_5(&VAR_2->commit_mutex);
 return VAR_3;
}
