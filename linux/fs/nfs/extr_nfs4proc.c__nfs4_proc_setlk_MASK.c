
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_inode {int rwsem; } ;
struct nfs4_state_owner {int so_delegreturn_mutex; } ;
struct nfs4_state {int inode; int flags; struct nfs4_state_owner* owner; } ;
struct file_lock {unsigned char fl_flags; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 struct nfs_inode* FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (struct nfs4_state*,int,struct file_lock*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,struct file_lock*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct nfs4_state *VAR_4, int VAR_5, struct file_lock *VAR_6)
{
 struct nfs_inode *VAR_7 = FUNC_0(VAR_4->inode);
 struct nfs4_state_owner *VAR_8 = VAR_4->owner;
 unsigned char VAR_9 = VAR_6->fl_flags;
 int VAR_10;

 VAR_6->fl_flags |= VAR_0;
 VAR_10 = FUNC_3(VAR_4->inode, VAR_6);
 if (VAR_10 < 0)
  goto out;
 FUNC_4(&VAR_8->so_delegreturn_mutex);
 FUNC_2(&VAR_7->rwsem);
 if (FUNC_6(VAR_2, &VAR_4->flags)) {


  VAR_6->fl_flags = VAR_9 & ~VAR_1;
  VAR_10 = FUNC_3(VAR_4->inode, VAR_6);
  FUNC_7(&VAR_7->rwsem);
  FUNC_5(&VAR_8->so_delegreturn_mutex);
  goto out;
 }
 FUNC_7(&VAR_7->rwsem);
 FUNC_5(&VAR_8->so_delegreturn_mutex);
 VAR_10 = FUNC_1(VAR_4, VAR_5, VAR_6, VAR_3);
out:
 VAR_6->fl_flags = VAR_9;
 return VAR_10;
}
