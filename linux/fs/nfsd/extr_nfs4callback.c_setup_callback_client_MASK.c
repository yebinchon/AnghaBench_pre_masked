
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct rpc_timeout {int to_initval; int to_maxval; int to_retries; } ;
struct rpc_create_args {int version; int flags; int protocol; scalar_t__ authflavor; int prognumber; TYPE_4__* bc_xprt; scalar_t__ client_name; int cred; int * program; struct rpc_timeout* timeout; struct sockaddr* saddress; int addrsize; struct sockaddr* address; int net; } ;
struct rpc_clnt {int dummy; } ;
struct TYPE_10__ {scalar_t__ flavor; } ;
struct nfsd4_session {TYPE_5__ se_cb_sec; int se_cb_prog; } ;
struct TYPE_7__ {TYPE_4__* cb_xprt; } ;
struct TYPE_6__ {scalar_t__ cr_flavor; scalar_t__ cr_principal; } ;
struct nfs4_client {scalar_t__ cl_minorversion; struct cred const* cl_cb_cred; struct rpc_clnt* cl_cb_client; struct nfsd4_session* cl_cb_session; TYPE_2__ cl_cb_conn; int cl_cb_ident; TYPE_1__ cl_cred; int net; } ;
struct nfs4_cb_conn {TYPE_4__* cb_xprt; int cb_ident; int cb_prog; int cb_saddr; int cb_addrlen; int cb_addr; } ;
struct cred {int dummy; } ;
struct TYPE_9__ {TYPE_3__* xpt_class; } ;
struct TYPE_8__ {int xcl_ident; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct rpc_clnt*) ;
 int FUNC_1 (struct rpc_clnt*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int) ;
 struct cred* FUNC_4 (struct nfs4_client*,struct rpc_clnt*,struct nfsd4_session*) ;
 int FUNC_5 (int ) ;
 struct rpc_clnt* FUNC_6 (struct rpc_create_args*) ;
 int FUNC_7 (struct rpc_clnt*) ;

__attribute__((used)) static int FUNC_8(struct nfs4_client *VAR_8, struct nfs4_cb_conn *VAR_9, struct nfsd4_session *VAR_10)
{
 int VAR_11 = FUNC_5(VAR_8->net);
 struct rpc_timeout VAR_12 = {
  .to_initval = VAR_11,
  .to_retries = 0,
  .to_maxval = VAR_11,
 };
 struct rpc_create_args VAR_13 = {
  .net = VAR_8->net,
  .address = (struct sockaddr *) &VAR_9->cb_addr,
  .addrsize = VAR_9->cb_addrlen,
  .saddress = (struct sockaddr *) &VAR_9->cb_saddr,
  .timeout = &VAR_12,
  .program = &VAR_7,
  .version = 1,
  .flags = (VAR_3 | VAR_4),
  .cred = FUNC_2(),
 };
 struct rpc_clnt *VAR_14;
 const struct cred *VAR_15;

 if (VAR_8->cl_minorversion == 0) {
  if (!VAR_8->cl_cred.cr_principal &&
    (VAR_8->cl_cred.cr_flavor >= VAR_2))
   return -VAR_0;
  VAR_13.client_name = VAR_8->cl_cred.cr_principal;
  VAR_13.prognumber = VAR_9->cb_prog;
  VAR_13.protocol = VAR_6;
  VAR_13.authflavor = VAR_8->cl_cred.cr_flavor;
  VAR_8->cl_cb_ident = VAR_9->cb_ident;
 } else {
  if (!VAR_9->cb_xprt)
   return -VAR_0;
  VAR_8->cl_cb_conn.cb_xprt = VAR_9->cb_xprt;
  VAR_8->cl_cb_session = VAR_10;
  VAR_13.bc_xprt = VAR_9->cb_xprt;
  VAR_13.prognumber = VAR_8->cl_cb_session->se_cb_prog;
  VAR_13.protocol = VAR_9->cb_xprt->xpt_class->xcl_ident |
    VAR_5;
  VAR_13.authflavor = VAR_10->se_cb_sec.flavor;
 }

 VAR_14 = FUNC_6(&VAR_13);
 if (FUNC_0(VAR_14)) {
  FUNC_3("NFSD: couldn't create callback client: %ld\n",
   FUNC_1(VAR_14));
  return FUNC_1(VAR_14);
 }
 VAR_15 = FUNC_4(VAR_8, VAR_14, VAR_10);
 if (!VAR_15) {
  FUNC_7(VAR_14);
  return -VAR_1;
 }
 VAR_8->cl_cb_client = VAR_14;
 VAR_8->cl_cb_cred = VAR_15;
 return 0;
}
