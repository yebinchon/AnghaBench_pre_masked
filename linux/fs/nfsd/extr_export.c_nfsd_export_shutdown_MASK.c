
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfsd_net {int svc_export_cache; int svc_expkey_cache; } ;
struct TYPE_2__ {int inum; } ;
struct net {TYPE_1__ ns; } ;


 int FUNC_0 (int ,struct net*) ;
 int FUNC_1 (int ,struct net*) ;
 int FUNC_2 (char*,int ) ;
 struct nfsd_net* FUNC_3 (struct net*,int ) ;
 int VAR_0 ;
 int FUNC_4 (struct net*) ;

void
FUNC_5(struct net *VAR_1)
{
 struct nfsd_net *VAR_2 = FUNC_3(VAR_1, VAR_0);

 FUNC_2("nfsd: shutting down export module (net: %x).\n", VAR_1->ns.inum);

 FUNC_1(VAR_2->svc_expkey_cache, VAR_1);
 FUNC_1(VAR_2->svc_export_cache, VAR_1);
 FUNC_0(VAR_2->svc_expkey_cache, VAR_1);
 FUNC_0(VAR_2->svc_export_cache, VAR_1);
 FUNC_4(VAR_1);

 FUNC_2("nfsd: export shutdown complete (net: %x).\n", VAR_1->ns.inum);
}
