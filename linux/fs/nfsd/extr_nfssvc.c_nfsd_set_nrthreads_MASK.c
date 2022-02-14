
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nfsd_net {TYPE_2__* nfsd_serv; } ;
struct net {int dummy; } ;
struct TYPE_5__ {int sv_nrpools; int * sv_pools; TYPE_1__* sv_ops; } ;
struct TYPE_4__ {int (* svo_setup ) (TYPE_2__*,int *,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int *) ;
 struct nfsd_net* FUNC_3 (struct net*,int ) ;
 int FUNC_4 (struct net*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (TYPE_2__*,int *,int) ;
 int FUNC_6 (TYPE_2__*) ;

int FUNC_7(int VAR_3, int *VAR_4, struct net *VAR_5)
{
 int VAR_6 = 0;
 int VAR_7 = 0;
 int VAR_8 = 0;
 struct nfsd_net *VAR_9 = FUNC_3(VAR_5, VAR_2);

 FUNC_0(!FUNC_2(&VAR_1));

 if (VAR_9->nfsd_serv == ((void*)0) || VAR_3 <= 0)
  return 0;

 if (VAR_3 > VAR_9->nfsd_serv->sv_nrpools)
  VAR_3 = VAR_9->nfsd_serv->sv_nrpools;


 VAR_7 = 0;
 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  VAR_4[VAR_6] = FUNC_1(VAR_4[VAR_6], VAR_0);
  VAR_7 += VAR_4[VAR_6];
 }
 if (VAR_7 > VAR_0) {

  for (VAR_6 = 0; VAR_6 < VAR_3 && VAR_7 > 0; VAR_6++) {
       int VAR_10 = VAR_4[VAR_6] * VAR_0 / VAR_7;
   VAR_7 -= (VAR_4[VAR_6] - VAR_10);
   VAR_4[VAR_6] = VAR_10;
  }
  for (VAR_6 = 0; VAR_6 < VAR_3 && VAR_7 > 0; VAR_6++) {
   VAR_4[VAR_6]--;
   VAR_7--;
  }
 }





 if (VAR_4[0] == 0)
  VAR_4[0] = 1;


 FUNC_6(VAR_9->nfsd_serv);
 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  VAR_8 = VAR_9->nfsd_serv->sv_ops->svo_setup(VAR_9->nfsd_serv,
    &VAR_9->nfsd_serv->sv_pools[VAR_6], VAR_4[VAR_6]);
  if (VAR_8)
   break;
 }
 FUNC_4(VAR_5);
 return VAR_8;
}
