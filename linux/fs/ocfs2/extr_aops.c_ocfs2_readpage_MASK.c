
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {scalar_t__ index; TYPE_1__* mapping; } ;
struct ocfs2_inode_info {int ip_dyn_features; int ip_alloc_sem; scalar_t__ ip_blkno; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {struct inode* host; } ;


 int VAR_0 ;
 struct ocfs2_inode_info* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct inode*) ;
 int FUNC_6 (int) ;
 int VAR_4 ;
 int FUNC_7 (struct inode*,int *,int ,struct page*) ;
 int FUNC_8 (struct inode*,int ) ;
 int FUNC_9 (struct inode*,struct page*) ;
 int FUNC_10 (unsigned long long,scalar_t__) ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct page*,int ,int ) ;

__attribute__((used)) static int FUNC_14(struct file *VAR_5, struct page *VAR_6)
{
 struct inode *VAR_7 = VAR_6->mapping->host;
 struct ocfs2_inode_info *VAR_8 = FUNC_0(VAR_7);
 loff_t VAR_9 = (loff_t)VAR_6->index << VAR_2;
 int VAR_10, VAR_11 = 1;

 FUNC_10((unsigned long long)VAR_8->ip_blkno,
        (VAR_6 ? VAR_6->index : 0));

 VAR_10 = FUNC_7(VAR_7, ((void*)0), 0, VAR_6);
 if (VAR_10 != 0) {
  if (VAR_10 == VAR_0)
   VAR_11 = 0;
  FUNC_6(VAR_10);
  goto out;
 }

 if (FUNC_4(&VAR_8->ip_alloc_sem) == 0) {




  VAR_10 = VAR_0;
  FUNC_11(VAR_6);
  VAR_11 = 0;
  FUNC_3(&VAR_8->ip_alloc_sem);
  FUNC_12(&VAR_8->ip_alloc_sem);
  goto out_inode_unlock;
 }
 if (VAR_9 >= FUNC_5(VAR_7)) {
  FUNC_13(VAR_6, 0, VAR_3);
  FUNC_1(VAR_6);
  VAR_10 = 0;
  goto out_alloc;
 }

 if (VAR_8->ip_dyn_features & VAR_1)
  VAR_10 = FUNC_9(VAR_7, VAR_6);
 else
  VAR_10 = FUNC_2(VAR_6, VAR_4);
 VAR_11 = 0;

out_alloc:
 FUNC_12(&VAR_8->ip_alloc_sem);
out_inode_unlock:
 FUNC_8(VAR_7, 0);
out:
 if (VAR_11)
  FUNC_11(VAR_6);
 return VAR_10;
}
