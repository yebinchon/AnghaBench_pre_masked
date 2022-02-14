
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct fuse_inode {struct inode inode; int forget; int lock; int mutex; scalar_t__ state; scalar_t__ orig_ino; scalar_t__ attr_version; scalar_t__ nlookup; scalar_t__ nodeid; scalar_t__ inval_mask; scalar_t__ i_time; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 struct fuse_inode* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,struct fuse_inode*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static struct inode *FUNC_5(struct super_block *VAR_2)
{
 struct fuse_inode *VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->i_time = 0;
 VAR_3->inval_mask = 0;
 VAR_3->nodeid = 0;
 VAR_3->nlookup = 0;
 VAR_3->attr_version = 0;
 VAR_3->orig_ino = 0;
 VAR_3->state = 0;
 FUNC_3(&VAR_3->mutex);
 FUNC_4(&VAR_3->lock);
 VAR_3->forget = FUNC_0();
 if (!VAR_3->forget) {
  FUNC_2(VAR_1, VAR_3);
  return ((void*)0);
 }

 return &VAR_3->inode;
}
