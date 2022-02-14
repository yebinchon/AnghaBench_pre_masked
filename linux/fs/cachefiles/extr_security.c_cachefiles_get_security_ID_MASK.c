
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cred {int dummy; } ;
struct cachefiles_cache {struct cred* cache_cred; int secctx; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int) ;
 int VAR_1 ;
 int FUNC_2 (char*,int) ;
 struct cred* FUNC_3 (int ) ;
 int FUNC_4 (struct cred*) ;
 int FUNC_5 (struct cred*,int ) ;

int FUNC_6(struct cachefiles_cache *VAR_2)
{
 struct cred *VAR_3;
 int VAR_4;

 FUNC_0("{%s}", VAR_2->secctx);

 VAR_3 = FUNC_3(VAR_1);
 if (!VAR_3) {
  VAR_4 = -VAR_0;
  goto error;
 }

 if (VAR_2->secctx) {
  VAR_4 = FUNC_5(VAR_3, VAR_2->secctx);
  if (VAR_4 < 0) {
   FUNC_4(VAR_3);
   FUNC_2("Security denies permission to nominate security context: error %d\n",
          VAR_4);
   goto error;
  }
 }

 VAR_2->cache_cred = VAR_3;
 VAR_4 = 0;
error:
 FUNC_1(" = %d", VAR_4);
 return VAR_4;
}
