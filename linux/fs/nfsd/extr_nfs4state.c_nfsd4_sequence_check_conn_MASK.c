
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_session {struct nfs4_client* se_client; } ;
struct nfsd4_conn {int cn_xpt_user; int cn_xprt; } ;
struct nfs4_client {int cl_lock; scalar_t__ cl_mach_cred; } ;
typedef int __be32 ;


 struct nfsd4_conn* FUNC_0 (int ,struct nfsd4_session*) ;
 int FUNC_1 (struct nfsd4_conn*,struct nfsd4_session*) ;
 int FUNC_2 (struct nfsd4_conn*) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct nfsd4_conn*) ;
 int VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static __be32 FUNC_7(struct nfsd4_conn *VAR_2, struct nfsd4_session *VAR_3)
{
 struct nfs4_client *VAR_4 = VAR_3->se_client;
 struct nfsd4_conn *VAR_5;
 __be32 VAR_6 = VAR_0;
 int VAR_7;

 FUNC_5(&VAR_4->cl_lock);
 VAR_5 = FUNC_0(VAR_2->cn_xprt, VAR_3);
 if (VAR_5)
  goto out_free;
 VAR_6 = VAR_1;
 if (VAR_4->cl_mach_cred)
  goto out_free;
 FUNC_1(VAR_2, VAR_3);
 FUNC_6(&VAR_4->cl_lock);
 VAR_7 = FUNC_4(VAR_2);
 if (VAR_7)

  FUNC_3(&VAR_2->cn_xpt_user);
 return VAR_0;
out_free:
 FUNC_6(&VAR_4->cl_lock);
 FUNC_2(VAR_2);
 return VAR_6;
}
