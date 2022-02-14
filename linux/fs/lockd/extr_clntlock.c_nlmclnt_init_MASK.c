
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nlmclnt_initdata {int nfs_version; int net; int nlmclnt_ops; int cred; int noresvport; int hostname; int protocol; int addrlen; int address; } ;
struct nlm_host {int h_nlmclnt_ops; int * h_rpcclnt; } ;


 int VAR_0 ;
 struct nlm_host* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int * FUNC_3 (struct nlm_host*) ;
 struct nlm_host* FUNC_4 (int ,int ,int ,int,int ,int ,int ,int ) ;
 int FUNC_5 (struct nlm_host*) ;

struct nlm_host *FUNC_6(const struct nlmclnt_initdata *VAR_1)
{
 struct nlm_host *VAR_2;
 u32 VAR_3 = (VAR_1->nfs_version == 2) ? 1 : 4;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_1->net, VAR_1->cred);
 if (VAR_4 < 0)
  return FUNC_0(VAR_4);

 VAR_2 = FUNC_4(VAR_1->address, VAR_1->addrlen,
       VAR_1->protocol, VAR_3,
       VAR_1->hostname, VAR_1->noresvport,
       VAR_1->net, VAR_1->cred);
 if (VAR_2 == ((void*)0))
  goto out_nohost;
 if (VAR_2->h_rpcclnt == ((void*)0) && FUNC_3(VAR_2) == ((void*)0))
  goto out_nobind;

 VAR_2->h_nlmclnt_ops = VAR_1->nlmclnt_ops;
 return VAR_2;
out_nobind:
 FUNC_5(VAR_2);
out_nohost:
 FUNC_1(VAR_1->net);
 return FUNC_0(-VAR_0);
}
