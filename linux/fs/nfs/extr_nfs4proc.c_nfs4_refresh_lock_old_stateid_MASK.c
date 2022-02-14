
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct nfs4_state {int state_lock; } ;
struct TYPE_9__ {int seqid; } ;
struct nfs4_lock_state {TYPE_4__ ls_stateid; struct nfs4_state* ls_state; } ;
struct TYPE_8__ {int seqid; } ;
typedef TYPE_1__ nfs4_stateid ;


 int FUNC_0 (TYPE_4__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_4__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static bool FUNC_5(nfs4_stateid *VAR_0,
  struct nfs4_lock_state *VAR_1)
{
 struct nfs4_state *VAR_2 = VAR_1->ls_state;
 bool VAR_3 = 0;

 FUNC_3(&VAR_2->state_lock);
 if (!FUNC_1(VAR_0, &VAR_1->ls_stateid))
  goto out;
 if (!FUNC_0(&VAR_1->ls_stateid, VAR_0))
  FUNC_2(VAR_0);
 else
  VAR_0->seqid = VAR_1->ls_stateid.seqid;
 VAR_3 = 1;
out:
 FUNC_4(&VAR_2->state_lock);
 return VAR_3;
}
