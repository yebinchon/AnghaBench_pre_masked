
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_state {int waitq; int seqlock; int state_lock; int lock_states; int count; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct nfs4_state* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static struct nfs4_state *
FUNC_6(void)
{
 struct nfs4_state *VAR_1;

 VAR_1 = FUNC_2(sizeof(*VAR_1), VAR_0);
 if (!VAR_1)
  return ((void*)0);
 FUNC_3(&VAR_1->count, 1);
 FUNC_0(&VAR_1->lock_states);
 FUNC_5(&VAR_1->state_lock);
 FUNC_4(&VAR_1->seqlock);
 FUNC_1(&VAR_1->waitq);
 return VAR_1;
}
