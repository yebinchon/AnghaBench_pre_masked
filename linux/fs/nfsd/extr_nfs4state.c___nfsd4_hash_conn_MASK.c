
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_session {int se_conns; } ;
struct nfsd4_conn {int cn_persession; struct nfsd4_session* cn_session; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct nfsd4_conn *VAR_0, struct nfsd4_session *VAR_1)
{
 VAR_0->cn_session = VAR_1;
 FUNC_0(&VAR_0->cn_persession, &VAR_1->se_conns);
}
