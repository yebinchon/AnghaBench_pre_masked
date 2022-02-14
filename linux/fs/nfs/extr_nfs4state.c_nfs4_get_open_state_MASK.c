
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_inode {int open_states; } ;
struct nfs4_state_owner {int so_lock; int so_states; int so_count; } ;
struct nfs4_state {int open_states; struct inode* inode; int inode_states; struct nfs4_state_owner* owner; } ;
struct inode {int i_lock; } ;


 struct nfs_inode* FUNC_0 (struct inode*) ;
 struct nfs4_state* FUNC_1 (struct inode*,struct nfs4_state_owner*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 struct nfs4_state* FUNC_6 () ;
 int FUNC_7 (struct nfs4_state*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

struct nfs4_state *
FUNC_12(struct inode *VAR_0, struct nfs4_state_owner *VAR_1)
{
 struct nfs4_state *VAR_2, *VAR_3;
 struct nfs_inode *VAR_4 = FUNC_0(VAR_0);

 FUNC_8();
 VAR_2 = FUNC_1(VAR_0, VAR_1);
 FUNC_9();
 if (VAR_2)
  goto out;
 VAR_3 = FUNC_6();
 FUNC_10(&VAR_1->so_lock);
 FUNC_10(&VAR_0->i_lock);
 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2 == ((void*)0) && VAR_3 != ((void*)0)) {
  VAR_2 = VAR_3;
  VAR_2->owner = VAR_1;
  FUNC_2(&VAR_1->so_count);
  FUNC_4(&VAR_2->inode_states, &VAR_4->open_states);
  FUNC_3(VAR_0);
  VAR_2->inode = VAR_0;
  FUNC_11(&VAR_0->i_lock);


  FUNC_5(&VAR_2->open_states, &VAR_1->so_states);
  FUNC_11(&VAR_1->so_lock);
 } else {
  FUNC_11(&VAR_0->i_lock);
  FUNC_11(&VAR_1->so_lock);
  if (VAR_3)
   FUNC_7(VAR_3);
 }
out:
 return VAR_2;
}
