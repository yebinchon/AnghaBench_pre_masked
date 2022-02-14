
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_state {int state_lock; } ;
struct nfs4_lock_state {int ls_stateid; struct nfs4_state* ls_state; } ;
typedef int nfs4_stateid ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static bool FUNC_4(nfs4_stateid *VAR_0,
  struct nfs4_lock_state *VAR_1)
{
 struct nfs4_state *VAR_2 = VAR_1->ls_state;
 bool VAR_3;

 FUNC_2(&VAR_2->state_lock);
 VAR_3 = !FUNC_1(VAR_0, &VAR_1->ls_stateid);
 FUNC_0(VAR_0, &VAR_1->ls_stateid);
 FUNC_3(&VAR_2->state_lock);
 return VAR_3;
}
