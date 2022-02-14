
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfsd_net {TYPE_2__* nfsd_serv; } ;
struct net {int dummy; } ;
struct TYPE_4__ {int sv_nrpools; TYPE_1__* sv_pools; } ;
struct TYPE_3__ {int sp_nrthreads; } ;


 struct nfsd_net* FUNC_0 (struct net*,int ) ;
 int VAR_0 ;

int FUNC_1(int VAR_1, int *VAR_2, struct net *VAR_3)
{
 int VAR_4 = 0;
 struct nfsd_net *VAR_5 = FUNC_0(VAR_3, VAR_0);

 if (VAR_5->nfsd_serv != ((void*)0)) {
  for (VAR_4 = 0; VAR_4 < VAR_5->nfsd_serv->sv_nrpools && VAR_4 < VAR_1; VAR_4++)
   VAR_2[VAR_4] = VAR_5->nfsd_serv->sv_pools[VAR_4].sp_nrthreads;
 }

 return 0;
}
