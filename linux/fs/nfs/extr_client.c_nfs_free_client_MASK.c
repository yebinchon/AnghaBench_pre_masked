
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_client {struct nfs_client* cl_acceptor; struct nfs_client* cl_hostname; int cl_nfs_mod; int cl_net; int cl_rpcclient; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct nfs_client*) ;
 int FUNC_2 (struct nfs_client*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

void FUNC_6(struct nfs_client *VAR_0)
{
 FUNC_2(VAR_0);


 if (!FUNC_0(VAR_0->cl_rpcclient))
  FUNC_5(VAR_0->cl_rpcclient);

 FUNC_3(VAR_0->cl_net);
 FUNC_4(VAR_0->cl_nfs_mod);
 FUNC_1(VAR_0->cl_hostname);
 FUNC_1(VAR_0->cl_acceptor);
 FUNC_1(VAR_0);
}
