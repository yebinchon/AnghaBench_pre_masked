
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_serv {int sv_nrthreads; TYPE_1__* sv_ops; } ;
struct rpc_xprt {int dummy; } ;
struct TYPE_2__ {int (* svo_setup ) (struct svc_serv*,int *,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,struct rpc_xprt*,struct svc_serv*) ;
 int VAR_1 ;
 int FUNC_2 (struct svc_serv*,int *,int) ;
 int FUNC_3 (struct svc_serv*,int *,int) ;

__attribute__((used)) static int FUNC_4(int VAR_2, struct rpc_xprt *VAR_3,
      struct svc_serv *VAR_4)
{
 int VAR_5 = VAR_1;
 int VAR_6;

 FUNC_1(VAR_2, VAR_3, VAR_4);

 if (VAR_5 < VAR_0)
  VAR_5 = VAR_0;

 if (VAR_4->sv_nrthreads-1 == VAR_5)
  return 0;

 VAR_6 = VAR_4->sv_ops->svo_setup(VAR_4, ((void*)0), VAR_5);
 if (VAR_6) {
  VAR_4->sv_ops->svo_setup(VAR_4, ((void*)0), 0);
  return VAR_6;
 }
 FUNC_0("nfs_callback_up: service started\n");
 return 0;
}
