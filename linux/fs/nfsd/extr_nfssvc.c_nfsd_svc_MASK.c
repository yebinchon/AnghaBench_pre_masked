
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfsd_net {int nfsd_net_up; TYPE_2__* nfsd_serv; } ;
struct net {int dummy; } ;
struct cred {int dummy; } ;
struct TYPE_4__ {int sv_nrthreads; TYPE_1__* sv_ops; } ;
struct TYPE_3__ {int (* svo_setup ) (TYPE_2__*,int *,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct nfsd_net* FUNC_5 (struct net*,int ) ;
 int FUNC_6 (struct net*) ;
 int FUNC_7 (struct net*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_8 (struct net*) ;
 int FUNC_9 (int,struct net*,struct cred const*) ;
 int FUNC_10 (TYPE_2__*,int *,int) ;

int
FUNC_11(int VAR_3, struct net *VAR_4, const struct cred *VAR_5)
{
 int VAR_6;
 bool VAR_7;
 struct nfsd_net *VAR_8 = FUNC_5(VAR_4, VAR_2);

 FUNC_3(&VAR_1);
 FUNC_0("nfsd: creating service\n");

 VAR_3 = FUNC_1(VAR_3, 0);
 VAR_3 = FUNC_2(VAR_3, VAR_0);
 VAR_6 = 0;

 if (VAR_3 == 0 && VAR_8->nfsd_serv == ((void*)0))
  goto out;

 VAR_6 = FUNC_6(VAR_4);
 if (VAR_6)
  goto out;

 VAR_7 = VAR_8->nfsd_net_up;

 VAR_6 = FUNC_9(VAR_3, VAR_4, VAR_5);
 if (VAR_6)
  goto out_destroy;
 VAR_6 = VAR_8->nfsd_serv->sv_ops->svo_setup(VAR_8->nfsd_serv,
   ((void*)0), VAR_3);
 if (VAR_6)
  goto out_shutdown;




 VAR_6 = VAR_8->nfsd_serv->sv_nrthreads - 1;
out_shutdown:
 if (VAR_6 < 0 && !VAR_7)
  FUNC_8(VAR_4);
out_destroy:
 FUNC_7(VAR_4);
out:
 FUNC_4(&VAR_1);
 return VAR_6;
}
