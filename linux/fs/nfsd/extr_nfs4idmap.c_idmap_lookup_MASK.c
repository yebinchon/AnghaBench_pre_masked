
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int rq_chandle; } ;
struct ent {int h; } ;
struct cache_detail {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cache_detail*,int *,int *) ;
 int FUNC_1 (int *,struct cache_detail*) ;

__attribute__((used)) static int
FUNC_2(struct svc_rqst *VAR_2,
  struct ent *(*VAR_3)(struct cache_detail *, struct ent *),
  struct ent *VAR_4, struct cache_detail *VAR_5, struct ent **VAR_6)
{
 int VAR_7;

 *VAR_6 = VAR_3(VAR_5, VAR_4);
 if (!*VAR_6)
  return -VAR_0;
 retry:
 VAR_7 = FUNC_0(VAR_5, &(*VAR_6)->h, &VAR_2->rq_chandle);

 if (VAR_7 == -VAR_1) {
  struct ent *VAR_8 = *VAR_6;
  *VAR_6 = VAR_3(VAR_5, VAR_4);
  if (*VAR_6 != VAR_8)
   goto retry;
  FUNC_1(&(*VAR_6)->h, VAR_5);
 }
 return VAR_7;
}
