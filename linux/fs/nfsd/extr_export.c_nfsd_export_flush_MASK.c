
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd_net {int svc_export_cache; int svc_expkey_cache; } ;
struct net {int dummy; } ;


 int FUNC_0 (int ) ;
 struct nfsd_net* FUNC_1 (struct net*,int ) ;
 int VAR_0 ;

void
FUNC_2(struct net *VAR_1)
{
 struct nfsd_net *VAR_2 = FUNC_1(VAR_1, VAR_0);

 FUNC_0(VAR_2->svc_expkey_cache);
 FUNC_0(VAR_2->svc_export_cache);
}
