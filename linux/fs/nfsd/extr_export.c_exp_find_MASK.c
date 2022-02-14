
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct svc_export {int h; int ek_path; } ;
struct svc_expkey {int h; int ek_path; } ;
struct nfsd_net {int svc_expkey_cache; } ;
struct cache_req {int dummy; } ;
struct cache_detail {int net; } ;
struct auth_domain {int dummy; } ;


 struct svc_export* FUNC_0 (struct svc_export*) ;
 scalar_t__ FUNC_1 (struct svc_export*) ;
 int FUNC_2 (int *,int ) ;
 struct svc_export* FUNC_3 (int ,struct auth_domain*,int,int *,struct cache_req*) ;
 struct svc_export* FUNC_4 (struct cache_detail*,struct auth_domain*,int *,struct cache_req*) ;
 struct nfsd_net* FUNC_5 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static struct svc_export *FUNC_6(struct cache_detail *VAR_1,
       struct auth_domain *VAR_2, int VAR_3,
       u32 *VAR_4, struct cache_req *VAR_5)
{
 struct svc_export *VAR_6;
 struct nfsd_net *VAR_7 = FUNC_5(VAR_1->net, VAR_0);
 struct svc_expkey *VAR_8 = FUNC_3(VAR_7->svc_expkey_cache, VAR_2, VAR_3, VAR_4, VAR_5);
 if (FUNC_1(VAR_8))
  return FUNC_0(VAR_8);

 VAR_6 = FUNC_4(VAR_1, VAR_2, &VAR_8->ek_path, VAR_5);
 FUNC_2(&VAR_8->h, VAR_7->svc_expkey_cache);

 if (FUNC_1(VAR_6))
  return FUNC_0(VAR_6);
 return VAR_6;
}
