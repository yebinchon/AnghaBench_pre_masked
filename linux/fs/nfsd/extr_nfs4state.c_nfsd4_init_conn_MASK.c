
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int dummy; } ;
struct nfsd4_session {int se_client; } ;
struct nfsd4_conn {int cn_xpt_user; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nfsd4_conn*,struct nfsd4_session*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct nfsd4_conn*) ;

__attribute__((used)) static void FUNC_4(struct svc_rqst *VAR_0, struct nfsd4_conn *VAR_1, struct nfsd4_session *VAR_2)
{
 int VAR_3;

 FUNC_1(VAR_1, VAR_2);
 VAR_3 = FUNC_3(VAR_1);
 if (VAR_3)

  FUNC_0(&VAR_1->cn_xpt_user);

 FUNC_2(VAR_2->se_client);
}
