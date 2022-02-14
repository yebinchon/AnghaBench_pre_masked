
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_rqst {int dummy; } ;
struct sockaddr {int dummy; } ;
struct nfsd_net {int * sessionid_hashtbl; } ;
struct nfsd4_session {int se_cb_seq_nr; int se_perclnt; int se_hash; int se_sessionid; int se_ref; int se_cb_sec; int se_cb_prog; int se_flags; int se_conns; struct nfs4_client* se_client; } ;
struct nfsd4_create_session {int cb_sec; int callback_prog; int flags; } ;
struct TYPE_2__ {int cb_addrlen; int cb_addr; } ;
struct nfs4_client {TYPE_1__ cl_cb_conn; int cl_lock; int cl_sessions; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct svc_rqst*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct nfsd4_session*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 struct nfsd_net* FUNC_6 (int ,int ) ;
 int VAR_0 ;
 int FUNC_7 (struct sockaddr*,struct sockaddr*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 struct sockaddr* FUNC_10 (struct svc_rqst*) ;
 int FUNC_11 (struct sockaddr*) ;

__attribute__((used)) static void FUNC_12(struct svc_rqst *VAR_1, struct nfsd4_session *VAR_2, struct nfs4_client *VAR_3, struct nfsd4_create_session *VAR_4)
{
 int VAR_5;
 struct nfsd_net *VAR_6 = FUNC_6(FUNC_1(VAR_1), VAR_0);

 VAR_2->se_client = VAR_3;
 FUNC_3(VAR_2);

 FUNC_0(&VAR_2->se_conns);

 VAR_2->se_cb_seq_nr = 1;
 VAR_2->se_flags = VAR_4->flags;
 VAR_2->se_cb_prog = VAR_4->callback_prog;
 VAR_2->se_cb_sec = VAR_4->cb_sec;
 FUNC_2(&VAR_2->se_ref, 0);
 VAR_5 = FUNC_4(&VAR_2->se_sessionid);
 FUNC_5(&VAR_2->se_hash, &VAR_6->sessionid_hashtbl[VAR_5]);
 FUNC_8(&VAR_3->cl_lock);
 FUNC_5(&VAR_2->se_perclnt, &VAR_3->cl_sessions);
 FUNC_9(&VAR_3->cl_lock);

 {
  struct sockaddr *VAR_7 = FUNC_10(VAR_1);







  FUNC_7((struct sockaddr *)&VAR_3->cl_cb_conn.cb_addr, VAR_7);
  VAR_3->cl_cb_conn.cb_addrlen = FUNC_11(VAR_7);
 }
}
