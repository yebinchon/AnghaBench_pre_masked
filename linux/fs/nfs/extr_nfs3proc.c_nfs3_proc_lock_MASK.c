
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_open_context {int flags; } ;
struct nfs_lock_context {int dummy; } ;
struct inode {int dummy; } ;
struct file_lock {int fl_flags; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int nlm_host; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct nfs_lock_context*) ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 struct inode* FUNC_2 (struct file*) ;
 struct nfs_open_context* FUNC_3 (struct file*) ;
 struct nfs_lock_context* FUNC_4 (struct nfs_open_context*) ;
 int FUNC_5 (struct nfs_lock_context*) ;
 int FUNC_6 (int ,int,struct file_lock*,struct nfs_lock_context*) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static int
FUNC_8(struct file *VAR_2, int VAR_3, struct file_lock *VAR_4)
{
 struct inode *VAR_5 = FUNC_2(VAR_2);
 struct nfs_lock_context *VAR_6 = ((void*)0);
 struct nfs_open_context *VAR_7 = FUNC_3(VAR_2);
 int VAR_8;

 if (VAR_4->fl_flags & VAR_0) {
  VAR_6 = FUNC_4(VAR_7);
  if (FUNC_0(VAR_6))
   VAR_6 = ((void*)0);
  else
   FUNC_7(VAR_1, &VAR_7->flags);
 }

 VAR_8 = FUNC_6(FUNC_1(VAR_5)->nlm_host, VAR_3, VAR_4, VAR_6);

 if (VAR_6)
  FUNC_5(VAR_6);

 return VAR_8;
}
