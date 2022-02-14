
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct dentry* dentry; TYPE_1__* mnt; } ;
struct nameidata {unsigned int seq; struct inode* inode; TYPE_2__ path; int m_seq; int root; } ;
struct TYPE_5__ {struct dentry* mnt_root; } ;
struct mount {TYPE_1__ mnt; struct dentry* mnt_mountpoint; struct mount* mnt_parent; } ;
struct inode {int dummy; } ;
struct dentry {int d_seq; struct inode* d_inode; struct dentry* d_parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mount* FUNC_0 (TYPE_1__*,struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int *) ;
 void* FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned int) ;
 int FUNC_6 (int *,int ) ;
 struct mount* FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct nameidata *VAR_3)
{
 struct inode *VAR_4 = VAR_3->inode;

 while (1) {
  if (FUNC_3(&VAR_3->path, &VAR_3->root))
   break;
  if (VAR_3->path.dentry != VAR_3->path.mnt->mnt_root) {
   struct dentry *VAR_5 = VAR_3->path.dentry;
   struct dentry *VAR_6 = VAR_5->d_parent;
   unsigned VAR_7;

   VAR_4 = VAR_6->d_inode;
   VAR_7 = FUNC_4(&VAR_6->d_seq);
   if (FUNC_8(FUNC_5(&VAR_5->d_seq, VAR_3->seq)))
    return -VAR_0;
   VAR_3->path.dentry = VAR_6;
   VAR_3->seq = VAR_7;
   if (FUNC_8(!FUNC_2(&VAR_3->path)))
    return -VAR_1;
   break;
  } else {
   struct mount *VAR_8 = FUNC_7(VAR_3->path.mnt);
   struct mount *VAR_9 = VAR_8->mnt_parent;
   struct dentry *VAR_10 = VAR_8->mnt_mountpoint;
   struct inode *VAR_11 = VAR_10->d_inode;
   unsigned VAR_12 = FUNC_4(&VAR_10->d_seq);
   if (FUNC_8(FUNC_6(&VAR_2, VAR_3->m_seq)))
    return -VAR_0;
   if (&VAR_9->mnt == VAR_3->path.mnt)
    break;

   VAR_3->path.dentry = VAR_10;
   VAR_3->path.mnt = &VAR_9->mnt;
   VAR_4 = VAR_11;
   VAR_3->seq = VAR_12;
  }
 }
 while (FUNC_8(FUNC_1(VAR_3->path.dentry))) {
  struct mount *VAR_13;
  VAR_13 = FUNC_0(VAR_3->path.mnt, VAR_3->path.dentry);
  if (FUNC_8(FUNC_6(&VAR_2, VAR_3->m_seq)))
   return -VAR_0;
  if (!VAR_13)
   break;
  VAR_3->path.mnt = &VAR_13->mnt;
  VAR_3->path.dentry = VAR_13->mnt.mnt_root;
  VAR_4 = VAR_3->path.dentry->d_inode;
  VAR_3->seq = FUNC_4(&VAR_3->path.dentry->d_seq);
 }
 VAR_3->inode = VAR_4;
 return 0;
}
