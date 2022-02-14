
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfsd4_session {int dummy; } ;
struct nfsd4_conn {struct nfsd4_session* cn_session; int cn_xprt; } ;
struct nfsd4_callback {struct nfs4_client* cb_clp; } ;
struct TYPE_2__ {int * cb_xprt; } ;
struct nfs4_client {int cl_flags; int cl_lock; TYPE_1__ cl_cb_conn; int * cl_cb_cred; int * cl_cb_client; } ;
struct nfs4_cb_conn {int cb_xprt; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nfsd4_conn* FUNC_1 (struct nfs4_client*) ;
 int FUNC_2 (int ,int*) ;
 int FUNC_3 (struct nfs4_cb_conn*,TYPE_1__*,int) ;
 int FUNC_4 (struct nfs4_client*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct nfs4_client*,struct nfs4_cb_conn*,struct nfsd4_session*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int ,int*) ;

__attribute__((used)) static void FUNC_13(struct nfsd4_callback *VAR_3)
{
 struct nfs4_cb_conn VAR_4;
 struct nfs4_client *VAR_5 = VAR_3->cb_clp;
 struct nfsd4_session *VAR_6 = ((void*)0);
 struct nfsd4_conn *VAR_7;
 int VAR_8;





 if (VAR_5->cl_cb_client) {
  FUNC_6(VAR_5->cl_cb_client);
  VAR_5->cl_cb_client = ((void*)0);
  FUNC_5(VAR_5->cl_cb_cred);
  VAR_5->cl_cb_cred = ((void*)0);
 }
 if (VAR_5->cl_cb_conn.cb_xprt) {
  FUNC_11(VAR_5->cl_cb_conn.cb_xprt);
  VAR_5->cl_cb_conn.cb_xprt = ((void*)0);
 }
 if (FUNC_12(VAR_1, &VAR_5->cl_flags))
  return;
 FUNC_8(&VAR_5->cl_lock);




 FUNC_0(!(VAR_5->cl_flags & VAR_0));
 FUNC_2(VAR_2, &VAR_5->cl_flags);
 FUNC_3(&VAR_4, &VAR_3->cb_clp->cl_cb_conn, sizeof(struct nfs4_cb_conn));
 VAR_7 = FUNC_1(VAR_5);
 if (VAR_7) {
  FUNC_10(VAR_7->cn_xprt);
  VAR_4.cb_xprt = VAR_7->cn_xprt;
  VAR_6 = VAR_7->cn_session;
 }
 FUNC_9(&VAR_5->cl_lock);

 VAR_8 = FUNC_7(VAR_5, &VAR_4, VAR_6);
 if (VAR_8) {
  FUNC_4(VAR_5, VAR_8);
  return;
 }
}
