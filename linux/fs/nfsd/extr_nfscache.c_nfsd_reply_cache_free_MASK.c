
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_cacherep {int dummy; } ;
struct nfsd_net {int dummy; } ;
struct nfsd_drc_bucket {int cache_lock; } ;


 int FUNC_0 (struct nfsd_drc_bucket*,struct svc_cacherep*,struct nfsd_net*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct nfsd_drc_bucket *VAR_0, struct svc_cacherep *VAR_1,
   struct nfsd_net *VAR_2)
{
 FUNC_1(&VAR_0->cache_lock);
 FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_2(&VAR_0->cache_lock);
}
