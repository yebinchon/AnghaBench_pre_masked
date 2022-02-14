
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct svc_rqst {int rq_chandle; int * rq_gssclient; int * rq_client; } ;
struct svc_export {scalar_t__ ex_nflavors; } ;
struct nfsd_net {struct cache_detail* svc_export_cache; } ;
struct cache_detail {int dummy; } ;


 int VAR_0 ;
 struct svc_export* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct svc_export*) ;
 int FUNC_2 (struct svc_export*) ;
 int FUNC_3 (struct svc_rqst*) ;
 struct svc_export* FUNC_4 (struct cache_detail*,int *,int,int *,int *) ;
 int FUNC_5 (struct svc_export*) ;
 struct nfsd_net* FUNC_6 (int ,int ) ;
 int VAR_1 ;

struct svc_export *
FUNC_7(struct svc_rqst *VAR_2, int VAR_3, u32 *VAR_4)
{
 struct svc_export *VAR_5, *VAR_6 = FUNC_0(-VAR_0);
 struct nfsd_net *VAR_7 = FUNC_6(FUNC_3(VAR_2), VAR_1);
 struct cache_detail *VAR_8 = VAR_7->svc_export_cache;

 if (VAR_2->rq_client == ((void*)0))
  goto gss;


 VAR_6 = FUNC_4(VAR_8, VAR_2->rq_client, VAR_3,
         VAR_4, &VAR_2->rq_chandle);
 if (FUNC_2(VAR_6) == -VAR_0)
  goto gss;
 if (FUNC_1(VAR_6))
  return VAR_6;

 if (VAR_6->ex_nflavors > 0)
  return VAR_6;
gss:

 if (VAR_2->rq_gssclient == ((void*)0))
  return VAR_6;
 VAR_5 = FUNC_4(VAR_8, VAR_2->rq_gssclient, VAR_3, VAR_4,
      &VAR_2->rq_chandle);
 if (FUNC_2(VAR_5) == -VAR_0)
  return VAR_6;
 if (!FUNC_1(VAR_6))
  FUNC_5(VAR_6);
 return VAR_5;
}
