
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {int dummy; } ;
struct svc_export {int h; struct cache_detail* cd; struct path ex_path; struct auth_domain* ex_client; } ;
struct cache_req {int dummy; } ;
struct cache_detail {int dummy; } ;
struct auth_domain {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct svc_export* FUNC_0 (int) ;
 int FUNC_1 (struct cache_detail*,int *,struct cache_req*) ;
 struct svc_export* FUNC_2 (struct svc_export*) ;

__attribute__((used)) static struct svc_export *
FUNC_3(struct cache_detail *VAR_2, struct auth_domain *VAR_3,
  const struct path *VAR_4, struct cache_req *VAR_5)
{
 struct svc_export *VAR_6, VAR_7;
 int VAR_8;

 if (!VAR_3)
  return FUNC_0(-VAR_0);

 VAR_7.ex_client = VAR_3;
 VAR_7.ex_path = *VAR_4;
 VAR_7.cd = VAR_2;

 VAR_6 = FUNC_2(&VAR_7);
 if (VAR_6 == ((void*)0))
  return FUNC_0(-VAR_1);
 VAR_8 = FUNC_1(VAR_2, &VAR_6->h, VAR_5);
 if (VAR_8)
  return FUNC_0(VAR_8);
 return VAR_6;
}
