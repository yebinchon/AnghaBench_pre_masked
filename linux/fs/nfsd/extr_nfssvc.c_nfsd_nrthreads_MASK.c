
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfsd_net {TYPE_1__* nfsd_serv; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int sv_nrthreads; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct nfsd_net* FUNC_2 (struct net*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_3(struct net *VAR_2)
{
 int VAR_3 = 0;
 struct nfsd_net *VAR_4 = FUNC_2(VAR_2, VAR_1);

 FUNC_0(&VAR_0);
 if (VAR_4->nfsd_serv)
  VAR_3 = VAR_4->nfsd_serv->sv_nrthreads;
 FUNC_1(&VAR_0);
 return VAR_3;
}
