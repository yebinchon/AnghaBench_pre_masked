
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd_net {int nametoid_cache; int idtoname_cache; } ;
struct net {int dummy; } ;


 int FUNC_0 (int ,struct net*) ;
 int FUNC_1 (int ,struct net*) ;
 struct nfsd_net* FUNC_2 (struct net*,int ) ;
 int VAR_0 ;

void
FUNC_3(struct net *VAR_1)
{
 struct nfsd_net *VAR_2 = FUNC_2(VAR_1, VAR_0);

 FUNC_1(VAR_2->idtoname_cache, VAR_1);
 FUNC_1(VAR_2->nametoid_cache, VAR_1);
 FUNC_0(VAR_2->idtoname_cache, VAR_1);
 FUNC_0(VAR_2->nametoid_cache, VAR_1);
}
