
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_netobj {int dummy; } ;
struct TYPE_2__ {int * data; } ;
struct nfs4_client {TYPE_1__ cl_name; int cl_cb_waitq; int cl_lock; int async_lock; int async_copies; int cl_lo_states; int cl_revoked; int cl_lru; int cl_delegations; int cl_openowners; int cl_idhash; int cl_cb_state; int cl_rpc_users; int cl_stateids; int cl_sessions; int * cl_ownerstr_hashtbl; } ;
struct list_head {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int,int,int ) ;
 int FUNC_5 (int ,struct nfs4_client*) ;
 struct nfs4_client* FUNC_6 (int ,int ) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__*,struct xdr_netobj*,int ) ;

__attribute__((used)) static struct nfs4_client *FUNC_10(struct xdr_netobj VAR_4)
{
 struct nfs4_client *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_6(VAR_3, VAR_0);
 if (VAR_5 == ((void*)0))
  return ((void*)0);
 FUNC_9(&VAR_5->cl_name, &VAR_4, VAR_0);
 if (VAR_5->cl_name.data == ((void*)0))
  goto err_no_name;
 VAR_5->cl_ownerstr_hashtbl = FUNC_4(VAR_2,
       sizeof(struct list_head),
       VAR_0);
 if (!VAR_5->cl_ownerstr_hashtbl)
  goto err_no_hashtbl;
 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
  FUNC_0(&VAR_5->cl_ownerstr_hashtbl[VAR_6]);
 FUNC_0(&VAR_5->cl_sessions);
 FUNC_2(&VAR_5->cl_stateids);
 FUNC_1(&VAR_5->cl_rpc_users, 0);
 VAR_5->cl_cb_state = VAR_1;
 FUNC_0(&VAR_5->cl_idhash);
 FUNC_0(&VAR_5->cl_openowners);
 FUNC_0(&VAR_5->cl_delegations);
 FUNC_0(&VAR_5->cl_lru);
 FUNC_0(&VAR_5->cl_revoked);



 FUNC_0(&VAR_5->async_copies);
 FUNC_8(&VAR_5->async_lock);
 FUNC_8(&VAR_5->cl_lock);
 FUNC_7(&VAR_5->cl_cb_waitq, "Backchannel slot table");
 return VAR_5;
err_no_hashtbl:
 FUNC_3(VAR_5->cl_name.data);
err_no_name:
 FUNC_5(VAR_3, VAR_5);
 return ((void*)0);
}
