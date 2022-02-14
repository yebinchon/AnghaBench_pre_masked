
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct nfs_open_context {int error; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {struct inode* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (struct page*) ;
 int FUNC_3 (char*,struct page*,int ,int ) ;
 struct nfs_open_context* FUNC_4 (int ) ;
 int FUNC_5 (struct inode*,int ,int) ;
 int FUNC_6 (struct file*) ;
 struct nfs_open_context* FUNC_7 (struct inode*,int *,int ) ;
 int FUNC_8 (struct inode*,int ) ;
 int FUNC_9 (struct nfs_open_context*,struct inode*,struct page*) ;
 int FUNC_10 (struct nfs_open_context*,struct inode*,struct page*) ;
 int FUNC_11 (struct inode*,struct page*) ;
 TYPE_1__* FUNC_12 (struct page*) ;
 int FUNC_13 (struct page*) ;
 int FUNC_14 (struct nfs_open_context*) ;
 int FUNC_15 (struct page*) ;
 int FUNC_16 (struct page*) ;
 int FUNC_17 (int *,int ) ;

int FUNC_18(struct file *VAR_6, struct page *VAR_7)
{
 struct nfs_open_context *VAR_8;
 struct inode *VAR_9 = FUNC_12(VAR_7)->host;
 int VAR_10;

 FUNC_3("NFS: nfs_readpage (%p %ld@%lu)\n",
  VAR_7, VAR_5, FUNC_13(VAR_7));
 FUNC_8(VAR_9, VAR_4);
 FUNC_5(VAR_9, VAR_3, 1);
 VAR_10 = FUNC_11(VAR_9, VAR_7);
 if (VAR_10)
  goto out_unlock;
 if (FUNC_2(VAR_7))
  goto out_unlock;

 VAR_10 = -VAR_1;
 if (FUNC_1(VAR_9))
  goto out_unlock;

 if (VAR_6 == ((void*)0)) {
  VAR_10 = -VAR_0;
  VAR_8 = FUNC_7(VAR_9, ((void*)0), VAR_2);
  if (VAR_8 == ((void*)0))
   goto out_unlock;
 } else
  VAR_8 = FUNC_4(FUNC_6(VAR_6));

 if (!FUNC_0(VAR_9)) {
  VAR_10 = FUNC_10(VAR_8, VAR_9, VAR_7);
  if (VAR_10 == 0)
   goto out;
 }

 FUNC_17(&VAR_8->error, 0);
 VAR_10 = FUNC_9(VAR_8, VAR_9, VAR_7);
 if (!VAR_10) {
  VAR_10 = FUNC_16(VAR_7);
  if (!FUNC_2(VAR_7) && !VAR_10)
   VAR_10 = FUNC_17(&VAR_8->error, 0);
 }
out:
 FUNC_14(VAR_8);
 return VAR_10;
out_unlock:
 FUNC_15(VAR_7);
 return VAR_10;
}
