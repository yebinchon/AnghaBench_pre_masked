
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_state_owner {int so_lock; } ;
struct nfs4_state {int open_states; int inode_states; int count; struct nfs4_state_owner* owner; struct inode* inode; } ;
struct inode {int i_lock; } ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nfs4_state*) ;
 int FUNC_4 (struct nfs4_state_owner*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct nfs4_state *VAR_0)
{
 struct inode *VAR_1 = VAR_0->inode;
 struct nfs4_state_owner *VAR_2 = VAR_0->owner;

 if (!FUNC_5(&VAR_0->count, &VAR_2->so_lock))
  return;
 FUNC_6(&VAR_1->i_lock);
 FUNC_2(&VAR_0->inode_states);
 FUNC_1(&VAR_0->open_states);
 FUNC_7(&VAR_1->i_lock);
 FUNC_7(&VAR_2->so_lock);
 FUNC_0(VAR_1);
 FUNC_3(VAR_0);
 FUNC_4(VAR_2);
}
