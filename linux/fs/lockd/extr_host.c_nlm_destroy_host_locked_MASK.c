
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_clnt {int dummy; } ;
struct nlm_host {int h_cred; struct rpc_clnt* h_rpcclnt; int h_nsmhandle; int h_hash; int h_name; int net; } ;
struct lockd_net {int nrhosts; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nlm_host*) ;
 int VAR_0 ;
 struct lockd_net* FUNC_3 (int ,int ) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct nlm_host*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct rpc_clnt*) ;

__attribute__((used)) static void FUNC_8(struct nlm_host *VAR_2)
{
 struct rpc_clnt *VAR_3;
 struct lockd_net *VAR_4 = FUNC_3(VAR_2->net, VAR_0);

 FUNC_0("lockd: destroy host %s\n", VAR_2->h_name);

 FUNC_1(&VAR_2->h_hash);

 FUNC_5(VAR_2);
 FUNC_4(VAR_2->h_nsmhandle);

 VAR_3 = VAR_2->h_rpcclnt;
 if (VAR_3 != ((void*)0))
  FUNC_7(VAR_3);
 FUNC_6(VAR_2->h_cred);
 FUNC_2(VAR_2);

 VAR_4->nrhosts--;
 VAR_1--;
}
