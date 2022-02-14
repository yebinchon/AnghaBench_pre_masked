
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_session {struct nfs4_client* se_client; } ;
struct nfsd4_conn {int dummy; } ;
struct nfs4_client {int cl_lock; } ;


 int FUNC_0 (struct nfsd4_conn*,struct nfsd4_session*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct nfsd4_conn *VAR_0, struct nfsd4_session *VAR_1)
{
 struct nfs4_client *VAR_2 = VAR_1->se_client;

 FUNC_1(&VAR_2->cl_lock);
 FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_2->cl_lock);
}
