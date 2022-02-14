
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfsd_net {void* svc_export_cache; void* svc_expkey_cache; } ;
struct TYPE_2__ {int inum; } ;
struct net {TYPE_1__ ns; } ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int *,struct net*) ;
 int FUNC_3 (void*,struct net*) ;
 int FUNC_4 (void*,struct net*) ;
 int FUNC_5 (void*,struct net*) ;
 int FUNC_6 (char*,int ) ;
 struct nfsd_net* FUNC_7 (struct net*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_8(struct net *VAR_3)
{
 int VAR_4;
 struct nfsd_net *VAR_5 = FUNC_7(VAR_3, VAR_0);

 FUNC_6("nfsd: initializing export module (net: %x).\n", VAR_3->ns.inum);

 VAR_5->svc_export_cache = FUNC_2(&VAR_2, VAR_3);
 if (FUNC_0(VAR_5->svc_export_cache))
  return FUNC_1(VAR_5->svc_export_cache);
 VAR_4 = FUNC_4(VAR_5->svc_export_cache, VAR_3);
 if (VAR_4)
  goto destroy_export_cache;

 VAR_5->svc_expkey_cache = FUNC_2(&VAR_1, VAR_3);
 if (FUNC_0(VAR_5->svc_expkey_cache)) {
  VAR_4 = FUNC_1(VAR_5->svc_expkey_cache);
  goto unregister_export_cache;
 }
 VAR_4 = FUNC_4(VAR_5->svc_expkey_cache, VAR_3);
 if (VAR_4)
  goto destroy_expkey_cache;
 return 0;

destroy_expkey_cache:
 FUNC_3(VAR_5->svc_expkey_cache, VAR_3);
unregister_export_cache:
 FUNC_5(VAR_5->svc_export_cache, VAR_3);
destroy_export_cache:
 FUNC_3(VAR_5->svc_export_cache, VAR_3);
 return VAR_4;
}
