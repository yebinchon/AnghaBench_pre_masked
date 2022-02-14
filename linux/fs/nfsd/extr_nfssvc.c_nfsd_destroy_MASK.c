
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nfsd_net {TYPE_1__* nfsd_serv; } ;
struct net {int dummy; } ;
struct TYPE_3__ {int sv_nrthreads; } ;


 struct nfsd_net* FUNC_0 (struct net*,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,struct net*) ;

void FUNC_3(struct net *VAR_1)
{
 struct nfsd_net *VAR_2 = FUNC_0(VAR_1, VAR_0);
 int VAR_3 = (VAR_2->nfsd_serv->sv_nrthreads == 1);

 if (VAR_3)
  FUNC_2(VAR_2->nfsd_serv, VAR_1);
 FUNC_1(VAR_2->nfsd_serv);
 if (VAR_3)
  VAR_2->nfsd_serv = ((void*)0);
}
