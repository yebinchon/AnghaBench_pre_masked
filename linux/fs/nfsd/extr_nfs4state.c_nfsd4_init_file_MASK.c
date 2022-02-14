
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_file {int fi_had_conflict; int fi_hash; int fi_lo_recalls; int fi_lo_states; int fi_access; int fi_fds; scalar_t__ fi_share_deny; int * fi_deleg_file; int fi_fhandle; int fi_clnt_odstate; int fi_delegations; int fi_stateids; int fi_lock; int fi_ref; } ;
struct knfsd_fh {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,struct knfsd_fh*) ;
 int * VAR_0 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_8(struct knfsd_fh *VAR_2, unsigned int VAR_3,
    struct nfs4_file *VAR_4)
{
 FUNC_4(&VAR_1);

 FUNC_6(&VAR_4->fi_ref, 1);
 FUNC_7(&VAR_4->fi_lock);
 FUNC_0(&VAR_4->fi_stateids);
 FUNC_0(&VAR_4->fi_delegations);
 FUNC_0(&VAR_4->fi_clnt_odstate);
 FUNC_2(&VAR_4->fi_fhandle, VAR_2);
 VAR_4->fi_deleg_file = ((void*)0);
 VAR_4->fi_had_conflict = 0;
 VAR_4->fi_share_deny = 0;
 FUNC_5(VAR_4->fi_fds, 0, sizeof(VAR_4->fi_fds));
 FUNC_5(VAR_4->fi_access, 0, sizeof(VAR_4->fi_access));




 FUNC_3(&VAR_4->fi_hash, &VAR_0[VAR_3]);
}
