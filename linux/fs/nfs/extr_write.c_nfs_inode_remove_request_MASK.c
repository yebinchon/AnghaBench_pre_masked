
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_page {int wb_flags; scalar_t__ wb_page; struct nfs_page* wb_head; } ;
struct nfs_inode {int nrequests; } ;
struct inode {int dummy; } ;
struct address_space {int private_lock; struct inode* host; } ;


 int FUNC_0 (scalar_t__) ;
 struct nfs_inode* FUNC_1 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (struct nfs_page*,int ) ;
 int FUNC_7 (struct nfs_page*) ;
 struct address_space* FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int ,int *) ;

__attribute__((used)) static void FUNC_13(struct nfs_page *VAR_3)
{
 struct address_space *VAR_4 = FUNC_8(VAR_3->wb_page);
 struct inode *VAR_5 = VAR_4->host;
 struct nfs_inode *VAR_6 = FUNC_1(VAR_5);
 struct nfs_page *VAR_7;

 if (FUNC_6(VAR_3, VAR_2)) {
  VAR_7 = VAR_3->wb_head;

  FUNC_10(&VAR_4->private_lock);
  if (FUNC_5(VAR_7->wb_page && !FUNC_2(VAR_7->wb_page))) {
   FUNC_9(VAR_7->wb_page, 0);
   FUNC_0(VAR_7->wb_page);
   FUNC_4(VAR_1, &VAR_7->wb_flags);
  }
  FUNC_11(&VAR_4->private_lock);
 }

 if (FUNC_12(VAR_0, &VAR_3->wb_flags)) {
  FUNC_7(VAR_3);
  FUNC_3(&VAR_6->nrequests);
 }
}
