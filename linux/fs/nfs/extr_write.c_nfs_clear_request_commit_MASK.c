
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_page {int wb_page; int wb_flags; } ;
struct nfs_open_context {int dentry; } ;
struct nfs_commit_info {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {int commit_mutex; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 struct inode* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct nfs_commit_info*,struct inode*) ;
 struct nfs_open_context* FUNC_6 (struct nfs_page*) ;
 int FUNC_7 (struct nfs_page*,struct nfs_commit_info*) ;
 int FUNC_8 (struct nfs_page*,struct nfs_commit_info*) ;
 scalar_t__ FUNC_9 (int ,int *) ;

__attribute__((used)) static void
FUNC_10(struct nfs_page *VAR_1)
{
 if (FUNC_9(VAR_0, &VAR_1->wb_flags)) {
  struct nfs_open_context *VAR_2 = FUNC_6(VAR_1);
  struct inode *VAR_3 = FUNC_1(VAR_2->dentry);
  struct nfs_commit_info VAR_4;

  FUNC_5(&VAR_4, VAR_3);
  FUNC_2(&FUNC_0(VAR_3)->commit_mutex);
  if (!FUNC_8(VAR_1, &VAR_4)) {
   FUNC_7(VAR_1, &VAR_4);
  }
  FUNC_3(&FUNC_0(VAR_3)->commit_mutex);
  FUNC_4(VAR_1->wb_page);
 }
}
