
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_backchannel_ctl {int bc_cb_sec; int bc_cb_program; } ;
union nfsd4_op_u {struct nfsd4_backchannel_ctl backchannel_ctl; } ;
struct svc_rqst {int dummy; } ;
struct nfsd_net {int client_lock; } ;
struct nfsd4_session {int se_client; int se_cb_sec; int se_cb_prog; } ;
struct nfsd4_compound_state {struct nfsd4_session* session; } ;
typedef scalar_t__ __be32 ;


 int FUNC_0 (struct svc_rqst*) ;
 struct nfsd_net* FUNC_1 (int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__be32 FUNC_6(struct svc_rqst *VAR_2,
  struct nfsd4_compound_state *VAR_3,
  union nfsd4_op_u *VAR_4)
{
 struct nfsd4_backchannel_ctl *VAR_5 = &VAR_4->backchannel_ctl;
 struct nfsd4_session *VAR_6 = VAR_3->session;
 struct nfsd_net *VAR_7 = FUNC_1(FUNC_0(VAR_2), VAR_1);
 __be32 VAR_8;

 VAR_8 = FUNC_2(&VAR_5->bc_cb_sec);
 if (VAR_8)
  return VAR_8;
 FUNC_4(&VAR_7->client_lock);
 VAR_6->se_cb_prog = VAR_5->bc_cb_program;
 VAR_6->se_cb_sec = VAR_5->bc_cb_sec;
 FUNC_5(&VAR_7->client_lock);

 FUNC_3(VAR_6->se_client);

 return VAR_0;
}
