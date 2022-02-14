
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int index; } ;
struct key {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int vnode; int vid; } ;
struct afs_vnode {int wb_lock; int vfs_inode; TYPE_1__ fid; } ;
struct address_space {int dummy; } ;
typedef scalar_t__ loff_t ;


 struct afs_vnode* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int ,int ,int ) ;
 struct key* FUNC_6 (struct file*) ;
 int FUNC_7 (struct afs_vnode*,struct key*,scalar_t__,unsigned int,struct page*) ;
 int FUNC_8 (struct file*) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *,scalar_t__) ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 (struct page*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct page*) ;

int FUNC_16(struct file *VAR_0, struct address_space *VAR_1,
    loff_t VAR_2, unsigned VAR_3, unsigned VAR_4,
    struct page *VAR_5, void *VAR_6)
{
 struct afs_vnode *VAR_7 = FUNC_0(FUNC_8(VAR_0));
 struct key *VAR_8 = FUNC_6(VAR_0);
 loff_t VAR_9, VAR_10;
 int VAR_11;

 FUNC_5("{%llx:%llu},{%lx}",
        VAR_7->fid.vid, VAR_7->fid.vnode, VAR_5->index);

 VAR_10 = VAR_2 + VAR_4;

 VAR_9 = FUNC_9(&VAR_7->vfs_inode);
 if (VAR_10 > VAR_9) {
  FUNC_13(&VAR_7->wb_lock);
  VAR_9 = FUNC_9(&VAR_7->vfs_inode);
  if (VAR_10 > VAR_9)
   FUNC_10(&VAR_7->vfs_inode, VAR_10);
  FUNC_14(&VAR_7->wb_lock);
 }

 if (!FUNC_2(VAR_5)) {
  if (VAR_4 < VAR_3) {




   VAR_11 = FUNC_7(VAR_7, VAR_8, VAR_2 + VAR_4,
         VAR_3 - VAR_4, VAR_5);
   if (VAR_11 < 0)
    goto out;
  }
  FUNC_3(VAR_5);
 }

 FUNC_12(VAR_5);
 if (FUNC_1(VAR_5))
  FUNC_4("dirtied");
 VAR_11 = VAR_4;

out:
 FUNC_15(VAR_5);
 FUNC_11(VAR_5);
 return VAR_11;
}
