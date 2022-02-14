
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_file {int fi_rcu; int fi_delegations; int fi_clnt_odstate; int fi_hash; int fi_ref; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int VAR_1 ;

void
FUNC_7(struct nfs4_file *VAR_2)
{
 FUNC_4(&VAR_1);

 if (FUNC_5(&VAR_2->fi_ref, &VAR_1)) {
  FUNC_2(&VAR_2->fi_hash);
  FUNC_6(&VAR_1);
  FUNC_0(!FUNC_3(&VAR_2->fi_clnt_odstate));
  FUNC_0(!FUNC_3(&VAR_2->fi_delegations));
  FUNC_1(&VAR_2->fi_rcu, VAR_0);
 }
}
