
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct svc_serv {int dummy; } ;
struct rpc_xprt {struct net* xprt_net; } ;
struct nfs_callback_data {int * serv; int users; } ;
struct net {int dummy; } ;


 scalar_t__ FUNC_0 (struct svc_serv*) ;
 int FUNC_1 (struct svc_serv*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct svc_serv* FUNC_5 (size_t) ;
 int FUNC_6 (size_t,struct svc_serv*,struct net*) ;
 struct nfs_callback_data* VAR_0 ;
 int VAR_1 ;
 int FUNC_7 (size_t,struct rpc_xprt*,struct svc_serv*) ;
 int FUNC_8 (size_t,struct svc_serv*,struct net*,struct rpc_xprt*) ;
 int FUNC_9 (struct svc_serv*) ;

int FUNC_10(u32 VAR_2, struct rpc_xprt *VAR_3)
{
 struct svc_serv *VAR_4;
 struct nfs_callback_data *VAR_5 = &VAR_0[VAR_2];
 int VAR_6;
 struct net *VAR_7 = VAR_3->xprt_net;

 FUNC_3(&VAR_1);

 VAR_4 = FUNC_5(VAR_2);
 if (FUNC_0(VAR_4)) {
  VAR_6 = FUNC_1(VAR_4);
  goto err_create;
 }

 VAR_6 = FUNC_8(VAR_2, VAR_4, VAR_7, VAR_3);
 if (VAR_6 < 0)
  goto err_net;

 VAR_6 = FUNC_7(VAR_2, VAR_3, VAR_4);
 if (VAR_6 < 0)
  goto err_start;

 VAR_5->users++;






err_net:
 if (!VAR_5->users)
  VAR_5->serv = ((void*)0);
 FUNC_9(VAR_4);
err_create:
 FUNC_4(&VAR_1);
 return VAR_6;

err_start:
 FUNC_6(VAR_2, VAR_4, VAR_7);
 FUNC_2("NFS: Couldn't create server thread; err = %d\n", VAR_6);
 goto err_net;
}
