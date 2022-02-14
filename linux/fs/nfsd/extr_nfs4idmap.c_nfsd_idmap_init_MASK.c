
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd_net {void* idtoname_cache; void* nametoid_cache; } ;
struct net {int dummy; } ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int *,struct net*) ;
 int FUNC_3 (void*,struct net*) ;
 int FUNC_4 (void*,struct net*) ;
 int FUNC_5 (void*,struct net*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct nfsd_net* FUNC_6 (struct net*,int ) ;
 int VAR_2 ;

int
FUNC_7(struct net *VAR_3)
{
 int VAR_4;
 struct nfsd_net *VAR_5 = FUNC_6(VAR_3, VAR_2);

 VAR_5->idtoname_cache = FUNC_2(&VAR_0, VAR_3);
 if (FUNC_0(VAR_5->idtoname_cache))
  return FUNC_1(VAR_5->idtoname_cache);
 VAR_4 = FUNC_4(VAR_5->idtoname_cache, VAR_3);
 if (VAR_4)
  goto destroy_idtoname_cache;
 VAR_5->nametoid_cache = FUNC_2(&VAR_1, VAR_3);
 if (FUNC_0(VAR_5->nametoid_cache)) {
  VAR_4 = FUNC_1(VAR_5->nametoid_cache);
  goto unregister_idtoname_cache;
 }
 VAR_4 = FUNC_4(VAR_5->nametoid_cache, VAR_3);
 if (VAR_4)
  goto destroy_nametoid_cache;
 return 0;

destroy_nametoid_cache:
 FUNC_3(VAR_5->nametoid_cache, VAR_3);
unregister_idtoname_cache:
 FUNC_5(VAR_5->idtoname_cache, VAR_3);
destroy_idtoname_cache:
 FUNC_3(VAR_5->idtoname_cache, VAR_3);
 return VAR_4;
}
