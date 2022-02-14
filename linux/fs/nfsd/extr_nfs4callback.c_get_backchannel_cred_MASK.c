
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_clnt {char* cl_principal; } ;
struct TYPE_3__ {int gid; int uid; } ;
struct nfsd4_session {TYPE_1__ se_cb_sec; } ;
struct TYPE_4__ {char* cr_targ_princ; } ;
struct nfs4_client {scalar_t__ cl_minorversion; TYPE_2__ cl_cred; } ;
typedef struct cred {int gid; int uid; } const cred ;


 struct cred const* FUNC_0 (int ) ;
 struct cred const* FUNC_1 (int *) ;
 int FUNC_2 () ;

__attribute__((used)) static const struct cred *FUNC_3(struct nfs4_client *VAR_0, struct rpc_clnt *VAR_1, struct nfsd4_session *VAR_2)
{
 if (VAR_0->cl_minorversion == 0) {
  VAR_1->cl_principal = VAR_0->cl_cred.cr_targ_princ ?
   VAR_0->cl_cred.cr_targ_princ : "nfs";

  return FUNC_0(FUNC_2());
 } else {
  struct cred *VAR_3;

  VAR_3 = FUNC_1(((void*)0));
  if (!VAR_3)
   return ((void*)0);

  VAR_3->uid = VAR_2->se_cb_sec.uid;
  VAR_3->gid = VAR_2->se_cb_sec.gid;
  return VAR_3;
 }
}
